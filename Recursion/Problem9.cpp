// Printing from N -> 1 using recursion(Backtracking)

#include <iostream>

int main () {

    void rev(int i, int n){
        if(i>n) return;
        rev(i+1, n);
        cout << i;
    }

}