#include <stdio.h>
#include <stdlib.h>


void encrypt(FILE *file, FILE *encrypted_file, FILE *key_file)
{
    int c;
    while ((c = fgetc(file)) != EOF) {

        int key = rand();
        int encrypted_char = c ^ key;

        fputc(key, key_file);
        fputc(encrypted_char, encrypted_file);
    }
}

int main(int argc, char **argv)
{
    if (argc != 2) {
        printf("Enter file to-be encrypted\n");
    } else {
        char *file_name = argv[1];
        FILE *file = fopen(file_name, "r");
        FILE *encrypted_file = fopen("crypted.out", "w");
        FILE *key_file = fopen("key.out", "w");

        encrypt(file, encrypted_file, key_file);
        fclose(file);
        fclose(encrypted_file);
        fclose(key_file);
    }
    return 0;
}
