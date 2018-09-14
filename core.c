//
//  core.c
//  Project 2
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "core.h"
#include "types.h"


#define UNDER_POPULATED 2
#define OVER_POPULATED 3
#define REPRODUCE 3

// This function should write the board 
// out the the given file
//
// i.e. given the board:
//
// 0 0 1
// 1 1 0
// 1 0 0
// 0 0 0 
//
// the following should be written to the file
//
// 3 4
// ..*
// **.
// *..
// ...
//
// One the first line you should write the width and height 
// Then if a cell is alive you should write a *
// if the cell is dead then you should write a .
//
// Hints:
//      use fprintf
//      check for NULL
//      use board->width to get the width
//      use board->height to get the height
//      use board->board[0][0] to get the first element
//
//  Return TRUE if the board is successfully written. Return FALSE if there is an error
//
int write_board(Board * board, FILE * fp) {
    return FALSE;
}

// This function should read in a board from a file
//
// i.e for the given file
//
// 2 3
// ..
// **
// .*
//
// the following values should be read into board
//
// board->width = 2
// board->height = 3
//
// board->board should have the values:
//     {
//      {0, 0},
//      {1, 1}, 
//      {0, 1}
//     }
//
//  Hints:
//      Use fscanf to get the width and height
//      use fgets to read the remaining file one line at a time
//          -> When using fgets, you *don't* need to use strtok because we process each letter seperately
//      check for null
//      
//  Return TRUE if the board is successfully read. Return FALSE if there is an error
//
int read_board(Board * board, FILE * fp) {
    return FALSE;
}

// This is probably the hardest function for this project
//
// This function takes a given board, and a given location in the board
// and counts the number of living neighbors surrounding it. Including diagonals
//
// i.e.
//
// Board: 
// {
//     { 0, 1, 0},
//     { 1, 1, 0},
//     { 0, 0, 1}
// }
//
// if i = 0, j = 0 then the function should return 3
// if i = 1, j = 1 then the function should return 3
// if i = 2, j = 2 then the function should return 1
//
// Hints:
//      check for NULL
//      board->board[i][j] will give you the cell you are currently looking at
//      When checking the surrounding cells you need to avoid going out of bounds
//          for example if i = 0, j = 0, you can't check above or to the left because
//              then you would be using negative indexes
//
// return -1 if an error occurs, otherwise return the neighbor count
//
int neighbor_count(Board * board, int i, int j) {
    return -1;
}


// This function should run a sinlge "tick" of the game of life
//
// What that means
//      For all cells in the board:
//          1. if the neighbor count is less than UNDER_POPULATED that cell dies
//          2. if the neighbor count is greater than OVER_POPULATED that cell dies
//          3. if the neighbor count is exactly REPRODUCE then the cell is born (is set to alive)
//          4. otherwise the cell stays the same
//
// Hints:
//      Check for NULL
//      You can't edit the board "in place" because that changes the neighbor_count for other cells
//          so you need to write the values into a temporary board while you are running through
//          all the cells. Once you are done, you will copy the temp board into the original
//
//  Return FALSE if an error occurs, return TRUE otherwise
//
int tick_board(Board * board) {
    return FALSE;
}

// This function should be pretty straight foward
//
// The user will run the program like this:
// ./main input.txt output.txt 5
//
// where input.txt is the name of the file to *read* the board from
//       output.txt is the name of the file to *write* the board to
//       and 5 is the number of times tick_board should be called on the board 
//          before is is written to output.txt
//
// Hints:
//      Make sure enough arguements are passed
//      Make sure the files are opened successfully
//      Open *two* files. One for reading, one for writing
//
int core_main(int argc, const char * argv[]) {
    return 0;
}
