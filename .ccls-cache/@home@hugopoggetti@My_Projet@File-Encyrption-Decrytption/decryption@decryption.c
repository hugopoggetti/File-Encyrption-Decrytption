#include <stdio.h>
#include <stdlib.h>

void decrypt(FILE *encrypted_file, FILE *key_file, FILE *decrypted_file)
{
    int encrypted_char = 0;
    int key_char = 0;
    while ((encrypted_char = fgetc(encrypted_file)) != EOF && (key_char = fgetc(key_file)) != EOF) {
        int decrypted_char = encrypted_char ^ key_char;
        fputc(decrypted_char, decrypted_file);
    }
}

int main(int argc, char **argv)
{
    if (argc != 3) {
        printf("Enter the encrypted file and the key file\n");
    } else {
        FILE *encrypted_file = fopen(argv[1], "r");
        FILE *key_file = fopen(argv[2], "r");
        FILE *decrypted_file = fopen("decrypt.out", "w");

        decrypt(encrypted_file, key_file, decrypted_file);

        fclose(encrypted_file);
        fclose(key_file);
        fclose(decrypted_file);
    }
    return 0;
}
