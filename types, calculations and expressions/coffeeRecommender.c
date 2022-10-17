#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char coffeeType1; char coffeeType2; char coffeeType3;
	char grindSize1;  char grindSize2;   char grindSize3;
	char yesno1;  char yesno2;  char yesno3; char yesno4;
	char coffeeStrength;int noOfServing; char makertype;
	int bagWeight1; int bagWeight2; int bagWeight3;
	float temperature1; float temperature2; float temperature3;
	const double GRAMS_IN_LBS = 453.5924;


	printf("Take a Break - Coffee Shop\n");
	printf("==========================\n\n");
	printf("Enter the coffee product information being sold today...\n\n");
	printf("COFFEE-1...\n");
	printf("Type ([L]ight,[B]lend): ");
	scanf(" %c", &coffeeType1) == 0 ? exit(101) : 1;
	printf("Grind size ([C]ourse,[F]ine): ");
	scanf(" %c", &grindSize1) == 0 ? exit(101) : 1;
	printf("Bag weight (g): ");
	scanf(" %d", &bagWeight1) == 0 ? exit(101) : 1;
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &yesno1) == 0 ? exit(101) : 1;
	printf("Ideal serving temperature (Celsius): ");
	scanf(" %f", &temperature1) == 0 ? exit(101) : 1;

	printf("\n");
	printf("COFFEE-2...\n");
	printf("Type ([L]ight,[B]lend): ");
	scanf(" %c", &coffeeType2) == 0 ? exit(101) : 1;
	printf("Grind size ([C]ourse,[F]ine): ");
	scanf(" %c", &grindSize2) == 0 ? exit(101) : 1;
	printf("Bag weight (g): ");
	scanf(" %d", &bagWeight2) == 0 ? exit(101) : 1;
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &yesno2) == 0 ? exit(101) : 1;
	printf("Ideal serving temperature (Celsius): ");
	scanf(" %f", &temperature2) == 0 ? exit(101) : 1;


	printf("\n");
	printf("COFFEE-3...\n");
	printf("Type ([L]ight,[B]lend): ");
	scanf(" %c", &coffeeType3) == 0 ? exit(101) : 1;
	printf("Grind size ([C]ourse,[F]ine): ");
	scanf(" %c", &grindSize3) == 0 ? exit(101) : 1;
	printf("Bag weight (g): ");
	scanf(" %d", &bagWeight3) == 0 ? exit(101) : 1;
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &yesno3) == 0 ? exit(101) : 1;
	printf("Ideal serving temperature (Celsius): ");
	scanf(" %f", &temperature3) == 0 ? exit(101) : 1;

	printf("\n---+---------------+---------------+---------------+-------+--------------\n");
	printf("   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving\n");
	printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
	printf("   +---------------+---------------+---------------+ With  +--------------\n");
	printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
	printf("---+---------------+---------------+---------------+-------+--------------\n");
	printf(" 1 |   %d   |   %d   |    %d   |   %d  |%5d |  %.3f |   %d   |  %.1f | %.1f\n", coffeeType1 == 'l' || coffeeType1 == 'L', coffeeType1 == 'b' || coffeeType1 == 'B', grindSize1 == 'c' || grindSize1 == 'C', grindSize1 == 'f' || grindSize1 == 'F', bagWeight1, bagWeight1 / GRAMS_IN_LBS, yesno1 == 'y' || yesno1 == 'Y', temperature1, temperature1 * 9 / 5 + 32);
	printf(" 2 |   %d   |   %d   |    %d   |   %d  |%5d |  %.3f |   %d   |  %.1f | %.1f\n", coffeeType2 == 'l' || coffeeType2 == 'L', coffeeType2 == 'b' || coffeeType2 == 'B', grindSize2 == 'c' || grindSize2 == 'C', grindSize2 == 'f' || grindSize2 == 'F', bagWeight2, bagWeight2 / GRAMS_IN_LBS, yesno2 == 'y' || yesno2 == 'Y', temperature2, temperature2 * 9 / 5 + 32);
	printf(" 3 |   %d   |   %d   |    %d   |   %d  |%5d |  %.3f |   %d   |  %.1f | %.1f\n\n", coffeeType3 == 'l' || coffeeType3 == 'L', coffeeType3 == 'b' || coffeeType3 == 'B', grindSize3 == 'c' || grindSize3 == 'C', grindSize3 == 'f' || grindSize3 == 'F', bagWeight3, bagWeight3 / GRAMS_IN_LBS, yesno3 == 'y' || yesno3 == 'Y', temperature3, temperature3 * 9 / 5 + 32);

	printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");
	printf("Coffee strength ([M]ild,[R]ich): ");
	scanf(" %c", &coffeeStrength) == 0 ? exit(101) : 1;
	printf("Do you like your coffee with cream ([Y]es,[N]o): ");
	scanf(" %c", &yesno4) == 0 ? exit(101) : 1;
	printf("Typical number of daily servings: ");
	scanf(" %d", &noOfServing) == 0 ? exit(101) : 1;
	printf("Maker ([R]esidential,[C]ommercial): ");
	scanf(" %c", &makertype) == 0 ? exit(101) : 1;
	printf("\nThe below table shows how your preferences align to the available products:\n\n");
	printf("--------------------+--------------------+-------------+-------+--------------\n");
	printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
	printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
	printf("--+-----------------+--------------------+-------------+-------+--------------\n");
	printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n", ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType1 == 'l' || coffeeType1 == 'L')) || ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType1 == 'b' || coffeeType1 == 'B')), ((makertype == 'r' || makertype == 'R') && (grindSize1 == 'c' || grindSize1 == 'C')) || ((makertype == 'c' || makertype == 'C') && (grindSize1 == 'f' || grindSize1 == 'F')), (noOfServing <= 4 && bagWeight1 <= 250) || ((noOfServing >= 5 && noOfServing <= 9) && bagWeight1 == 500) || (noOfServing >= 10 && bagWeight1 == 1000), (yesno4 =='Y'||yesno4=='y')&& (yesno1 == 'Y' || yesno1 == 'y'), ((makertype == 'r' || makertype == 'R') && (temperature1 >= 60 && temperature1 <= 69.9)) || ((makertype == 'c' || makertype == 'C') && temperature1 >= 70.0));
	printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n", ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType2 == 'l' || coffeeType2 == 'L')) || ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType2 == 'b' || coffeeType2 == 'B')), ((makertype == 'r' || makertype == 'R') && (grindSize2 == 'c' || grindSize2 == 'C')) || ((makertype == 'c' || makertype == 'C') && (grindSize2 == 'f' || grindSize2 == 'F')), (noOfServing <= 4 && bagWeight2 <= 250) || ((noOfServing >= 5 && noOfServing <= 9) && bagWeight2 == 500) || (noOfServing >= 10 && bagWeight2 == 1000), (yesno4 == 'Y' || yesno4 == 'y') && (yesno2 == 'Y' || yesno2 == 'y'), ((makertype == 'r' || makertype == 'R') && (temperature2 >= 60 && temperature2 <= 69.9)) || ((makertype == 'c' || makertype == 'C') && temperature2 >= 70.0));
	printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n\n", ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType3 == 'l' || coffeeType3 == 'L')) || ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType3 == 'b' || coffeeType3 == 'B')), ((makertype == 'r' || makertype == 'R') && (grindSize3 == 'c' || grindSize3 == 'C')) || ((makertype == 'c' || makertype == 'C') && (grindSize3 == 'f' || grindSize3 == 'F')), (noOfServing <= 4 && bagWeight3 <= 250) || ((noOfServing >= 5 && noOfServing <= 9) && bagWeight3 == 500) || (noOfServing >= 10 && bagWeight3 == 1000), (yesno4 == 'Y' || yesno4 == 'y') && (yesno3 == 'Y' || yesno3 == 'y'), ((makertype == 'r' || makertype == 'R') && (temperature3 >= 60 && temperature3 <= 69.9)) || ((makertype == 'c' || makertype == 'C') && temperature3 >= 70.0));
	printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");
	printf("Coffee strength ([M]ild,[R]ich): ");
	scanf(" %c", &coffeeStrength) == 0 ? exit(101) : 1;
	printf("Do you like your coffee with cream ([Y]es,[N]o): ");
	scanf(" %c", &yesno4) == 0 ? exit(101) : 1;
	printf("Typical number of daily servings: ");
	scanf(" %d", &noOfServing) == 0 ? exit(101) : 1;
	printf("Maker ([R]esidential,[C]ommercial): ");
	scanf(" %c", &makertype) == 0 ? exit(101) : 1;
	printf("\nThe below table shows how your preferences align to the available products:\n\n");
	printf("--------------------+--------------------+-------------+-------+--------------\n");
	printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
	printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
	printf("--+-----------------+--------------------+-------------+-------+--------------\n");
	printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n", ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType1 == 'l' || coffeeType1 == 'L')) || ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType1 == 'b' || coffeeType1 == 'B')), ((makertype == 'r' || makertype == 'R') && (grindSize1 == 'c' || grindSize1 == 'C')) || ((makertype == 'c' || makertype == 'C') && (grindSize1 == 'f' || grindSize1 == 'F')), (noOfServing <= 4 && bagWeight1 <= 250) || ((noOfServing >= 5 && noOfServing <= 9) && bagWeight1 == 500) || (noOfServing >= 10 && bagWeight1 == 1000), (yesno4 == 'Y' || yesno4 == 'y') && (yesno1 == 'Y' || yesno1 == 'y'), ((makertype == 'r' || makertype == 'R') && (temperature1 >= 60 && temperature1 <= 69.9)) || ((makertype == 'c' || makertype == 'C') && temperature1 >= 70.0));
	printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n", ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType2 == 'l' || coffeeType2 == 'L')) || ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType2 == 'b' || coffeeType2 == 'B')), ((makertype == 'r' || makertype == 'R') && (grindSize2 == 'c' || grindSize2 == 'C')) || ((makertype == 'c' || makertype == 'C') && (grindSize2 == 'f' || grindSize2 == 'F')), (noOfServing <= 4 && bagWeight2 <= 250) || ((noOfServing >= 5 && noOfServing <= 9) && bagWeight2 == 500) || (noOfServing >= 10 && bagWeight2 == 1000), (yesno4 == 'N' || yesno4 == 'n') && (yesno2 == 'N' || yesno2 == 'n'), ((makertype == 'r' || makertype == 'R') && (temperature2 >= 60 && temperature2 <= 69.9)) || ((makertype == 'c' || makertype == 'C') && temperature2 >= 70.0));
	printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n\n", ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType3 == 'l' || coffeeType3 == 'L')) || ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType3 == 'b' || coffeeType3 == 'B')), ((makertype == 'r' || makertype == 'R') && (grindSize3 == 'c' || grindSize3 == 'C')) || ((makertype == 'c' || makertype == 'C') && (grindSize3 == 'f' || grindSize3 == 'F')), (noOfServing <= 4 && bagWeight3 <= 250) || ((noOfServing >= 5 && noOfServing <= 9) && bagWeight3 == 500) || (noOfServing >= 10 && bagWeight3 == 1000), (yesno4 == 'N' || yesno4 == 'n') && (yesno3 == 'N' || yesno3 == 'n'), ((makertype == 'r' || makertype == 'R') && (temperature3 >= 60 && temperature3 <= 69.9)) || ((makertype == 'c' || makertype == 'C') && temperature3 >= 70.0));

	printf("Hope you found a product that suits your likes!\n");
	return 0;
}
