#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

   

    printf("\n is the temp in (F) or (C)?: ");
    scanf("%c",&unit);

     unit =toupper(unit);
    if(unit=='C'){
        printf("The unit is in C: ");   
        scanf("%f",&temp);
        temp = (temp * 9/5)+32;
        printf("\n The temp in farenhaite is: %.1f",temp);
    }
   else if(unit=='F'){
    printf("The unit is in F: ");
     scanf("%f",&temp);
     temp = ((temp-32)*5)/9;
     printf("\n The temp in celcius is: %1.f",temp);
   } 
else{
    printf("\n %c is not valid",unit);
}

}