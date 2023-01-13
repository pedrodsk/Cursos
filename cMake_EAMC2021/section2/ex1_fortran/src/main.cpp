#include <iostream>


extern"C"
{
	extern void compute_(float *[], const int *);
}

const int size=100;
float *array = new float[size];

int main()
{
	compute_(&array, &size);
}