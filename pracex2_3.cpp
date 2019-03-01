#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;
char table[8][8];

void showTable();
void randomTable();

int main(){
	srand(time(0));	
	randomTable();
	showTable();
}

void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}

void randomTable(){

	char A = 'A';
	char Z = 'Z';

	srand(time(0));	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			table[i][j] = rand()%Z+A;
		}
	}
}



