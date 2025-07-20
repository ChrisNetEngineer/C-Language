#include <stdio.h>

int main(){
    int temperatures_array[6] = {72, 68, 75, 80, 65, 78};
    
    int total=0;
    float average=0;
    int highest_temperature = temperatures_array[0];
    int lowest_temperature = temperatures_array[0];
    
    for(int i=0;i<6;i++){
        total += (int)temperatures_array[i];

    }
    average = (float)total/6;
    
    for(int i=1;i<6;i++){
        if(highest_temperature<temperatures_array[i]){
            highest_temperature = temperatures_array[i];
        }
    }

    for(int i=1;i<6;i++){
        if(lowest_temperature > temperatures_array[i]){
            lowest_temperature = temperatures_array[i];
        }
    }
    
    
    
    printf("Average Temperature: %.1f degrees\n",average);
    printf("Highest Temperature: %d degrees\n",highest_temperature);
    printf("Lowest Temperature: %d degrees\n",lowest_temperature);
    return 0;
}