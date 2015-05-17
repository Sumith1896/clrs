#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
int main(){

	vector<int> array;
	vector<int>::iterator j;
	int temp_input_char;
	int key;
	int index = 0;

	cout<<"Enter the search key : ";
	cin>>key;

	cout<<"Enter the array (-1 to terminate input) : "<<endl;
	cin>>temp_input_char;

	while(temp_input_char != -1){
		array.push_back(temp_input_char);
		cin>>temp_input_char;
	}

	//The below code could have been a lot simpler(read: simpler means less) if return 0 would have
	//been added in the 'if' block but I feel that it is not a good practice and all
	//my profs have told me to avoid it.
	cout<<"The required index is : ";
	for(j = array.begin() ; j != array.end(); j++){
		if(key == *j){
			cout<<index<<endl;
			break;
		}
		else{
			index++;
		}
	}
	if(j == array.end()){
		cout<<"NIL"<<endl;
	}

	return 0;
}//The linear search exercise