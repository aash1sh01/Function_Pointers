#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int sub (int a, int b);
int mult (int a, int b);
int divide (int a, int b);
int exit_p (int a, int b);

typedef int (*Op) (int a, int b);

int main (void)
{
  int a = 6;
  int b = 3;
  Op opers[5] = {&add, &sub, &mult, &divide, &exit_p};
  char op[3];
  while(true){
    printf("Operand 'a' : %d | Operand 'b' : %d\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ", a, b);
    fgets(op, 3, stdin);
    printf("X = %d\n", opers[(int)op[0]-48](a,b));
  }
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) {printf("Adding 'a' and 'b'\n"); return a + b; }
int sub (int a, int b) {printf("Subtracting 'a' and 'b'\n"); return a-b;}
int mult (int a, int b) {printf("Multiplying 'a' and 'b'\n"); return a*b;}
int divide (int a, int b) {printf("Dividing 'a' and 'b'\n"); return a/b;}
int exit_p (int a, int b){exit(0);}