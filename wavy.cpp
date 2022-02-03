#include <iostream>
using namespace std;

const int ZERO = 0;
const int ONE = 1;
const int TWO = 2;

int main() {

    int waveAmp = ZERO;
    int waveNumber = ZERO;
    int waveRowIndex = ZERO;
    char blank = ' ';
    char star = '*';

    cout<<"Enter amplitude of wave: ";
    cin>>waveAmp;
    cout<<"Enter number of waves: ";
    cin>>waveNumber;

    while (waveNumber > ZERO) {
        for (waveRowIndex; waveRowIndex < waveAmp; waveRowIndex++) {
            for (int i = ZERO; i < waveAmp - waveRowIndex; i++) {
                cout<<blank;
            }
            for (int j = ZERO; j <= waveRowIndex * TWO; j++) {
                cout<<star;
            }
            cout<<endl;
        }

        for (waveRowIndex; waveRowIndex >= ZERO; waveRowIndex--) {
            for (int i = ZERO; i < waveAmp - waveRowIndex; i++) {
                cout<<blank;
            }
            for (int j = ZERO; j <= waveRowIndex * TWO; j++) {
                cout<<star;
            }
            cout<<endl;
        }
        waveNumber--;
        waveRowIndex = ONE;
    }
    return 0;
}