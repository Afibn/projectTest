#include <iostream>
#include <string>

using namespace std;


void delay(unsigned int x);
void delay1us(unsigned int x);

int main(int argc, char *argv[]){
	int i, j, k, l;


	for(i = 0 ; i < 60 ; i++){
		cout << ":" << i << endl;
		delay(1000);

	}

	return 0;
}



void delay1us(unsigned int x){
	int i, j;
	for(i = 0 ; i < x ; i++)
		for(j = 0 ; j < 400 ; j++);
}

void delay(unsigned int x){
	int i, j;
	for(i = 0 ; i < x ; i++)
		for(j = 0 ; j < 400000 ; j++);

}
