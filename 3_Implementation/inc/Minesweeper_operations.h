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
 

#ifndef __MINESWEEPER_OPERATIONS_H__
#define __MINESWEEPER_OPERATIONS_H__

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * @brief  initializes all grid tiles to '.'
 * 
 */
void init(); 

/**
 * @brief prints grid with the cursor represented by <>
 * 
 */
void display();

/**
 * @brief randomly generates 10 mines
 * 
 */
void genMine ();

/**
 * @brief genreates keys around the mines
 * 
 */

void keygen ();

/**
 * @brief to flag a probable mine 
 * 
 */
void flag ();

/**
 * @brief moves cursor depending on value of n
 * 
 */
void moveCursor (int n);

/**
 * @brief click on the mine
 * 
 */
void click (int x, int y);

#endif
