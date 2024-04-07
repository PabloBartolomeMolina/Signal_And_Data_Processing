/**
* File : MatrixOperations.cpp
*
* Objective of the file:
* Definitions of elements needed for the Matrix Operations that are implemented in the project.
*
* Date of creation: 07/04/2024
* Last update: 07/04/2024
*
* */


/* ========================================================================================== */
/* Includes. */
#include "MatrixOperations.h"

/* ========================================================================================== */
/* Namespaces. */
using std::vector;

/* ========================================================================================== */
/* Defines. */

/* ========================================================================================== */
/* Constants and structs. */

/* ========================================================================================== */
/* Variables. */

/* ========================================================================================== */
/* Functions. */
GeneralReturn_t MatrixTranspose(const vector<vector<uint8_t>>& inputMatrix, vector<vector<uint8_t>>& outputMatrix)
{
	GeneralReturn_t retVal = MAT_OPS_SUCCESS;

	// Get dimensions of the input matrix.
	size_t rows = inputMatrix.size();
    size_t cols = inputMatrix[0].size();

#ifdef DEBUG
    printf("Size of exit matrix is: %d\n", (outputMatrix.size()));
    // Print output matrix before transposing it with values of origin (default ones).
    for (int i = 0; i < outputMatrix.size(); ++i) {
        for (int j = 0; j < outputMatrix[0].size(); ++j) {
            printf("%d ", outputMatrix[i][j]);
        }
        printf("\n");
    }
#endif

    // Resize the output matrix to match transposed dimensions.
    outputMatrix.resize((size_t)(inputMatrix.size()));
    // Transpose the matrix.
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            outputMatrix[j][i] = inputMatrix[i][j];
        }
     }

#ifdef DEBUG
    printf("Size of exit matrix is: %d\n", (outputMatrix.size()));
    // Print output matrix before transposing it with values of origin (default ones).
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", outputMatrix[j][i]);
        }
        printf("\n");
    }
#endif

	return retVal;
}

/* EOL of file MatrixOperations.cpp */