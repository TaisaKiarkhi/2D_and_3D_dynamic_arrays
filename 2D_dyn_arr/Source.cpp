#include <iostream>
using namespace std;

int main() {

	//testing pointer to a pointer
	int var{ 5 };
	int* pvar = &var;
	int** ppvar = &pvar;

	//without dereferencing operator
	cout << "var " << var << endl; //outputs the value 5
	cout << "pvar " << pvar << endl; //outputs the addres of var
	cout << "ppvar " << ppvar << endl;//outputs the address of pvar
	cout << endl << endl;
	//with dereferencing operator
	cout << "var " << var << endl; //outputs the value 5
	cout << "*pvar " << *pvar << endl; //outputs the value 5
	cout << "*ppvar " << *ppvar << endl;//outputs the address of var

	cout << endl << endl;

	cout << "**ppvar " << **ppvar << endl;//outputs the value 5

	//2D ARRAY

	int rows{};
	int columns{};
	cin >> rows;
	cin >> columns;
	int** field{ new int* [rows] {} };
	for (int i{}; i < rows; i++) {
		field[i] = new int [columns] {};
	}

	for (int i{}; i < rows; i++) {
		delete[] field[i];
	}
	delete[] field;


	//3D ARRAY

	int height{}; int length{}; int width{};
	cin >> height; cin >> length; cin >> width;

	double*** not_carrots{ new double** [height] {} };
	for (int i{}; i < height; i++) {
		
		not_carrots[i] = new double* [length] {};
		for (int j{}; j < length; j++) {
			not_carrots[i][j] = new double [width] {};
		}
	}

	return 0;
}