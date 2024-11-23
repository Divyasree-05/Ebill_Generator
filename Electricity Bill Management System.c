#include <stdio.h>


//TAMIL NADU ELECTRICITY BILL in C program

// Function prototype
float billcal(float units);

int main() {
    int userid;
    long long int phoneno; 
    float units;
    char area[50], name[100];

    //user details
    printf("Name of the User: ");
    scanf("%s", name);
    printf("User ID: ");
    scanf("%d", &userid);
    printf("User Area: ");
    scanf("%s", area);
    printf("Phone no of the User: ");
    scanf("%lld", &phoneno);
    //units consumed
    printf("No of Units consumed by User: ");
    scanf("%f", &units);

    //calculate function
    float rupees = billcal(units);

    //displaying details in the form of bill
    printf("\n\n\n\t\t\t\t\t_____CUSTOMER BILL_____\t\t\t\t\t\n\n\t\t\t\t\tUser: %s \n\t\t\t\t\tID: %d\n\t\t\t\t\tArea: %s\n\t\t\t\t\tPhone: %lld\n", name, userid, area, phoneno);
    printf("\t\t\t\t\tUnits Consumed: %.2f\n", units);
    printf("\t\t\t\t\tBill Amount: %.2f\n", rupees);

    return 0;
}


float billcal(float units) {
    float amount = 0.0;

    if (units <= 100)
	{
        amount = units * 0.00;
    } 
	else if (units <= 200)
	{
        amount = (100 * 0.00) + (units - 100) * 2.25;
    } 
	else if (units <= 400) 
	{
        amount = (100 * 0.00) + (100 * 2.25) + (units - 200) * 4.50;
    } 
	else if (units <= 500) 
	{
        amount = (100 * 0.00) + (100 * 2.25) + (200 * 4.50) + (units - 400) * 6.00;
    } 
	else if (units <= 600) 
	{
        amount = (100 * 0.00) + (300 * 4.50) + (100 * 6.00) + (units - 500) * 8.00;
    } 
	else if (units <= 800) 
	{
        amount = (100 * 0.00) + (300 * 4.50) + (100 * 6.00) + (100 * 8.00) + (units - 600) * 9.00;
    } 
	else if (units <= 1000) 
	{
        amount = (100 * 0.00) + (300 * 4.50) + (100 * 6.00) + (100 * 8.00) + (200 * 9.00) + (units - 800) * 10.00;
    } 
	else 
	{
        amount = (100 * 0.00) + (300 * 4.50) + (100 * 6.00) + (100 * 8.00) + (200 * 9.00) + (200 * 10.00) + (units - 1000) * 11.00;
    }

    return amount;
}
