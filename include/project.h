/*!
 * \file project.h
 * \author Camila&Leonandro
 * \date March, 9th
 */

#ifndef PROJECT_H
#define PROJECT_H

//===Function prototypes.

///List calculator
/*!
 * This function make a vector in a for loop depending on the
 * parameter called "lenght" that contains the lenght of the
 * vector. This function is called 26 times on the main algorithm
 * and the size/lenght doubles each time. Is used to make the
 * mean of the compile time because make the size of the vector 
 * grows to make the average.
 *
 * \param lenght The size of the vector that will be made
 * \return A increasing vector with the size defined by the parameter "lenght"
 */
int* list_calculator(int lenght);

///Linear iterative search
/*!
 * Search for the target (the parameter called value), and returns
 * the index if this number exists in the current vector.
 *
 * The search preservs the vector, there isn't changes on the vector,
 * just in the diferents loops in the main that the lenght of the vector doubles.
 *
 * This implements the linear iterative version, that pass for the entire 
 * vector in the worst case.
 *
 * The range is [first;last).
 *
 * There are two pointers on the parameters(first and last). The pointer 
 * first that moves forward in every while loop until he is equal to last or find
 * the target.
 *
 * \param first The begining of the range of the vector
 * \param last The end of the range of the vector
 * \param value The target from the vector
 * \return 
 */
int* linear_iterative(int *first, int *last, int value);

///Binary iterative search
/*!
 * Search for the target (the parameter called value), and returns
 * the index if this number exists in the current vector.
 *
 * The search preservs the vector, there isn't changes on the vector,
 * just in the diferents loops in the main that the lenght of the vector doubles.
 *
 * This implements the binary iterative version, and the range is [first;last).
 *
 * There are two pointers on the parameters(first and last). The pointer 
 * first and last moves in every while loop dividing the vector in two parts
 * until they(first and last) are equal or find the target.
 *
 * \param first The begining of the range of the vector
 * \param last The end of the range of the vector
 * \param value The target from the vector
 * \return 
 */
int* binary_iterative(int *first, int *last, int value);

///Binary recursive search
/*!
 * Search for the target (the parameter called value), and returns
 * the index if this number exists in the current vector.
 *
 * The search preservs the vector, there isn't changes on the vector,
 * just in the diferents loops in the main that the lenght of the vector doubles.
 *
 * This implements the binary recursive version, and the range is [first;last).
 *
 * There are two pointers on the parameters(first and last). The pointer 
 * first and last moves in every while loop dividing the vector in two parts
 * until they(first and last) are equal or find the target.
 *
 * \param first The begining of the range of the vector
 * \param last The end of the range of the vector
 * \param value The target from the vector
 * \return 
 */
int* binary_recursive(int *first, int *last, int value);

///Ternary iterative search
/*!
 * Search for the target (the parameter called value), and returns
 * the index if this number exists in the current vector.
 *
 * The search preservs the vector, there isn't changes on the vector,
 * just in the diferents loops in the main that the lenght of the vector doubles.
 *
 * This implements the ternary iterative version, and the range is [first;last).
 *
 * There are two pointers on the parameters(first and last). The pointer 
 * first and last moves in every while loop dividing the vector in three parts
 * until they(first and last) are equal or find the target.
 *
 * \param first The begining of the range of the vector
 * \param last The end of the range of the vector
 * \param value The target from the vector
 * \return 
 */
int* ternary_iterative(int *first, int *last, int value);

///Ternary recursive search
/*!
 * Search for the target (the parameter called value), and returns
 * the index if this number exists in the current vector.
 *
 * The search preservs the vector, there isn't changes on the vector,
 * just in the diferents loops in the main that the lenght of the vector doubles.
 *
 * This implements the ternary recursive version, and the range is [first;last).
 *
 * There are two pointers on the parameters(first and last). The pointer 
 * first and last moves in every while loop dividing the vector in three parts
 * until they(first and last) are equal or find the target.
 *
 * \param first The begining of the range of the vector
 * \param last The end of the range of the vector
 * \param clone A clone to the parameter first to return the right index
 * \param value The target from the vector
 * \return 
 */
int* ternary_recursive(int *first, int *last, int value);

///Jump search
/*!
 * Search for the target (the parameter called value), and returns
 * the index if this number exists in the current vector.
 *
 * The search preservs the vector, there isn't changes on the vector,
 * just in the diferents loops in the main that the lenght of the vector doubles.
 *
 * This implements the jump search version, and the range is [first;last).
 *
 * There are two pointers on the parameters(first and last). The pointer 
 * first and aux(created inside the function) moves in every while loop dividing
 * the vector on the index wich is the square root of the lenght of the vector.
 *
 * \param first The begining of the range of the vector
 * \param last The end of the range of the vector
 * \param value The target from the vector
 * \return 
 */
int* jump_search(int *first, int *last, int value);

///Fibonacci search
/*!
 * Search for the target (the parameter called value), and returns
 * the index if this number exists in the current vector.
 *
 * The search preservs the vector, there isn't changes on the vector,
 * just in the diferents loops in the main that the lenght of the vector doubles.
 *
 * This implements the fibonacci search version, and the range is [first;last).
 *
 * There are two pointers on the parameters(first and last). The pointer 
 * first and last moves in every while loop dividing the vector until 
 * they(first and last) are equal or find the target. 
 *
 * The sizes of the partitions are given by the function "fibonacci_calculator".
 *
 * \param first The begining of the range of the vector
 * \param last The end of the range of the vector
 * \param value The target from the vector
 * \return 
 */
int* fibonacci_search(int *first, int *last, int value);

///Fibonacci calculator
/*!
 * Calculates the two numbers of the fibonacci sequence created
 * that the sum is equal to a number equal or greater than the 
 * parameter called index. This two numbers will be the lenghts
 * of the partitions that the current vector on the funcion 
 * fibonacci_search will be divided.
 *
 * \param index The last elem of the fibonacci sequence that will be
 * crated is equal or bigger than he. 
 * \return A pointer to the vector that contains the two numbers of
 * the fibonacci sequence criated that will be the lenghts to divide the vector.
 */
int* fibonacci_calculator(int index);

 

#endif