
//This program calculate positive , negative and zero ratio of a given list

#include <iostream>
#include <iomanip>                                  // library for print custom decimal points

using namespace std;

void result (int size, float plusCount, float minusCount, float zeroCount) {
    float p = plusCount / size;
    float m = minusCount / size;
    float z = zeroCount / size;

    cout << "Plus number ratio     = "<< fixed << setprecision (6) << p << endl;                             // way of printing custom decimal points
    cout << "Negative number ratio = " << fixed << setprecision(6) << m << endl;
    cout << "Zeros rtio            = " << fixed << setprecision(6) << z;

}

void checkArray (int size, int arr []) {
    int i;
    float plusCount = 0, minusCount = 0, zeroCount = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {                                                                   // count positive numbers
            plusCount++;
        }
        else if (arr[i] < 0)
        {                                                                   // count negative numbers
            minusCount++;
        }
        else
        {                                                                   // count zeros
            zeroCount++;
        }
    }
    result (size, plusCount, minusCount, zeroCount);

    //cout << plusCount << " " << minusCount << " " << zeroCount << endl;
}

void getArray (int size) {
    int arr [size], i;
    
    for (i = 0; i < size; i++) {
        cout << "element" << i << " = ";
        cin >> arr [i];

    }
    checkArray (size, arr);
}

int main () {
    int n;                                      // size of array

    cout << "size = ";
    cin >> n;

    getArray (n);

}
