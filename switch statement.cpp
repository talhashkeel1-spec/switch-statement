#include <iostream>
using namespace std;
int main() {
char ch;
	cout<<"Enter character: ";
	cin>>ch;
	
    if(ch >= 'a' && ch <= 'z') {
    	
        switch(ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << ch << " is a vowel"<<endl;
                break;
            default:
                cout << ch << " is a consonant"<<endl;
        }
    } else {
        cout << ch << " is not an alphabet letter"
		<<endl;
    }
	return 0;
}	
	
	
	
	

