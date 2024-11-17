/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main()
{

  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int whatBitNum, whatBitPos, whatBitTheBit;
  printf("Please enter a number:\n");
  scanf("%d", &whatBitNum);
  printf("Please enter a position:\n");
  scanf("%d", &whatBitPos);
  whatBitTheBit = ((whatBitNum >> whatBitPos) & 1);
  printf("The bit at position %d of %d is: %d\n", whatBitPos, whatBitNum, whatBitTheBit);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int setBitNum, setBitPos, setBitOne, setBitZero;
  printf("Please enter a number:\n");
  scanf("%d", &setBitNum);
  printf("Please enter a position:\n");
  scanf("%d", &setBitPos);
  setBitZero = (setBitNum & ~(1 << (setBitPos))); // set to zero
  setBitOne = (setBitNum | (1 << (setBitPos)));   // set to one
  printf("Number with bit %d set to 1: %d\n", setBitPos, setBitOne);
  printf("Number with bit %d set to 0: %d\n", setBitPos, setBitZero);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int toggleBitNum, toggleBitPos, toggleBitFlipped;
  printf("Please enter a number:\n");
  scanf("%d", &toggleBitNum);
  printf("Please enter a position:\n");
  scanf("%d", &toggleBitPos);
  toggleBitFlipped = (toggleBitNum ^ (1 << toggleBitPos));
  printf("Number with bit %d toggled: %d\n", toggleBitPos, toggleBitFlipped);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int evenOddNum;
  printf("Please enter a number:\n");
  scanf("%d", &evenOddNum);
  printf("%d\n", ((evenOddNum % 2 == 0) ? 1 : 0));

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int octalOne, octalTwo, octalSum, octalBitThree, octalBitFive, octalBitSeven, octalBitEleven;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &octalOne);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &octalTwo);
  octalSum = octalOne + octalTwo;
  printf("The sum in hexadecimal: %X\n", octalSum);
  octalBitThree = (octalSum >> 3) & 1;
  octalBitFive = (octalSum >> 5) & 1;
  octalBitSeven = (octalSum >> 7) & 1;
  octalBitEleven = (octalSum >> 11) & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", octalBitThree, octalBitFive, octalBitSeven, octalBitEleven);
  printf("Bye!\n");

  return 0;
}
