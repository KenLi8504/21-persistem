#include "pipe_networking.h"

void doStuff(int * pointer){
  *pointer = 15;
}

int main(){
  int test = 10;
  int * testpointer = &test;
  printf("The value of test is %d\n",test);
  doStuff(testpointer);
  printf("The value of test is %d\n",test);
}
