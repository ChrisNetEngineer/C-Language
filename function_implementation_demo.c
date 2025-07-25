#include <stdio.h>
#include <string.h>
#include <locale.h>

float celsius_to_fahrenheit(float celsius);
int calculate_string_length(char* input_string);
int is_even_number(int number);

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");
    float temp_celsius = 25.0;
    float temp_fahrenheit = celsius_to_fahrenheit(temp_celsius);
    printf("%.1f\u2103 is equal to %.1f\u2109\n",temp_celsius,temp_fahrenheit);
    
    
    char sample_text[] = "LabEx Programming";
    int text_length = calculate_string_length(sample_text);
    printf("Length of '%s' is %d characters\n",sample_text,text_length);

    int test_number = 14;
    if(is_even_number(test_number)){
        printf("%d is an even number\n",test_number);
    } else{
        printf("%d is an odd number\n",test_number);
    }
    return 0;
}

float celsius_to_fahrenheit(float celsius){
    return (celsius*9/5)+32;
}

int calculate_string_length(char* input_string) {
    return strlen(input_string);
}

// Function implementation for even number check
int is_even_number(int number) {
    return (number % 2 == 0);
}
