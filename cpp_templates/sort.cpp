#include <algorithm>
#include <iostream>
#include <vector>

void printArray();
void printVec(std::vector<int>& v);

int A[] = {1, 4, 2, 8, 5, 7};
const int N = sizeof(A) / sizeof(int);

int main(){
         
	printArray();

	std::random_shuffle(A, A + N);
	printArray();

	std::sort(A, A + N);
	printArray();

	std::vector<int> v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);
	v.push_back(8);
	v.push_back(5);
	v.push_back(7);

	std::random_shuffle(v.begin(), v.end());
        printVec(v);
	std::sort(v.begin(), v.end());
	printVec(v);

  	return(0);

} // end main

void printArray(){
        for (int i = 0; i < N; i++){
    		std::cout << i << ": " << A[i] << std::endl;
	} // end for
        std::cout << std::endl << std::endl; 
} // end printArray

void printVec(std::vector<int>& v){
  for (int i: v){
    std::cout << i << ", ";
  } // end for
  std::cout << std::endl;
} // end printVector()
  

