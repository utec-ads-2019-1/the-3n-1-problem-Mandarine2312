#include <iostream>

using namespace std;

int algorithm (int n, int counter){
    if(n == 1){
        return counter;
    }else if (n%2 == 1){
        return algorithm(3*n+1, counter + 1);
    }else{
        return algorithm(n/2, counter + 1);
    }
}

int main() {
    int n1, n2, max, temp;
    cin >> n1;
    cin >> n2;
    max = 0;

    for(int i = n1; i <= n2; i++){
        temp = algorithm(i, 1);
        if(temp > max){
            max = temp;
        }
    }

    cout << n1 << " " << n2 << " " << max;

    return 0;
}