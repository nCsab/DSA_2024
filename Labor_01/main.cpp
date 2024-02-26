#include <iostream>
#include "Headers/functions.h"
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *a = new int[n];

    read_array(a,n);

    cout << "The array: ";
    print_array(a,n);
    cout << endl;

    int target;
    cout << "Enter target for the linear search: ";
    cin >> target;

    int res1 = linearSearch(a,n,target);
    if(res1 != -1) {
        cout << "Target found: " << res1 << endl;
    } else{
        cout << "Target not found. " << endl;
    }

    int numb1 = 24;
    int numb2 = 36;
    cout << "LNKO of" << numb1 << " and " << numb2 << " : " << lnko(numb1,numb2) << endl;
    cout << "LKKT of" << numb1 << " and " << numb2 << " : " << lkkt(numb1,numb2) << endl;

    int b=3;
    int e=4;
    int res2 = power(b,e);
    cout << b << "^" << e << ": " << res2 << endl;


    selection_sort(a, n);
    cout << "Sorted array using selection sort: ";
    print_array(a, n);
    cout << endl;

    int target_binary;
    cout << "Enter target for the binary search: ";
    cin >> target_binary;
    int res_binary = binarySearch(a, n, target_binary);
    if (res_binary != -1) {
        cout << "Target found at index: " << res_binary << endl;
    } else {
        cout << "Target not found." << endl;
    }


    bubble_sort(a, n);
    cout << "Sorted array using bubble sort: ";
    print_array(a, n);
    cout << endl;

    minimselection_sort(a, n);
    cout << "Sorted array using modified selection sort: ";
    print_array(a, n);
    cout << endl;

    delete[] a;

    return 0;
}
