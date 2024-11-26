# One-Time Pad Encryption and Decryption

This project demonstrates the implementation of the One-Time Pad (OTP) encryption and decryption technique using C. The One-Time Pad is a theoretically unbreakable encryption technique that requires a pre-shared key as long as the message to be encrypted.

## Table of Contents

- [Overview](#overview)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
  - [Encryption](#encryption)
  - [Decryption](#decryption)
- [Code Explanation](#code-explanation)

  ## Overview

The One-Time Pad (OTP) is a symmetric key encryption technique where a plaintext is paired with a random secret key (or pad) that is the same length as the plaintext. Each bit or character of the plaintext is encrypted by combining it with the corresponding bit or character from the pad using modular addition. When the key is random, used only once, and kept secret, the OTP provides perfect secrecy.

## Prerequisites

- A C compiler (e.g., GCC)
- Basic knowledge of C programming
- Command line interface

## Usage

### Encryption

To encrypt a file using the OTP encryption method
``` bash
make
./encrypt secret 
```
To decrypt a file using the OTP encryption method
``` bash
./decrypt crypted.out key.out
cat decrypt.out
```

