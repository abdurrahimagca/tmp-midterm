import random
from typing import List, Callable, Tuple

class FeistelCipher:
    """
    Implementation of a Feistel Network Cipher
    
    A Feistel network is a symmetric structure used in the construction of block ciphers.
    It consists of multiple rounds where the block is split into two halves, and one half
    is transformed using a function of the other half and a subkey.
    """
    
    def __init__(self, block_size: int = 64, num_rounds: int = 16):
        """
        Initialize the Feistel cipher with given parameters
        
        Args:
            block_size: Size of the block in bits (must be even)
            num_rounds: Number of rounds in the Feistel network
        """
        if block_size % 2 != 0:
            raise ValueError("Block size must be even")
            
        self.block_size = block_size
        self.half_block_size = block_size // 2
        self.num_rounds = num_rounds
        self.subkeys = []
        
    def generate_subkeys(self, master_key: int) -> List[int]:
        """
        Generate subkeys for each round from the master key
        
        Args:
            master_key: The main key used to derive round keys
            
        Returns:
            A list of subkeys for each round
        """
        # Simple subkey generation - in real implementations this would be more complex
        self.subkeys = []
        key_mask = (1 << self.half_block_size) - 1
        
        # Seed the random generator with the master key for deterministic results
        random.seed(master_key)
        
        for _ in range(self.num_rounds):
            # Generate a random subkey for each round
            subkey = random.getrandbits(self.half_block_size) & key_mask
            self.subkeys.append(subkey)
            
        return self.subkeys
    
    def round_function(self, half_block: int, subkey: int) -> int:
        """
        The F function in the Feistel network
        
        This is a simple implementation - in real ciphers this would be more complex
        
        Args:
            half_block: The right half of the block
            subkey: The subkey for this round
            
        Returns:
            The result of applying the F function
        """
        # Example F function: XOR with subkey, then apply some bit manipulation
        result = half_block ^ subkey
        
        # Additional bit manipulation (rotate left by 3)
        mask = (1 << self.half_block_size) - 1
        rotated = ((result << 3) | (result >> (self.half_block_size - 3))) & mask
        
        return rotated
    
    def encrypt_block(self, plaintext: int) -> int:
        """
        Encrypt a single block using the Feistel network
        
        Args:
            plaintext: The plaintext block to encrypt
            
        Returns:
            The encrypted block
        """
        if not self.subkeys:
            raise ValueError("Subkeys must be generated before encryption")
            
        # Split the block into left and right halves
        mask = (1 << self.half_block_size) - 1
        left = (plaintext >> self.half_block_size) & mask
        right = plaintext & mask
        
        # Apply Feistel rounds
        for i in range(self.num_rounds):
            # Apply the round function to the right half
            f_output = self.round_function(right, self.subkeys[i])
            
            # XOR the left half with the output of the round function
            new_right = left ^ f_output
            
            # Swap the halves (except for the last round)
            if i < self.num_rounds - 1:
                left, right = right, new_right
            else:
                # For the last round, don't swap
                left, right = left, new_right
        
        # Combine the halves to form the ciphertext
        ciphertext = (left << self.half_block_size) | right
        return ciphertext
    
    def decrypt_block(self, ciphertext: int) -> int:
        """
        Decrypt a single block using the Feistel network
        
        Args:
            ciphertext: The ciphertext block to decrypt
            
        Returns:
            The decrypted block
        """
        if not self.subkeys:
            raise ValueError("Subkeys must be generated before decryption")
            
        # Split the block into left and right halves
        mask = (1 << self.half_block_size) - 1
        left = (ciphertext >> self.half_block_size) & mask
        right = ciphertext & mask
        
        # Apply Feistel rounds in reverse order
        for i in range(self.num_rounds - 1, -1, -1):
            # Apply the round function to the right half
            f_output = self.round_function(right, self.subkeys[i])
            
            # XOR the left half with the output of the round function
            new_right = left ^ f_output
            
            # Swap the halves (except for the first round of decryption)
            if i > 0:
                left, right = right, new_right
            else:
                # For the first round of decryption (last of encryption), don't swap
                left, right = left, new_right
        
        # Combine the halves to form the plaintext
        plaintext = (left << self.half_block_size) | right
        return plaintext

# Example usage
if __name__ == "__main__":
    # Create a Feistel cipher instance
    cipher = FeistelCipher(block_size=64, num_rounds=16)
    
    # Generate subkeys from a master key
    master_key = 0x1234567890ABCDEF
    subkeys = cipher.generate_subkeys(master_key)
    
    # Example plaintext block
    plaintext = 0x123456789ABCDEF0
    
    # Encrypt the plaintext
    ciphertext = cipher.encrypt_block(plaintext)
    
    # Decrypt the ciphertext
    decrypted = cipher.decrypt_block(ciphertext)
    
    # Output results
    print(f"Master Key: 0x{master_key:X}")
    print(f"Plaintext:  0x{plaintext:X}")
    print(f"Ciphertext: 0x{ciphertext:X}")
    print(f"Decrypted:  0x{decrypted:X}")
    print(f"Success:    {plaintext == decrypted}")
