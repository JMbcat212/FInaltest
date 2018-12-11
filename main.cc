#include <iostream>
#include <string>
#include "countline.h"
#include "countchar.h"
using namespace std;

int main(){
	int output1 = countLine("Athens");
	int output2 = countChar("Ohio University");
	
	cout << "First function lines = " << output1 << endl;
	cout << "Second function chars = " << output2 << endl;
	return 0;
}



