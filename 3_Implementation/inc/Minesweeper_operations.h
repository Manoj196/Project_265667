/**
 * @file Minesweeper_operations.h
 * @author Manoj R (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
// #include <termios.h>
 //#include <unistd.h>

char grid[10][10], key[10][10];
int mine[10];
int px = 0, py = 0;
int win = 0, lose = 0;
int firstClick = 0;
