#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define S1_Price  1500.00
#define S2_Price  4230.00
#define S3_Price  4800.00
#define S4_Price  5680.00

#define L1_Price  6500.00
#define L2_Price  4900.00
#define L3_Price  5200.00
#define L4_Price  2890.00

int choices;
int P_choices, L_choices;
int quantityFon, quantityLap;
double totalprice = 0;
double cashTendered; 
double notEnough;
double NewcashTendered;

//this is the main menu bro
void MainMenu(){
    printf("Welcome to the Mini Shop System \n");
    printf("1. Smartphone\n");
    printf("2. Laptop\n");
    printf("3. Exit\n");
    printf("Enter your choice : ");
    scanf("%d", &choices);
}


int main() {
    const char *S1 = "OPPO_F5";
    const char *S2 = "Iphone_6_Plus";
    const char *S3 = "Samsung_Note_10";
    const char *S4 = "Huawei_P30";

    const char *L1 = "Asus ROG";
    const char *L2 = "Acer Predator";
    const char *L3 = "Alienware";
    const char *L4 = "Dell Pavillion";
    
    while(choices != 3){
        MainMenu();
        switch(choices){
            case 1 :
                printf("\n List of Smartphone \n");
                printf("1. %s\n", S1);
                printf("2. %s\n", S2);
                printf("3. %s\n", S3);
                printf("4. %s\n", S4);
                printf("5. Exit\n");
                while(P_choices != 5){
                    printf("\nEnter number brand : ");
                    scanf("%d", &P_choices);
                    if(P_choices == 1){
                        printf("Enter quantity : ");
                        scanf("%d", &quantityFon);
                        printf("%s", S1);
                        totalprice += quantityFon * S1_Price;
                    }else if(P_choices == 2){
                        printf("Enter quantity : ");
                        scanf("%d", &quantityFon);
                        printf("%s", S2);
                        totalprice += quantityFon * S2_Price;
                    }else if (P_choices == 3){
                        printf("Enter quantity : ");
                        scanf("%d", &quantityFon);
                        printf("%s", S3);
                        totalprice += quantityFon * S3_Price;
                    }else if(P_choices ==4){
                        printf("Enter quantity : ");
                        scanf("%d", &quantityFon);
                        printf("%s", S4);
                        totalprice += quantityFon * S4_Price;
                    }
                }
                break;
            case 2 :
                printf("\n List of Laptop \n");
                printf("1. %s\n", L1);
                printf("2. %s\n", L2);
                printf("3. %s\n", L3);
                printf("4. %s\n", L4);
                printf("5. Exit\n");
                while(L_choices != 5){
                    printf("\nEnter number brand : ");
                    scanf("%d", &L_choices);
                    if(L_choices == 1){
                        printf("Enter quantity : ");
                        scanf("%d", &quantityLap);
                        printf("%s", L1);
                        totalprice += quantityLap * L1_Price;
                    }else if(L_choices == 2){
                        printf("Enter quantity : ");
                        scanf("%d", &quantityLap);
                        printf("%s", L2);
                        totalprice += quantityLap * L2_Price;
                    }else if (L_choices == 3){
                        printf("Enter quantity : ");
                        scanf("%d", &quantityLap);
                        printf("%s", L3);
                        totalprice += quantityLap * L3_Price;
                    }else if(L_choices ==4){
                        printf("Enter quantity : ");
                        scanf("%d", &quantityLap);
                        printf("%s", L4);
                        totalprice += quantityLap * L4_Price;
                    }
                }
                break;
        }  


        
    }
        if(totalprice > 0){
            printf("\nPlease come again...\n");
            printf("Total price : RM %.2lf \n", totalprice);
            printf("Cash Tendered : RM ");
            scanf("%lf", &cashTendered);

            while(cashTendered < totalprice){
                printf("Not enough RM%.2lf\n", totalprice - cashTendered);
                printf("Re-entered the Correct Amount\n");
                printf("Cash Tendered : RM ");
                scanf("%lf", &cashTendered);
             
            }
            printf("Changes : RM%.2lf", cashTendered - totalprice);
        }else{
            printf("PLease fakoff");
        }
        

    return 0;
}