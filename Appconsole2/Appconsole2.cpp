//Exo 1//
#include <iostream>
//int Paire(int tab[6]) {
//	int Y = 0;
//	for (int x = 0; x < 6; x++) {
//		if (tab[x] % 2 == 0) {
//			Y++;
//		}
//
//	}
//	return Y;
//}
//
//
//	int tab[6] = { 1, 2, 3, 4, 5, 7 };
//	std::cout << Paire(tab);
//	}
//
//
////Exo 2//
//float Moyenne(float tab[5]) {
//	float C = 0;
//	float C
//		= 0;
//	for (int y = 0; y < 5; y++) {
//		
//
//		}
//}




//Exo 3//
int main() {

	int tab1[] = { 4, 6, 9, 13, 18 };
	int tab2[] = { 0, 0, 0, 0, 0, };
	int i = 4;
	int a = 0;

	while (a < 5) {
		tab2[a] = tab1[i];
		i--;
		a++;

	}
	a = 0;
	while (a < 5) {
		tab1[a] = tab2[a];
		std::cout << tab1[a];
		a++;
	}
}