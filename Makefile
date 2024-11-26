DEC_SRC = decryption/decryption.c

ENC_SRC = encryption/encryption.c

all:
	gcc -o decrypt $(DEC_SRC)
	gcc -o encrypt $(ENC_SRC)

clean:
	rm -f *.out
	rm -f decrypt
	rm -f encrypt

fclean:
	rm -f *.out
	rm -f decrypt
	rm -f encrypt

re: fclean all

.PHONY: all clean fclean re
