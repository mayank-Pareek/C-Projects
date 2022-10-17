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

	return 0;
}
