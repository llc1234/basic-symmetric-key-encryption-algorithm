#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


std::string encrypt(const std::string& plaintext, int key) {
    srand(key);
    std::string encryptedText;

    for (size_t i = 0; i < plaintext.length(); ++i) {
        encryptedText += static_cast<char>(plaintext[i] + (rand() % 255) + 1);
    }

    return encryptedText;
}

std::string decrypt(const std::string& encryptedText, int key) {
    srand(key);
    std::string decryptedText;

    for (size_t i = 0; i < encryptedText.length(); ++i) {
        decryptedText += static_cast<char>(encryptedText[i] - (rand() % 255) - 1);
    }

    return decryptedText;
}

int main() {
    std::string plaintext = "Hello, World!";
    int key = 69;

    std::string encryptedText = encrypt(plaintext, key);
    std::cout << "Encrypted: " << encryptedText << std::endl;

    std::string decryptedText = decrypt(encryptedText, key);
    std::cout << "Decrypted: " << decryptedText << std::endl;

    return 0;
}
