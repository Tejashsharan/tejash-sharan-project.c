#include <stdio.h>
#include <math.h>

// Function declarations
void display_menu();
void perform_calculation();

// Global variables
int operation;
double first_number, second_number, result;

int main() {
  // Display the menu
  display_menu();

  // Get the user's input
  scanf("%d", &operation);

  // Perform the calculation
  perform_calculation();

  // Display the result
  printf("The result is: %f\n", result);

  return 0;
}

void display_menu() {
  printf("Scientific Calculator\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. Square root\n");
  printf("6. Cube root\n");
  printf("7. Sine\n");
  printf("8. Cosine\n");
  printf("9. Tangent\n");
  printf("10. Logarithm\n");
  printf("11. Exponential\n");
  printf("12. Exit\n");
  printf("Enter your choice: ");
}

void perform_calculation() {
  switch (operation) {
    case 1:
      // Addition
      scanf("%lf", &first_number);
      scanf("%lf", &second_number);
      result = first_number + second_number;
      break;
    case 2:
      // Subtraction
      scanf("%lf", &first_number);
      scanf("%lf", &second_number);
      result = first_number - second_number;
      break;
    case 3:
      // Multiplication
      scanf("%lf", &first_number);
      scanf("%lf", &second_number);
      result = first_number * second_number;
      break;
    case 4:
      // Division
      scanf("%lf", &first_number);
      scanf("%lf", &second_number);
      result = first_number / second_number;
      break;
    case 5:
      // Square root
      scanf("%lf", &first_number);
      result = sqrt(first_number);
      break;
    case 6:
      // Cube root
      scanf("%lf", &first_number);
      result = cbrt(first_number);
      break;
    case 7:
      // Sine
      scanf("%lf", &first_number);
      result = sin(first_number);
      break;
    case 8:
      // Cosine
      scanf("%lf", &first_number);
      result = cos(first_number);
      break;
    case 9:
      // Tangent
      scanf("%lf", &first_number);
      result = tan(first_number);
      break;
    case 10:
      // Logarithm
      scanf("%lf", &first_number);
      result = log(first_number);
      break;
    case 11:
      // Exponential
      scanf("%lf", &first_number);
      result = exp(first_number);
      break;
    case 12:
      // Exit
      break;
    default:
      printf("Invalid input.\n");
  }
}
