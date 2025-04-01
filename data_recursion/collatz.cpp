// collatz.cpp

/*  Collatz conjecture
 *  demonstrates iteration and recursion
 *  as problem-solving strategies
 *
 *  conjecture:
 *    take any natural number x
 *    if it is even, divide by two
 *    if odd triple and add one
 *    eventually the sequence will converge to one
 */

 
#include <iostream>

using namespace std;


//function prototypes
void collatz(int start);
void rCollatz(int x);
int rcCounter(int x);

int main(){
  cout << "Iterative solution for 15" << endl; 
  collatz(15);
  cout << endl << endl;
  cout << "Recursive solution for 15" << endl;
  rCollatz(15);
  cout << endl << endl;
  cout << "Recursive solution with a counter" << endl;
  int counter = rcCounter(15);
  cout << "COUNT: " << counter << endl;
  
} // end main

void collatz(int start){
  //using standard iteration
  
  int x = start;
  int counter = 1;
  cout << x << " " ;
  //note the loop continuing until the base case
  while (x > 1){
    counter++;
    //if x is even
    if (x % 2 == 0){
      //divide by two
      x = x / 2;
    } else {
      //if x is odd, triple and add one
      x = (3 * x) + 1;
    } // end if
    //print out the current value of x
    cout << x << " " ;
  } // end while
  cout << "COUNT: " << counter << endl;
} // end collatz



/* the recursive solution is different.
 * Note there is no loop.  Instead, the
 * algorithm continues calling itself until
 * it finds a base case.  When the base is reached
 * all copies of the function exit, 'unwrapping' the
 * nested stack
 */

/* each iteration of the function is one pass through the
 * loop. 
 */

void rCollatz(int x){
  // print the current value
  cout << x << " ";
  if (x == 1){
    //This is the base case;
    //do nothing, because program is about to end and 'unwrap';
  } else if (x % 2 == 0){
    //if even, call myself with x/2 as the parameter
    rCollatz(x/2);
  } else {
    //if odd, call myself with 3x+1 as the parameter
    rCollatz((3 * x) + 1);
  } // end if
    
} // end recursive collatz

/* counter version returns a counter
 * note that counting happens at the end
 * as the recursive calls are 'unraveling'
 */

int rcCounter(int x){
  int counter = 1;
  cout << x << " ";
  if (x == 1){
    //This is the base case;
    //return 1 and start counting
  } else if (x % 2 == 0){
    //if even, call myself with x/2 as the parameter
    //when we're done with the next call,
    //increment counter
    counter += rcCounter(x/2);
  } else {
    //if odd, call myself with 3x+1 as the parameter
    counter += rcCounter((3 * x) + 1);
  } // end if
  
  //return the current value of counter
  return(counter);
} // end rcCounter
