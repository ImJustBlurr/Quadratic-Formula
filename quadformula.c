#include <stdio.h>
#include <math.h>

int main(void) {
  //Variables
  int a, b, c, root1, root2;

  //Prompts
  puts("Enter coefficient a:");
  scanf("%d", &a);
  puts("Enter coefficient b:");
  scanf("%d", &b);
  puts("Enter coefficient c:");
  scanf("%d", &c);

  //Calculating Discriminant
  int discriminant = pow(b,2) - 4*a*c;

  if (discriminant > 0){
    root1 = (-b+sqrt(discriminant))/(2*a);
    root2 = (-b-sqrt(discriminant))/(2*a);

    printf("Roots are: %d and %d", root1, root2);
  }

  if (discriminant == 0){
    root1 = -b/(2*a);
    printf("The root is: %d", root1);
  }

  if (discriminant < 0){
    puts("There are no real roots");
  }
}