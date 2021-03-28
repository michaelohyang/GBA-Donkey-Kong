#ifndef GAME_H
#define GAME_H

#include "gba.h"

                    /* TODO: */

            // Create any necessary structs //

// structs are like classses in a way
// typedef makes it easier by making creating instances just State
// usually itll be struct state if you dont write typedef

typedef struct state{
	int currentState;
	int nextState;
} State;


// typedef struct kong{
// 	int width;
// 	int height;
// } Kong;

// typedef struct wood{
// 	int width = 40;
// 	int height = 10;
// } Wood;

/*
* For example, for a Snake game, one could be:
*
* typedef struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* } Snake;
*
*
* 
* Example of a struct to hold state machine data:
* 
* typedef struct state {
*   int currentState;
*   int nextState;
* } State;
*
*/

#endif
