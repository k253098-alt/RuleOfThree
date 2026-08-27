#include <iostream>
using namespace std;

int main (){
	int rows, cols;
	
	cout << "Enter number of rows and cols: " << endl;
	cin >> rows;
	cin >> cols;
	
	int **matrix = new int *[rows];
	
	for (int i = 0; i< rows; i++){
		matrix[i] = new int[cols];
	}
	
	for(int i = 0; i< rows; i++){
		for( int j=0; j<cols; j++){
			matrix[i][j] = 0;
		}
	}
	
	for(int i = 0; i< rows; i++){
		for( int j=0; j<cols; j++){
			cout<< matrix[i][j] << "";
			
		}
		cout << endl;
		
	}
	
	for (int i=0; i< rows; i++){
		delete[] matrix[i]; // delete eah row
		
	}
	
	delete[] matrix; // delete row pointers
}