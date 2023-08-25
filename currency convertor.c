#include <stdio.h>

int main() {
  float amount, converted;
  int from, to;

  printf("Enter amount to convert: ");
  scanf("%f", &amount);

  printf("Enter currency to convert from (1 for USD, 2 for EUR, 3 for INR): ");
  scanf("%d", &from);

  printf("Enter currency to convert to (1 for USD, 2 for EUR, 3 for INR): ");
  scanf("%d", &to);

  switch(from) {
    case 1:
      switch(to) {
        case 1:
          converted = amount;
          break;
        case 2:
          converted = amount * 0.94;
          break;
        case 3:
          converted = amount * 82.64;
          break;
        default:
          printf("Invalid currency type");
          return 0;
      }
      break;
    case 2:
      switch(to) {
        case 1:
          converted = amount * 1.06;
          break;
        case 2:
          converted = amount;
          break;
        case 3:
          converted = amount * 87.46;
          break;
        default:
          printf("Invalid currency type");
          return 0;
      }
      break;
    case 3:
      switch(to) {
        case 1:
          converted = amount * 0.012;
          break;
        case 2:
          converted = amount * 0.011;
          break;
        case 3:
          converted = amount;
          break;
        default:
          printf("Invalid currency type");
          return 0;
      }
      break;
    default:
      printf("Invalid currency type");
      return 0;
  }

  printf("%.2f in currency %d is %.2f in currency %d", amount, from, converted, to);

  return 0;
}
