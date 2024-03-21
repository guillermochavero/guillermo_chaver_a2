

#include <iostream>

int main()
{
	float numero1, numero2;

	std::cout << "Escriba el primer numero:";
	std::cin >> numero1;

	std::cout << "Escriba el segundo numero:";
	std::cin >> numero2;

	float suma = numero1 + numero2;
	std::cout << "La suma es:" << suma << "\n"<<"\n";
	float resta = numero1 - numero2;
	std::cout << "La resta es:" <<resta<< "\n"<<"\n";
	float multiplicacion = numero1 * numero2;
	std::cout << "la multiplicacionn es:" <<multiplicacion<< "\n"<<"\n";
	float division = numero1 / numero2;
	std::cout << "La division es:" << division << "\n"<<"\n";
	return 0;
}
