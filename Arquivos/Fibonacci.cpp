#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

size_t teste_fibonacci(size_t numero);

int main()
{
	cout << "Digite um numero" << endl;
	size_t temp{ 0 };
	cin >> temp;
	size_t varia = teste_fibonacci(temp);
	if (varia == temp) {
		cout << "O numero " << temp << " PERTENCE a sequencia de Fibonacci!" << endl;

	}
	else {
		cout << "O numero " << temp << " NAO PERTENCE a sequencia de Fibonacci!" << endl;
	}



}

size_t teste_fibonacci(size_t numero) {
	if (numero <= 0) {
		return 0;
	}
	size_t holding = 0;

	vector <size_t> fibo{ 0, 1 };
	for (size_t i = 1; holding < numero; i++) {
		holding = fibo[i - 1] + fibo[i];
		fibo.push_back(holding);

	}


	if (find(fibo.begin(), fibo.end(), numero) != fibo.end()) {
		return numero;
	}
	else {
		return 0;
	}
}
