import random
import math
from typing import Tuple

class RSA:
    def __init__(self, bits: int = 16):
        self.bits = bits
        self.e = 65537  # Common public exponent
        self.d = None
        self.n = None
        self.p = None
        self.q = None
    
    def _is_probable_prime(self, n: int, k: int = 5) -> bool:
        """Miller-Rabin primality test"""
        if n == 2 or n == 3:
            return True
        if n < 2 or n % 2 == 0:
            return False
            
        # Write n as 2^r * d + 1
        r, d = 0, n - 1
        while d % 2 == 0:
            d //= 2
            r += 1
            
        # Witness loop
        for _ in range(k):
            a = random.randrange(2, n - 2)
            x = pow(a, d, n)
            if x in (1, n - 1):
                continue
            for _ in range(r - 1):
                x = pow(x, 2, n)
                if x == n - 1:
                    break
            else:
                return False
        return True
    
    def _generate_prime(self) -> int:
        """Generate a prime number of specified bits"""
        while True:
            p = random.getrandbits(self.bits)
            p |= (1 << self.bits - 1) | 1  # Ensure odd and correct bit length
            if self._is_probable_prime(p):
                return p
    
    def _modinv(self, a: int, m: int) -> int:
        """Modular multiplicative inverse using extended Euclidean algorithm"""
        def egcd(a: int, b: int) -> Tuple[int, int, int]:
            if b == 0:
                return (a, 1, 0)
            g, x, y = egcd(b, a % b)
            return (g, y, x - (a // b) * y)
            
        g, x, _ = egcd(a, m)
        if g != 1:
            raise ValueError("Modular inverse does not exist")
        return x % m
    
    def generate_keypair(self) -> Tuple[int, int, int]:
        """Generate RSA key pair"""
        # Generate two distinct primes
        self.p = self._generate_prime()
        while True:
            self.q = self._generate_prime()
            if self.q != self.p:
                break
                
        self.n = self.p * self.q
        phi = (self.p - 1) * (self.q - 1)
        self.d = self._modinv(self.e, phi)
        
        return (self.e, self.d, self.n)
    
    def encrypt(self, message: int) -> int:
        """Encrypt a message"""
        if message >= self.n:
            raise ValueError("Message too large")
        return pow(message, self.e, self.n)
    
    def decrypt(self, ciphertext: int) -> int:
        """Decrypt a ciphertext"""
        return pow(ciphertext, self.d, self.n)
    
    def get_public_key(self) -> Tuple[int, int]:
        """Get public key components"""
        return (self.e, self.n)
    
    def get_private_key(self) -> int:
        """Get private key component"""
        return self.d

# Example usage
if __name__ == "__main__":
    # Create RSA instance
    rsa = RSA(bits=16)
    
    # Generate key pair
    e, d, n = rsa.generate_keypair()
    print("RSA Key Components:")
    print(f"Public Key (e, n): ({e}, {n})")
    print(f"Private Key (d): {d}")
    
    # Test encryption and decryption
    message = 42
    encrypted = rsa.encrypt(message)
    decrypted = rsa.decrypt(encrypted)
    
    print(f"\nOriginal Message: {message}")
    print(f"Encrypted: {encrypted}")
    print(f"Decrypted: {decrypted}")
    print(f"Success: {message == decrypted}") 