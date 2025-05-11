/*
#include<iostream>
using namespace std;

int main() {
	const int row1 = 2, col1 = 3;
	const int row2 = 3, col2 = 2;

	int A[row1][col1] = {
		{1,2,3},
		{4,5,6}
	};
	int B[row2][col2] = {
			{1,2},
			{3,4},
			{7,8}
	};

	int result[row1][col2] = { 0 };

	for (int i = 0;i < row1;i++) {
		for (int j = 0;j< col2;j++) {
			for (int k = 0;k < col1;k++) {
				result[i][j] = result[i][j] + A[i][k] * B[k][j];
			}
		}
	}

	cout << "Result:"<<endl;
	for (int i = 0;i < row1;i++) {
		for (int j = 0;j < col2;j++) {
			cout<<result[i][j]<<" ";
		}
		cout << endl;
	}
	
}
*/

//strchr



#include<iostream>
using namespace std;

int main() {
	char line[] = "This is CPP Programming Class";
	char ch = 'h';

	unsigned long int BAl, BAr = 0;

	cout << "Base addresss:" << (unsigned long int)line << endl;

	BAr=(unsigned long int)line;

	char* res = strchr(line, ch);

	char substr[] = "is";

	char* res1 = strstr(line, substr);

	

	if (res != nullptr) {

		cout << res1 << endl;
		cout << "Base addresss:" << (unsigned long int)res<< endl;
	}
	else {
		cout << "Character not found" << endl;
	}

	unsigned long int r = BAr - BAl;
	cout << "Position:" << r;

	return 0;
}



//strstr
/*
#include<iostream>
using namespace std;

int main() {
	

}
*/