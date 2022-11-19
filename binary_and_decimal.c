#include <stdio.h>

int convert_from_decimal_to_binary(int d);
int convert_from_binary_to_decimal(int b);
int operation_with_binary(void);

int main() {
    int choose;
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("        Binary and Decimal");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
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
        case 3:
            operation_with_binary();
            break;
    }
        
    
    return 0;
}

int convert_from_decimal_to_binary(int d) {
    
}

int convert_from_binary_to_decimal(int b) {
    
}
