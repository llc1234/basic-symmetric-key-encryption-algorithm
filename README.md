# basic-symmetric-key-encryption-algorithm


Key Generation (generate_key):

This function generates a random key of a specified length using characters from the set of uppercase letters, lowercase letters, digits, and special characters.
Encryption (encrypt):

The encrypt function takes a plaintext and a key as input.
It uses the key to seed the random number generator (random.seed(key)).
It then iterates through each character in the plaintext, adds a random value between 1 and 255 to its ASCII code, and appends the resulting character to the encrypted_text.
Decryption (decrypt):

The decrypt function takes an encrypted text and a key as input.
It uses the key to seed the random number generator (random.seed(key)).
Similar to encryption, it iterates through each character in the encrypted text, subtracts a random value between 1 and 255 from its ASCII code, and appends the resulting character to the decrypted_text.
Sample Usage:

The script initializes a sample plaintext, generates a random key of the same length as the plaintext, encrypts the plaintext, prints the encrypted result, decrypts it, and prints the decrypted text.
Potential Issues:
The security of this encryption method is questionable, and it should not be used for any real-world secure communications.
The use of the random module for encryption introduces predictability, as the same seed will produce the same random sequence. In cryptographic applications, a strong cryptographic library should be used instead of relying on the random module.
