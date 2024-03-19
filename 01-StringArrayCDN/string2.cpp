#include <iostream>
using namespace std;

int length(char input[]) {
	int count = 0;
	for(int i = 0; input[i] != '\0'; i++) {
		count++;
	}
	return count;
}

void reverseString(char input[]) {
	int len = length(input);
	int i = 0, j = len - 1;
	while(i < j) {
		char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
	}
}

int main() {
	char input[100];
	//cin >> input;
    //cin>>>> will stop whenever its sees any tab space because it work untill came space in input 
	cin.getline(input, 100);    //cin.getline(string_name,length of string,delimiter)  last element will become '/0' by cin.get 
                                // delemeter that mean function will stop once they get delimeter value
                                    //=======>>> this use as replacment of cin
	
	reverseString(input);
	cout << input << endl;
}