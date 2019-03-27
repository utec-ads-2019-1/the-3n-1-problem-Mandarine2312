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
    int data [4][3];

    for(int k = 0; k < 4; k++){
        int max, temp;
        max = 0;
        cin >> data[k][0];
        cin >> data[k][1];

        for(int i = data[k][0]; i <= data[k][1]; i++){
            temp = algorithm(i, 1);
            if(temp > max){
                max = temp;
            }
        }
        data[k][2] = max;
    }

    for(int l = 0; l < 4; l++){
        cout << data[l][0] << " " << data[l][1] << " " << data[l][2] << endl;
    }

    return 0;
}