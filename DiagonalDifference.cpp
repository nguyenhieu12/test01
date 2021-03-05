#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, a[100][100];
    cin >> n;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    int sum1 = 0, sum2 = 0;
    int x = 0, y = 0;
    while(x < n){
        sum1 += a[x][y];
        x++;
        y++;
    }
    int z = 0, t = n -1;
    while(z < n && t >= 0){
        sum2 += a[z][t];
        z++;
        t--;
    }
    cout << abs(sum1 - sum2);
    return 0;
}
