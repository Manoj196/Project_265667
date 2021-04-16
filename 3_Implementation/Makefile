all: sweep.exe

sweep.exe: sweep.o
	 gcc -o sweep.exe sweep.o

sweep.o: sweep.c
	 gcc -c sweep.c
     
clean:
	 rm sweep.o sweep.exe
