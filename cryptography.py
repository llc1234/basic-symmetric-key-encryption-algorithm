import random

def generate_key(key_length):
    return ''.join(random.choice('ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_-+=') for _ in range(key_length))

def encrypt(plaintext, key):
    random.seed(key)
    encrypted_text = ""
    for char in plaintext:
        encrypted_text += chr(ord(char) + random.randint(1, 255))
    return encrypted_text

def decrypt(encrypted_text, key):
    random.seed(key)
    decrypted_text = ""
    for char in encrypted_text:
        decrypted_text += chr(ord(char) - random.randint(1, 255))
    return decrypted_text


plaintext = "Hello, World!"
key = generate_key(len(plaintext))

encrypted_text = encrypt(plaintext, key)
print("Encrypted:", encrypted_text)

decrypted_text = decrypt(encrypted_text, key)
print("Decrypted:", decrypted_text)
