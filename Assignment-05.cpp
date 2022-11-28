//Bailey Pratt CPSC146  Assignment05
#include <iostream>
#include <string>

using namespace std;

//Average of the Array
int avgArr(int inputarr[], int arrSize){
    for(int i=0; i < arrSize; i++){
        double total = total + inputarr[i];
        }
    double inputarrAvg = inputarr / sizeof(arrSize);
    return inputarrAvg;

}

//Row Average Function
bool avg_row(int X[], int Y[], int Z[], int size, double result[]){
	result[i]=((X[i] + Y[i] + Z[i]) / 2);
	return true;
}
int computeRowAvg(int arrOne[], int arrTwo[], int arrThree[], int size){
	double rowAvg[]={};
	int s = sizeof(arrOne)/sizeof(arrTwo);
	for(int i=0; i<size; i++){
		cout << "Average at " << i << " is " << rowAvg << endl;
	}

	return 0;
}

//Column Average Function

bool avg_col(int X[], int Y[], int Z[], int size, double result[]){
	result[i]=((X[i] + Y[i] + Z[i]) / 3);
	return true;
}
int computeColAvg(int arrOne[], int arrTwo[], int arrThree[], int size){
	double colAvg[]={};
	int s = sizeof(arrOne)/sizeof(arrTwo);
	for(int i=0; i<size; i++){
		cout << "Average at " << i << " is " << colAvg << endl;
	}

		return 0;

}

int main()
{
	int arrayOne[3] = {4,5,6};
	int arrayTwo[3] = {4,2,6};
	int arrayThree[3] = {3,4,5};

    avgArr(arrayOne, 3);
    computeRowAvg(arrayOne, arrayTwo, arrayThree);
    computeColAvg(arrayOne, arrayTwo, arrayThree);

    return 0;
}
