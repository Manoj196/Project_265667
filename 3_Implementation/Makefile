build: Minesweeper_main.c Src/Minesweeper_operations.c inc/Minesweeper_operations.h
	gcc $^ -Iinc -o Minesweeper_main.out -lm

run: build
	./Minesweeper_main.out

clean:
	rm -f Minesweeper_main.out
