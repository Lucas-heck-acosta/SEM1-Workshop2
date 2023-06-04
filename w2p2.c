
/*
*****************************************************************************
                          Workshop - #2 (P2)
Lucas Heck Acosta
Student ID#: 165041211
Email      : lheck-acosta@myseneca.ca
Section    : NKK

Second workshop designed to teach students about variables, types and calculations. Great step up from previous workshop

Thanks for checking it
*****************************************************************************
*/



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    //variables
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';

    //calculation variables
    float shirt_s, shirt_m, shirt_l;
    int sally_shirts_number, patty_shirts_number, tommy_shirts_number;
    float sub_total, taxes, total;
    int toonies, loonies, quarters, dimes, nickels, pennies;
    float newtotal, avg;
    //patty variables
    float patty_shirts_price, patty_shirts_tax, patty_shirts_total;
    int patty_shirts_price_int, patty_shirts_tax_int, patty_shirts_total_int;
    //tommy variables
    float tommy_shirts_price, tommy_shirts_tax, tommy_shirts_total;
    int tommy_shirts_price_int, tommy_shirts_tax_int, tommy_shirts_total_int;
    //sally variables
    float sally_shirts_price, sally_shirts_tax, sally_shirts_total;
    int sally_shirts_price_int, sally_shirts_tax_int, sally_shirts_total_int;


    //input prices
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f", &shirt_s);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f", &shirt_m);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%f", &shirt_l);

    printf("\n");

    //print store prices
    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n", shirt_s);
    printf("MEDIUM : $%.2f\n", shirt_m);
    printf("LARGE  : $%.2f\n", shirt_l);

    printf("\n");

    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &patty_shirts_number);

    printf("\n");

    printf("Tommy's shirt size is \'%c\'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &tommy_shirts_number);

    printf("\n");

    printf("Sally's shirt size is \'%c\'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &sally_shirts_number);

    printf("\n");



    //calculation for PATTY

    patty_shirts_price_int = (patty_shirts_number * shirt_s + 0.005) * 100;
    patty_shirts_price = (float)patty_shirts_price_int / 100; //saving rounded price

    patty_shirts_tax_int = (patty_shirts_price * TAX + 0.005) * 100;
    patty_shirts_tax = (float)patty_shirts_tax_int / 100; // saving rounded taxes

    patty_shirts_total_int = (patty_shirts_price + patty_shirts_tax + 0.005) * 100;
    patty_shirts_total = (float)patty_shirts_total_int /  100; // saving final value

    //calculation for TOMMY

    tommy_shirts_price_int = (tommy_shirts_number * shirt_l + 0.005) * 100;
    tommy_shirts_price = (float)tommy_shirts_price_int / 100; //saving rounded price

    tommy_shirts_tax_int = (tommy_shirts_price * TAX + 0.005) * 100;
    tommy_shirts_tax = (float)tommy_shirts_tax_int / 100; // saving rounded taxes

    tommy_shirts_total_int = (tommy_shirts_price + tommy_shirts_tax + 0.005) * 100;
    tommy_shirts_total = (float)tommy_shirts_total_int / 100; // saving final value

    //calculation for sally

    sally_shirts_price_int = (sally_shirts_number * shirt_m + 0.005) * 100;
    sally_shirts_price = (float)sally_shirts_price_int / 100; //saving rounded price

    sally_shirts_tax_int = (sally_shirts_price * TAX + 0.005) * 100;
    sally_shirts_tax = (float)sally_shirts_tax_int / 100; // saving rounded taxes

    sally_shirts_total_int = (sally_shirts_price + sally_shirts_tax + 0.005) * 100;
    sally_shirts_total = (float)sally_shirts_total_int / 100; // saving final value

    //adding totals

    sub_total = patty_shirts_price + tommy_shirts_price + sally_shirts_price;
    taxes = patty_shirts_tax + tommy_shirts_tax + sally_shirts_tax;
    total = patty_shirts_total + tommy_shirts_total + sally_shirts_total;

    
    
    



    //printing results

    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, shirt_s, patty_shirts_number, patty_shirts_price, patty_shirts_tax, patty_shirts_total);

    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, shirt_m, sally_shirts_number, sally_shirts_price, sally_shirts_tax, sally_shirts_total);

    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, shirt_l, tommy_shirts_number, tommy_shirts_price, tommy_shirts_tax, tommy_shirts_total);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", sub_total, taxes, total);

    
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n");

    printf("\n");

    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", sub_total);

    toonies = sub_total / 2;
    newtotal = sub_total - (toonies * 2);
    printf("Toonies  %3d %9.4lf\n", toonies, newtotal);

    loonies = newtotal / 1;
    newtotal = newtotal - (loonies);
    printf("Loonies  %3d %9.4lf\n",loonies, newtotal);

    quarters = newtotal / 0.25;
    newtotal = newtotal - (quarters * 0.25);
    printf("Quarters %3d %9.4lf\n",quarters, newtotal);

    dimes = newtotal / 0.1;
    newtotal = newtotal - (dimes * 0.10);
    printf("Dimes    %3d %9.4lf\n",dimes, newtotal);

    nickels = newtotal / 0.05;
    newtotal = newtotal - (nickels * 0.05);
    printf("Nickels  %3d %9.4lf\n",nickels, newtotal);

    pennies = newtotal / 0.01;
    newtotal = newtotal - (pennies * 0.01);
    printf("Pennies  %3d %9.4lf\n",pennies, newtotal);

    printf("\n");

    avg = sub_total / (patty_shirts_number + tommy_shirts_number + sally_shirts_number);
    printf("Average cost/shirt: $%.4lf\n",avg);

    //------------------------------------------------------------------------------------------

    printf("\n");

    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", total);

    toonies = total / 2;
    newtotal = total - (toonies * 2);
    printf("Toonies  %3d %9.4lf\n", toonies, newtotal);

    loonies = newtotal / 1;
    newtotal = newtotal - (loonies);
    printf("Loonies  %3d %9.4lf\n", loonies, newtotal);

    quarters = newtotal / 0.25;
    newtotal = newtotal - (quarters * 0.25);
    printf("Quarters %3d %9.4lf\n", quarters, newtotal);

    dimes = newtotal / 0.1;
    newtotal = newtotal - (dimes * 0.10);
    printf("Dimes    %3d %9.4lf\n", dimes, newtotal);

    nickels = newtotal / 0.05;
    newtotal = newtotal - (nickels * 0.05);
    printf("Nickels  %3d %9.4lf\n", nickels, newtotal);

    pennies = newtotal / 0.01;
    newtotal = newtotal - (pennies * 0.01);
    printf("Pennies  %3d %9.4lf\n", pennies, newtotal);

    printf("\n");

    avg = total / (patty_shirts_number + tommy_shirts_number + sally_shirts_number);
    printf("Average cost/shirt: $%.4lf\n", avg);


    return 0;
}