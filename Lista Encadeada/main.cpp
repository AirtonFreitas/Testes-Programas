#include <iostream>
#include <cstdlib>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

using namespace std;

string garagem, *pgaragem;

int main() {
	
garagem = "palio";

*pgaragem = "0";

cout << "\nDigite o que esta em garagem: \n";
cout << garagem;
cout << "\nDigite o que esta em *pgaragem: \n";
if(*pgaragem == 0){
cout << "\nO ponteiro *pgaragem esta vazio\n";
}else{
cout << *pgaragem;
}

string *pgaragem = &garagem;

cout << "\nAgora atribui a *pgaragem = garagem: \n";
cout << "\nDigite o que esta em *pgaragem: \n";
cout << *pgaragem;

 

}
