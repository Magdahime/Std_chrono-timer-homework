#ifndef FUNCTIONS
#define FUNCTIONS
#include <iostream>
#include "Ttimer.hpp"
std::ostream& operator<<(std::ostream& st,Ttimer timer_a);
int fibonacci(int how_many);
void bubblesort(int tab[], int how_many);
void bubble_swap(int *x, int *y);
bool check_answer(int ans);
#endif
