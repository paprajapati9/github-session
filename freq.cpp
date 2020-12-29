#include<iostream>

using namespace std;

main(){
	
	int elements; 
	
	cout<<"Program to remove duplicates from a array"<<endl;
	
	cout<<"Enter the size of array: ";
	
	cin>>elements; //take number of elements as input
	
	int numArr[elements], resultArr[elements], uniqueEl = 0;
	
	cout<<"\nEnter the elements from array: ";
	
	for(int i=0; i<elements; i++){
		cin>>numArr[i]; 
	}
	
	int flag=0;
	for(int i=0; i<elements; i++){
		flag=0;
		for(int j=0; j<uniqueEl; j++){
			if(numArr[i] == resultArr[j]){
				flag = 1;
				break;
			}
		}
		if(flag==0){
			resultArr[uniqueEl] = numArr[i];
			uniqueEl++;
		}
	}
	
	int freqArr[uniqueEl];
	for(int i=0; i<uniqueEl; i++){
		freqArr[i] = 0;
	}
	
	for(int i=0; i<uniqueEl; i++){
		for(int j=0; j<elements; j++){
			if(resultArr[i] == numArr[j]){
				freqArr[i]++;
			}
		}
		cout<<"frequency of "<<resultArr[i]<<" is: "<<freqArr[i] <<endl;
	}
	
	return 0;
}
