#include <stdio.h>
float calculate_bill(float usage);
float usage;
float temp;


int main() {
    int userID;
    float rate = 1.50;
    float bill = calculate_bill(usage);
    printf("Input user ID: ");
    scanf("%d", &userID);
    printf("Input Units: ");
    scanf(" %f", &usage);
    printf("Your electric bill is ₱%.2f\n", usage*rate);
    
  
}

float calculate_bill(float usage) {
    float rate;
    float bill;
    if (usage >=0 && usage <=198) {
        rate = 1.50;
    }
     else if (usage >=199 && usage <= 249) {
        rate = 1.50;
    }else if (usage >=250 && usage <= 449) {
        rate = 1.60;
    }else if (usage >=450 && usage <= 599) {
        rate = 1.85;
    }else if (usage >=600 && usage <= 999999999) {
        rate = 2;
    }
    else {
        printf("Invalid input");
    }
    return bill;
}
float fxn3(){
    temp = usage * .10;
    usage = temp + usage;
    printf("Total with surcharge: %f", usage);
}