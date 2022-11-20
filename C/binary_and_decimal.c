#include <stdio.h>

void title_and_description(void);
void convert_from_decimal_to_binary(void);
void convert_from_binary_to_decimal(void);


int main() {
    int choose;
    title_and_description();
    printf("\nChoose one of the options bellow\n");
    printf("[1] Convert from decimal to binary;\n[2] Convert from binary to decimal;\n[3] Operations with binary;");
    printf("\nChoose: ");
    scanf("%i", &choose);
    switch (choose){
        case 1:
          convert_from_decimal_to_binary();
          break;
        case 2:
          convert_from_binary_to_decimal();
          break;
    }
        
    
    return 0;
}

void title_and_description(void){
  printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("              Binary and Decimal");
  printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("              Made by DuduArts01");
  printf("\n-------------------------------------------\n");
}

void convert_from_decimal_to_binary(void) {    
    int i = 0, decimal, rest[9999], quotient;
    
    printf("\nWrite a number in decimal to convert in binary: ");
    scanf("%i", &decimal);
    printf("\n-------------------------------------------\n");
    printf("                Result");
    printf("\n-------------------------------------------\n");
    printf("Number %i in binary is: ", decimal);
    
    quotient = decimal;

    //loop for convert decimal to binary
    while(quotient / 2 != 0) {      
      rest[i] = quotient % 2;      
      quotient /= 2;      
      
      i++;
      
    }
    i++;
    //When finish loop, the quotient = 0, so last rest is 1 
    rest[i] = 1;
    
    //loop to invert the sequence of the remainder, so getting the correct form
    printf("1");
    i -= 2;
    while(i > 0) {
      printf("%i", rest[i]);
      i--;
    }
    printf("1\n");
    
    printf("\n-------------------------------------------\n");
}

void convert_from_binary_to_decimal(void) {
  
}

