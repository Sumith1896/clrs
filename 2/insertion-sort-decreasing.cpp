#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
int main(){

	vector<int> array;
	int temp_input_char;

	cout<<"Enter the array (-1 to terminate input) : "<<endl;
	cin>>temp_input_char;

	while(temp_input_char != -1){
		array.push_back(temp_input_char);
		cin>>temp_input_char;
	}

	for(vector<int>::iterator j = array.begin() + 1; j != array.end(); j++){
		int temp = *j;
		for(vector<int>::iterator i = array.begin(); i != j; i++){
			if(temp > *i){
				array.erase(j);
				array.insert(i, temp);
				break;
			}
		}
	}

	cout<<"The sorted array is : " ;
	for(vector<int>::iterator j = array.begin(); j != array.end(); j++){
		cout<<*j<<" ";
	}

	return 0;
}//Slight modification of the previous insertion-sort