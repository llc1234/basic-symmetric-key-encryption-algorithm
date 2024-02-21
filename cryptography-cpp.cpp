#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generateKey(int key_length) {
    const std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_-+=";

    std::string key;
    for (int i = 0; i < key_length; ++i) {
        key += characters[rand() % characters.length()];
    }

    return key;
}

std::string encrypt(const std::string& plaintext, const std::string& key) {
    srand(time(0));
    std::string encryptedText;

    for (size_t i = 0; i < plaintext.length(); ++i) {
        encryptedText += static_cast<char>(plaintext[i] + (rand() % 255) + 1);
    }

    return encryptedText;
}

std::string decrypt(const std::string& encryptedText, const std::string& key) {
    srand(time(0));
    std::string decryptedText;

    for (size_t i = 0; i < encryptedText.length(); ++i) {
        decryptedText += static_cast<char>(encryptedText[i] - (rand() % 255) - 1);
    }

    return decryptedText;
}

int main() {
    std::string plaintext = "Hello, World!";
    std::string key = generateKey(plaintext.length());

    std::string encryptedText = encrypt(plaintext, key);
    std::cout << "Encrypted: " << encryptedText << std::endl;

    std::string decryptedText = decrypt(encryptedText, key);
    std::cout << "Decrypted: " << decryptedText << std::endl;

    return 0;
}
