#include <iostream>


int main()
{
    
    std::cout << "Enter 5 numbers to perform addition and multiplication on: \n";
    
    int arr[5];

    for (int i = 0; i < sizeof(arr); i++) 
    {
        std::cin >> arr[i];
    }

    int sum = add(arr);
    int product = multiply(arr);

    std::cout << sum << std::endl << product << std::endl;

}

int add(int arr[]) {
  
    int sum = 0;

    for (int i = 0; i < sizeof(arr); i++) {
        sum += arr[i];
    }

    return sum;
}

int multiply(int arr[]) {
    int sum = 0;

    for (int i = 0; i < sizeof(arr); i++) {
        sum *= arr[i];
    }

    return sum;
}