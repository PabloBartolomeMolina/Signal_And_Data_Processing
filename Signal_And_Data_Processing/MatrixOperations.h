/**
* File : MatrixOperations.h
* 
* Objective of the file:
* Definitions of elements needed for the Matrix Operations that are implemented in the project.
*
* Date of creation: 07/04/2024
* Last update: 07/04/2024
*
* */

#ifndef MAT_OPS
#define MAT_OPS

/* ========================================================================================== */
/* Includes. */
#include <stdint.h>
#include "TypeDefs.h"

/* ========================================================================================== */
/* Defines. */

/* ========================================================================================== */
/* Constants and structs. */
#define MAT_OPS_SUCCESS			0x00	// Operation successful.
#define MAT_OPS_ERR_INPUT		0x01	// Error with received inputs.
#define MAT_OPS_ERR_TRANSPOSE	0x02	// Error when transposing a matrix.
#define MAT_OPS_MAX_VAL			0xFF	// Max value for returning codes.

/* ========================================================================================== */
/* Variables. */

/* ========================================================================================== */
/* Functions. */
extern GeneralReturn_t MatrixTranspose(uint8_t matInput, uint8_t matOutput, uint8_t rows, uint8_t cols);

#endif // !MAT_OPS

/* EOL of file MatrixOperations.h */