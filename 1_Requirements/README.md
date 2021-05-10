# Requirements
## Introduction
   Minesweeper is a single-player perplex computer game. The goal of the diversion is to clear a rectangular board containing concealed "mines" or bombs without exploding any of them, with assistance from pieces of information about the quantity of neighbouring mines in each field. The amusement begins from the 1960s, and has been composed for some registering stages being used today. It has numerous varieties and offshoots.

# Research
   Minesweeper project is implemented with the help of valuable imformation obtained from wikipedia, geeksforgeeks, stack overflow to know about getch function and clear screen on gcc. The logical part is obtain from a paper pubish by harvard university called Algorithmic approach to playing minesweeper.

# Features
   Minesweeper is a good program to implement realtime inputs and changing outputs from the user by pressing various keys on the keyboard to perform different functions. Most text-based console applications didn’t take live input from the keyboard and they don’t modify the outputs that are already displayed. To modify the existing output, the screen is cleared and the modified output is printed to make it appear as if the existing output is being modified. To take realtime inputs from user without the need of any delimiters, we took unbuffered input from the keyboard using the getch function. The only data structures used are single dimensional and 2 dimensional arrays, excluding the built in data types.

# Defining Our System
   Minesweeper project is implemented on a 10x10 grid with a get mine function which is only called after the first click which is inputed by the used. Movecursor is used to move around the grid and click any points on the grid. A flag function is created to mark a point which could be a probable mine.
   
# SWOT ANALYSIS
   ![Untitled Workspace](https://user-images.githubusercontent.com/56036534/114536015-4b624880-9c6e-11eb-9850-47cd6719200b.jpg)

# 4W's and 1'H
# Who: 
   Minesweeper game is played all across the globe, some play because it is very engaging while some play during intervals. As this is a game with simple rules people of any age group can play as it only requires thinking ability and no physical work.

# What:
   Minesweeper is a single-player perplex computer game. The goal of the diversion is to clear a rectangular board containing concealed "mines" or bombs without exploding any of them, with assistance from pieces of information about the quantity of neighbouring mines in each field. The amusement begins from the 1960s, and has been composed for some registering stages being used today. It has numerous varieties and offshoots.
 
# When:
   This game can be played at anytime as time required to finish a single game is very less

# Where:
   Minesweeper is a single-player perplex computer game. This game is played on the terminal.

# How:
   This game is played using the move cursor to mark any points on the grid and flag a potential mine point.

# Detail requirements
# High Level Requirements:
  ID  | Description | Status
  ----|-------------|------------
   1  |  Grid       | Implemented
   2  |  Mine       | Implemented
   3  |  Cursor move| Implemented
   4  |  flag       | Implemented
   
# Low level Requirements:
  ID   |  Description  | Status
  -----|---------------|-----------
  1.1  | 2D array Grid | Implemented
  2.1  | Get Mine      | Implemented
  2.2  | Key generation| Implemented
  3.1  | Cursor move   | Implemented
  3.2  | click option  | Implemented
  4.1  | Flag          | Implemented
  5.1  | Display       | Implemented
