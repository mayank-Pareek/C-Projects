#include <stdio.h>

int main(void)
{
    int pid1 = 111, pid2 = 222, pid3 = 111;
    float pricep1 = 111.49, pricep2 = 222.99, pricep3 = 334.49;
    float avgprice = (pricep1 + pricep2 + pricep3)/3;
    char taxp1 = 'Y', taxp2 = 'N', taxp3 = 'N';
    const double testValue = 330.99;

 printf("Product Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%d)\n",pid1);
    printf("  Taxed: %c\n", taxp1);
    printf("  Price: $%.4f\n", pricep1);
    printf("\n");
    printf("Product-2 (ID:%d)\n",pid2);
    printf("  Taxed: %c\n",taxp2);
    printf("  Price: $%.4f\n",pricep2);
    printf("\n");
    printf("Product-3 (ID:%d)\n", pid3);
    printf("  Taxed: %c\n", taxp3);
    printf("  Price: $%.4f\n", pricep3);
    printf("\n");
    printf("The average prices is: $%.4f\n", avgprice);
    printf("\n");
    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n");
    printf("\n");
    printf("Some Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> %d\n", taxp1=='Y');
    printf("\n");
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n",taxp1&&taxp2=='N');
    printf("\n");
    printf("3. Is product 3 less than testValue ($%.2lf)? -> %d\n",testValue,pricep3<testValue);
    printf("\n");
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n",pricep3>(pricep1+pricep2));
    printf("\n");
    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("   of product 3 LESS product 2? ->  %d (price difference: $%.2f)\n",pricep1>=(pricep3-pricep2), pricep3 - pricep2);
    printf("\n");
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n",pricep2>=avgprice);
    printf("\n");
    printf("7. Based on product ID, product 1 is unique -> %d\n",pid1!=pid2 && pid1!=pid3);
    printf("\n");
    printf("8. Based on product ID, product 2 is unique -> %d\n", pid2 != pid1 && pid2!= pid3);
    printf("\n");
    printf("9. Based on product ID, product 3 is unique -> %d\n", pid3 != pid2 && pid3!= pid1);

    return 0;
}