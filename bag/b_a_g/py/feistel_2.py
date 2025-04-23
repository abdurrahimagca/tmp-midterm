import random

# Basit 4-bit S-box
S_BOX = [
    [0xE, 0x4, 0xD, 0x1,
     0x2, 0xF, 0xB, 0x8,
     0x3, 0xA, 0x6, 0xC,
     0x5, 0x9, 0x0, 0x7]
]

# Basit 32-bit permütasyon (şimdilik kimlik)
PERMUTATION = list(range(32))

def apply_sbox(bits32):
    # bits32: 32-bit int
    output = 0
    for i in range(8):
        nibble = (bits32 >> (28 - i*4)) & 0xF
        s_val = S_BOX[0][nibble]
        output = (output << 4) | s_val
    return output

def permute(bits32):
    return bits32  # Gerçek permütasyon için bit yerlerini değiştirebilirsin

def f_function(right32, subkey32):
    # Basit f fonksiyonu: XOR → S-box → permütasyon
    xored = right32 ^ subkey32
    sboxed = apply_sbox(xored)
    return permute(sboxed)

def feistel_encrypt_block(block64, key32, rounds=16):
    assert len(block64) == 8
    block = int.from_bytes(block64, 'big')
    left = (block >> 32) & 0xFFFFFFFF
    right = block & 0xFFFFFFFF

    # Basit round key üretimi (aynı key her turda)
    round_keys = [key32] * rounds

    for i in range(rounds):
        new_left = right
        right = left ^ f_function(right, round_keys[i])
        left = new_left

    combined = (right << 32) | left
    return combined.to_bytes(8, 'big')

def feistel_decrypt_block(block64, key32, rounds=16):
    assert len(block64) == 8
    block = int.from_bytes(block64, 'big')
    right = (block >> 32) & 0xFFFFFFFF
    left = block & 0xFFFFFFFF

    round_keys = [key32] * rounds

    for i in reversed(range(rounds)):
        new_right = left
        left = right ^ f_function(left, round_keys[i])
        right = new_right

    combined = (left << 32) | right
    return combined.to_bytes(8, 'big')

# --- DEMO ---
if __name__ == "__main__":
    plaintext = b"apo123!!"  # 8 byte
    key = random.getrandbits(32)  # 32-bit key

    print("Orijinal     :", plaintext)

    encrypted = feistel_encrypt_block(plaintext, key)
    print("Şifreli Hex  :", encrypted.hex())

    decrypted = feistel_decrypt_block(encrypted, key)
    print("Çözülmüş     :", decrypted)
