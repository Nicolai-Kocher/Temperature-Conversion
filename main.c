/*

Lab 2 
Temp Conversion

Nicolai Kocher
Jan 31, 2022

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    //input variables
    double inputTemp;        
    
    //prompt for input temperature
    printf("Input temperature:");
    //read input temperature
    scanf("%lf", &inputTemp);
    
    //prompt for temperature type
    printf("What temperature conversion if your reading in C,K,F :");
    //read temperature type

    char line[11];
    scanf("%10s", line);
    char tempType = toupper(line[0]);
    
    
    if(tempType == 'C'){
        double tempC = inputTemp * 1;
        double tempF = inputTemp * (9/5) + 32;
        double tempK = inputTemp + 273.15;
        printf("Celcius: %.2f, Farentheit: %.2f, Kelvin: %.2f", tempC, tempF, tempK);  
    } else if(tempType == 'F'){
        double tempF = inputTemp * 1;
        double tempC = (inputTemp - 32) * 5/9;
        double tempK = (inputTemp - 32) * 5/9 + 273.15;
        printf("Celcius: %.2f, Farentheit: %.2f, Kelvin: %.2f", tempC, tempF, tempK);
    } else if(tempType == 'K'){
        double tempK = inputTemp * 1;
        double tempF = (inputTemp + 32) * 9/5 - 273.15;
        double tempC = inputTemp - 273.15;
        printf("Celcius: %.2f, Farentheit: %.2f, Kelvin: %.2f", tempC, tempF, tempK);
    } else {
        printf("Unknown Temp Type");
    }
    return(0);
    

    return 0;
}

