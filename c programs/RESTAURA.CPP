#include<stdio.h>
#include<conio.h>
#include<string.h>


struct items{
	char item[20]
	float price;
	int qty;
};

struct orders{
	char customer[50];
	char date[50];
	int numofitems;
	struct items itm[50];
};

void generateBillHeader(char
name[50],char date[30]){
	printf("\n\n");
		printf("\t    ADV.
Restaurant");
	printf("\n\t  -----------
------");
	printf("\nDate:%s",date);
	printf("\nInvoice To:
%s",name);
	printf("\n");
	printf("-----------------
--------------------n");
	printf("Items\t\t");
	printf("Qty\t\t");
	printf("Total\t\t");
	printf("----------------
--------------------\n");
	printf("\n\n");
}

void generateBillBody(char item[30],int qty, float price){
	printf("%s\t\t",item);
	 printf("%d\t\t",qty);
	 printf("%.2f\t\t",qty*price);
	printf("\n");
}

void generateBillBody(char item[30],int qty, float price){
	printf("%s\t\t",item);
	 printf("%d\t\t",qty);
	 printf("%.2f\t\t",qty * price);
	 printf("\n");
}

void generateBillBody(float total){
	printf("\n");
	float dis = 0.1 * total;
	float netTotal=total-dis;
	float
cgst=0.9*netTotal,grandTotal=netTotal+2*cgst;
	printf("----------------------------
-----------------\n");
	printf("SubTotal\t\t\t%2.f",total);
