//
// Created by Carl  on 12/14/22.
//
#include <stdio.h>
#include "../advent_lib/file_handler.h"

#define FILE_NAME "input.txt"
#define OPPONENT_INDEX 0
#define MY_INDEX 1
#define NUM_PLAYERS 2
#define ROCK_POINTS 1
#define PAPER_POINTS 2
#define SCISSOR_POINTS 3
#define LOSE_POINTS 0
#define WIN_POINTS 6
#define DRAW_POINTS 3
#define LOSE_ROUND ROCK_POINTS
#define DRAW_ROUND PAPER_POINTS
#define WIN_ROUND SCISSOR_POINTS

int main(){
 /*
A=Rock     Y=Paper
B=Paper    X=Rock
C=Scissors Z=Scissors
  */
 // (1 for Rock, 2 for Paper, and 3 for Scissors)
 // (0 if you lost, 3 if the round was a draw, and 6 if you won)

    FILE* fp = openFilePtr(FILE_NAME, "r");
    int totalPoints = 0;
    int totalPointsPt2 = 0;
    while (!feof(fp)) {
        int points[NUM_PLAYERS];
        int ch;
        for(int i = 0; i < NUM_PLAYERS && !feof(fp); i++) {
            ch = fgetc(fp); // char A, B, C, X, Y, C
            switch (ch) {
                case 'A':
                case 'X': // LOSE
                    points[i] = ROCK_POINTS;
                    break;
                case 'B':
                case 'Y': // DRAW
                    points[i] = PAPER_POINTS;
                    break;
                case 'C':
                case 'Z': // WIN
                    points[i] = SCISSOR_POINTS;
                    break;
            }
            ch = fgetc(fp); // char ' ' or '\n'
        }

        totalPoints += points[MY_INDEX];
        if(points[MY_INDEX] == points[OPPONENT_INDEX]){
            totalPoints += DRAW_POINTS;
        }else if((points[MY_INDEX] == ROCK_POINTS && points[OPPONENT_INDEX] == SCISSOR_POINTS)  ||
                 (points[MY_INDEX] == SCISSOR_POINTS && points[OPPONENT_INDEX] == PAPER_POINTS) ||
                 (points[MY_INDEX] == PAPER_POINTS && points[OPPONENT_INDEX] == ROCK_POINTS)){
            totalPoints += WIN_POINTS;
        }


        switch(points[MY_INDEX]) {
            case LOSE_ROUND:
                if(points[OPPONENT_INDEX] == ROCK_POINTS){
                    totalPointsPt2 += SCISSOR_POINTS;
                }else if(points[OPPONENT_INDEX] == PAPER_POINTS){
                    totalPointsPt2 += ROCK_POINTS;
                }else if(points[OPPONENT_INDEX] == SCISSOR_POINTS){
                    totalPointsPt2 += PAPER_POINTS;
                }
                break;
            case DRAW_ROUND:
                totalPointsPt2 += points[OPPONENT_INDEX];
                totalPointsPt2 += DRAW_POINTS;
                break;
            case WIN_ROUND:
                if(points[OPPONENT_INDEX] == ROCK_POINTS){
                    totalPointsPt2 += PAPER_POINTS;
                }else if(points[OPPONENT_INDEX] == PAPER_POINTS){
                    totalPointsPt2 += SCISSOR_POINTS;
                }else if( points[OPPONENT_INDEX] == SCISSOR_POINTS){
                    totalPointsPt2 += ROCK_POINTS;
                }
                totalPointsPt2 += WIN_POINTS;
                break;
        }
    }
     printf("Part 1: %d\n", totalPoints);
     printf("Part 2: %d\n", totalPointsPt2);

    return 0;
}