#include <iostream>
using namespace std;

const int ZERO = 0;
const int ONE = 1;
const int TWO = 2;

int main() {

    char blank = ' ';
    char star = '*';
    int diamondSize = 0;
    int blanksLength = 0;
    int starsLength = 0;
    int starsInLine = ONE;
    int rowValue = ONE;

    cout<<"Please enter the number of lines for the diamond: ";
    cin>>diamondSize;

    for (rowValue = ONE; rowValue <= diamondSize; rowValue++) {
        for (blanksLength = diamondSize - ONE; blanksLength >= rowValue; blanksLength--) {
            cout<<blank;
        }
        for (starsLength = ZERO; starsLength < starsInLine; starsLength++) {
            cout<<star;
        }
        cout<<endl;
        starsInLine = starsInLine + TWO;
    }

        starsInLine -= 4;

    for (rowValue = ONE; rowValue <= diamondSize - ONE; rowValue++) {
        for (blanksLength = ZERO; blanksLength < rowValue; blanksLength++) {
            cout<<blank;
        }
        for (starsLength = ZERO; starsLength < starsInLine; starsLength++) {
            cout<<star;
        }
        cout<<endl;
        starsInLine = starsInLine - TWO;
    }

    return 0;
}