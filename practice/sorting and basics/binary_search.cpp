#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool binary_search(vector<int> arr, int elem) {
	sort(arr.begin(), arr.end());

	bool found = false;
	int first = 0;
	int last = arr.size() - 1;
	while (first <= last && !found) {
		int mid = (first + last)/2;
        if (arr[mid] == elem)
            found = true;
		if (elem < arr[mid])
			last = mid - 1;
		else
			first = mid + 1;
	}

	return found;
}

int main() { 
	int myints[] = {5, 4, 1, 6, 2, 3, 9, 7};
  	std::vector<int> v(myints, myints + sizeof(myints) / sizeof(int) );
	cout<<binary_search(v, 2)<<endl;	
	cout<<binary_search(v, 8)<<endl;

	return 0;
}
