/**
 * @file Minesweeper_operations.h
 * @author Manoj R (you@domain.com)
 * @brief Header files
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */



#ifndef __MINESWEEPER_OPERATIONS_H__
#define __MINESWEEPER_OPERATIONS_H__



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
// #include <termios.h>
 //#include <unistd.h>

/**
 * @brief // initializes all grid tiles to '.'
 * 
 */
void init();
/**
 * @brief //prints grid with the cursor represented by <>
 * 
 */
void display();
/**
 * @brief to generate mines
 * 
 */
void genMine();
/**
 * @brief to generate keys
 * 
 */
void keygen();
/**
 * @brief to flag a probable mine point
 * 
 */
void flag();
/**
 * @brief 
 * 
 * @param n is to move on points
 */
void moveCursor(int n);
/**
 * @brief 
 * 
 * @param x points
 * @param y points
 */
void click(int x, int y);
int main();
#endif
