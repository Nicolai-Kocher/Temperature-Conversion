/*
Temp Conversion

Nicolai Kocher
Jan 26, 2022

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main() {
    
    //input variables
    double inputTemp;        
    
    //prompt for input temperature
    printf("Input temperature:");
    //read input temperature
    scanf("%lf", inputTemp);
    
    //prompt for temperature type
    printf("What temperature conversion if your reading in C,K,F :");
    //read temperature type
    
    scanf("%10s", line[0]);
    char tempType = toupper(line[0]);
    
    
    if(tempType = "C"){
        double tempC = inputTemp * 1;
        double tempF = (inputTemp + 32) *9/5;
        double tempK = inputTemp + 273.15;
        printf("Celcius: %f/n, Farentheit: %f/n, Kelvin: %f", &tempC, tempF, tempK);  
    } else if(tempType = "F"){
        double tempF = inputTemp * 1;
        double tempC = (inputTemp - 32) *5/9;
        double tempK = (inputTemp - 32) * 5/9 + 273.15;
        printf("Celcius: %f/n, Farentheit: %f/n, Kelvin: %f", &tempC, tempF, tempK);
    } else if(tempType = "K"){
        double tempK = inputTemp * 1;
        double tempF = (inputTemp + 32) *9/5 - 273.15;
        double tempC = inputTemp - 273.15;
        printf("Celcius: %f/n, Farentheit: %f/n, Kelvin: %f", &tempC, tempF, tempK);
    } else(tempType = "")
            printf("Unknown Temp Type");
    

    return (EXIT_SUCCESS);
}

