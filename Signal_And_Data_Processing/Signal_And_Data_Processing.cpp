/**
* File : Signal_And_Data_Processing.cpp
*
* Objective of the file:
* Main file of the project. Start of the program through the main() function.
*
* Date of creation: 07/04/2024
* Last update: 07/04/2024
*
* */

/* ========================================================================================== */
/* Includes. */
#include <iostream>
#include <stdint.h>
#include <stdlib.h>
#include "MatrixOperations.h"

/* ========================================================================================== */
/* Defines. */

/* ========================================================================================== */
/* Constants and structs. */
const vector<vector<uint8_t>> matrix(4, vector<uint8_t>(3, 0));
/* ========================================================================================== */
/* Variables. */
vector<vector<uint8_t>> outputMatrix(3, vector<uint8_t>(4, 1));
/* ========================================================================================== */
/* Functions. */


// Starting function of the project.
int main()
{
    MatrixTranspose(matrix, outputMatrix);
}

/* EOL of file Signal_And_Data_Processing.cpp */