#include <iostream>
using namespace std;

const int ZERO = 0;
const int ONE = 1;
const int TWO = 2;

int main() {

    int triangleSize = ZERO;
    int rowValue = ZERO;
    char smRowChar = 'a';
    char lgRowChar = 'A';
    char blankChar = ' ';

    cout<<"Please enter rows for triangle: ";
    cin>>triangleSize;

    for (rowValue; rowValue < triangleSize; rowValue++) {
        for (int j = ZERO; j < triangleSize - rowValue; j++) {
            cout<<blankChar;
        }
        for (int i = ZERO; i < rowValue * TWO + ONE; i++) {
            if (rowValue % TWO == ZERO) {
                cout<< char (smRowChar + rowValue);
            }
            else {
                cout<< char (lgRowChar + rowValue);
            }
        }
        cout<<endl;
    }
    return 0;
}