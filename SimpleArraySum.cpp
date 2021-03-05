#include <iostream>

using namespace std;

long long simpleArraySum(long long *arr, int n){
    long long sum = 0;
    for(int i = 0;i < n;i++)
       sum += arr[i];
    return sum;
}

int main()
{
    int n;
    cin >> n;
    long long *arr = new long long[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    cout << simpleArraySum(arr, n);
    return 0;
}
