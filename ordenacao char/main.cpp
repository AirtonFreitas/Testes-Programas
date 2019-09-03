#include <iostream>
using namespace std;
int main()
{
	
	char vet[]={'M','C'}, aux;
	cout << "\nAntes da Comparacao\n";
	cout << "\n" << vet[0] << "\t" << vet[1] << "\n";
	if(vet[0]>vet[1])
	{
		aux = vet[0];
		vet[0] = vet[1];
		vet[1] = aux;
		
	}
		
	cout << "\nDepois da Comparacao\n";
	cout << "\n" << vet[0] << "\t" << vet[1] << "\n";
	
	system("pause");
}
