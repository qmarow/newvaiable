all: libft.a

libft.a: object
	ar rcs libft.a *.o
object:
	gcc -Wall -Werror -Wextra -I . -c *.c

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a
re: fclean all
