#include <stdio.h>

int main(void) {
    char char_data;
    int int_data, oct_data, hex_data;
    float float_data;
    char str_data[20];

    printf("Enter the following data:\n");
    printf("%%c, %%d, %%o, %%x, %%f, %%s\n\n");

    printf("Enter a character: ");
    scanf_s(" %c", &char_data, 1);  
    printf("char %%c: %c\n", char_data);

    printf("Enter three integers (decimal, octal, hex): ");
    scanf_s("%d %o %x", &int_data, &oct_data, &hex_data);
    printf("int %%d: %d, oct %%o: %o, hex %%x: %x\n", int_data, oct_data, hex_data);

    printf("Enter a floating number: ");
    scanf_s("%f", &float_data);
    printf("float %%f: %f\n", float_data);

    printf("Enter a string: ");
    scanf_s("%s", str_data, (unsigned)_countof(str_data));  
    printf("str %%s: %s\n", str_data);

    return 0;
}
