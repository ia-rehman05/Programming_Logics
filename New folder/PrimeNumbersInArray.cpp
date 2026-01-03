#include <iostream>
using namespace std;


int printPrimesInArray(int arr[], int size) {

    int count = 0;
      cout << "Prime numbers are: ";
    for (int i = 0; i < size; i++) {
        int n = arr[i];
        bool isprime = true;

        if (n < 2) {
            isprime = false;
        } else {
            for (int j = 2; j <= n/2; j++) {
                if (n % j == 0) {
                    isprime = false;

                    break;
                }
            }
        }

        if (isprime) {
            cout << n << " ";
                count++;
        }
    }
    cout<<endl;
    cout<<"The total Prime numbers:"<<count<<endl;

    return count;
}

int main() {
    int size = 10;
    int arr[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

  printPrimesInArray(arr, size);

    return 0;
}