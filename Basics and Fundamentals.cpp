//Mikayla Loera Marie M. Buno of C2B
#include <iostream>
using namespace std;

/*Exercise 2: Write a program that accepts elements for 2
arrays and merge the elements into another array in
descending order. Assume that each array can take up to 10
elements.*/

void PrintMergingArrays();

int main(){
	PrintMergingArrays();
	return 0;
}
void PrintMergingArrays(){
	int num[10], numTwo[10], merge[20], j, i, size, order;
	cout<< "Enter 10 elements for Array 1" <<endl;
	for(i=0; i<10; ++i){
		cout<< "Element " <<i+1 <<": ";
		cin>> num[i];
		merge[i] = num[i];
	}
	j=i;
	cout<< endl <<"Enter 10 elements for Array 2" <<endl;
	for(i=0; i<10; i++){
		cout<< "Element " <<i+1 <<": ";
		cin>> numTwo[i];
		merge[j] = numTwo[i];
		j++;
	}
	size=j;
	for(int j=0; j<size-1; j++){
		for(i=0; i<size-1; i++){
			if (merge[i]<merge[i+1]){
				order = merge[i];
				merge[i] = merge[i+1];
				merge[i+1] = order;
			}
		}
    }
    cout<< endl <<"Merged Arrays (from Array 1 and Array 2): " <<endl;
	for(i=0; i<j; i++){
		cout<< merge[i] <<endl;
	}
}