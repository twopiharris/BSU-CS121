#include <algorithm>
#include <iostream>

void printArray();

int A[] = {1, 4, 2, 8, 5, 7};
const int N = sizeof(A) / sizeof(int);

int main(){
         
	printArray();


	std::random_shuffle(A, A + N);
	printArray();

	std::sort(A, A + N);
	printArray();

  	return(0);

} // end main

void printArray(){
        for (int i = 0; i < N; i++){
    		std::cout << i << ": " << A[i] << std::endl;
	} // end for
        std::cout << std::endl << std::endl; 
} // end printArray
