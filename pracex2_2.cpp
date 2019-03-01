#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}


int main(){
	
	ifstream source("score1.txt");			//เอาsourceใส่score
	string line;
	string score[20];
	int i=0;
	while(getline(source,line)){
		score[i] << line << "\n";
	}

	//เรียงคะแนนในscore



	ofstream dest("result.txt");				//เอาคะแนนใส่ในresult.txt
	for(int i = 0; i < 20;i++){
		dest <<i<<":"<<score[i] << "\n";
	}
	dest.close();
	
	return 0;
}

