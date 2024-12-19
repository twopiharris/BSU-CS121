#include <stdio.h>

void doLoop(){
  int i = 0;
  for (i = 0; i < 10; i++){
    printf("%d ", i);
  } // end for
  printf("\n");
} // end doLoop

int main(){
  char name[10] = "George";
  printf("Hi, %s, I'm in main \n", name);
  doLoop();
}
    
