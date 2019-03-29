#include <iostream>
#include <stdio.h>

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
int getMax(int in, int fin){
    int temp, max = 0;
    for(int i = in; i <= fin; i++){
        temp = algorithm(i, 1);
        if(temp > max){
            max = temp;
        }
    }
    return max;
}

void checkIfSwap(int* in, int* fin){
    int temp;
    if(*in > *fin){
        temp = *fin;
        *fin = *in;
        *in = temp;
    }
}

int main(int argc, char *argv[]) {
    int a, b;
    while((scanf("%d %d", &a, &b)) == 2) {
        int in, fin;
        cin >> in >> fin;

        checkIfSwap(&in, &fin);

        cout << in << " " << fin << " " << getMax(in, fin) << endl;
    }
}

