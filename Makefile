CC=gcc
CFLAGS="-Wall"

debug:clean
	$(CC) $(CFLAGS) -g -o progel main.c
stable:clean
	$(CC) $(CFLAGS) -o progel main.c
clean:
	rm -vfr *~ progel
