#include <iostream>

int main()
{
    



}

int add(int arr[]) {
  
    int sum = 0;

    for (int i = 0; i < sizeof(arr); i++) {
        sum += arr[i];
    }

    return sum;
}