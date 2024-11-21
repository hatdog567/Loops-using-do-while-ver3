#include <stdio.h> 
#include <stdlib.h>

    int city, tot_Charge, transaction = 0, tot_Collection, charge;
    char response, respo;

int main() {
do
{   printf("\n\n");
    printf("             HIJK POSTAL SERVICES\n");
    printf("            ROXAS BOULEVARD, MANILA\n");
    printf("         ----------------------------\n\n");
    
    
    //criteria
    printf("                                 CHARGES\n");
    printf("1 - MANILA                        175\n");
    printf("2 - PASAY                         150\n");
    printf("3 - QUEZON                        200\n");
    printf("4 - TAGUIG                        250\n");
    printf("5 - MAKATI                        275\n\n\n");

    //input
    printf("LOCATION(CITY)                    : ");
    scanf("%d", &city);
    
    printf("EXPRESS DELIVERY?(Y/N)            : ");
    scanf("%s", &response);

    //value of each cities
    switch (city)
    {
        case 1: 
        charge = 175; 
        break;

        case 2: 
        charge = 150; 
        break;

        case 3: 
        charge = 200; 
        break;

        case 4: 
        charge = 250; 
        break;

        case 5: 
        charge = 275; 
        break;
    }

    //process
    if (response == 'Y')
    {
        tot_Charge = charge + 150;
        printf("---------------------------------------------------\n");
        printf("TOTAL CHARGE                      : %d\n", tot_Charge);
    }

    else
    {    
        printf("---------------------------------------------------\n");
        printf("TOTAL CHARGE                      : %d\n", city);
    }
    
        printf("---------------------------------------------------\n");
        printf("\nPROCESS ANOTHER?(Y/N)             :  ");
        scanf("%s", &respo);

        //incrementation
        tot_Collection+= tot_Charge;
        transaction++;
}
    while ((respo == 'Y') || (respo == 'y'));
    {
        printf("\nTOTAL COLLECTION FOR THE DAY      : %d\n", tot_Collection);
        printf("TOTAL NO. OF TRANSACTIONS         : %d\n", transaction);
        printf("---------------------------------------------------\n");
        printf("PROGRAMMER: WENCY A. GERALDO");

    }
  
    return 0;
}