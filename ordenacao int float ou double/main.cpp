#include <iostream>
using namespace std;
int main()
{
	double vet[]={67.250, 54.500}, aux;
	
	
	cout<<"\nAntes da Comparacao\n";
	cout<<"\n"<<vet[0]<<"\t"<<vet[1]<<"\n";
	
	if(vet[0]>vet[1])
		{
			aux=vet[0];
			vet[0]=vet[1];
			vet[1]=aux;
			
		}
	
	cout<<"\nApos da Comparacao\n";
	cout<<"\n"<<vet[0]<<"\t"<<vet[1]<<"\n";
	system ("pause");
}
