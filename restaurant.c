#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void generateBillHeader(char*, char*);
void generateBillBody(char*, int, float);
void generateBillFooter(float);

typedef struct{
    char item[20];
    float price;
    int qty;
}item;

typedef struct{
    char customer[50];
    char date[50];
    int numOfItems;
    item item[50];
}orders;

int main(void){
    //dashbroad

    int option;
    printf("\t============ADV. RESTUARANT============");
    printf("\n\n1. Generate Invoice");
    printf("\n2. Show All Invoices");
    printf("\n3. Search Invoice");
    printf("\n4. Exit");

    printf("\nPlease select your prefered operation:\t");
    scanf("%d", &option);
    
    switch (option){
    case 1:
        printf("\nPlease enter the name of the customer\t:\t");

        break;
    
    default:
        break;
    }

    printf("\n\n");
    return 0;
}

void generateBillHeader(char name[50], char date[30]){
    printf("\n\n");
    printf("\t    ADV. Retuarant");
    printf("\n\t   ----------------");
    printf("\nDate: %s", date);
    printf("\nInvoice To: %s", name);
    printf("\n");
    printf("----------------------------\n");
    printf("Item\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n----------------------------");
    printf("\n\n"); 
}

void generateBillBody(char item[30], int qty, float price){
    printf("%s\t\t", item);
    printf("%d\t\t", qty);
    printf("%.2f\t\t", qty * price);
    printf("\n");
}

void generateBillFooter(float total){
    printf("\n");
    float dis = 0.1 * total;
    float netTotal = total - dis;
    float cgst = 0.09 * netTotal;
    float grandtotal = netTotal + 2 * cgst;
    printf("------------------------------\n");
    printf("Sub Total\t\t\t%.2f", total);
    printf("\nDiscount @10%%\t\t\t%.2f", dis);
    printf("\n\t\t\t\t--------");
    printf("\nNet Total\t\t\t");
    printf("\nCGST @9%%\t\t\t%.2f", cgst);
    printf("\nSGST @9%%\t\t\t%.2f", cgst);
    printf("\n------------------------------");
    printf("\nGrand Total\t\t\t%.2f", grandtotal);
    printf("\n------------------------------\n");
}