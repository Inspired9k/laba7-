#include <stdio.h>
#include <iostream>

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}
int main()
{
    const int N = 5;
    int mas[N];
    bool flag = false;
    for(int i = 0; i < N; i++) {
        scanf_s("%d", &mas[i]);
        if ((mas[i] % 10) + (mas[i] / 10) == 15) {
            flag = true;
           
        }   

    }
    if (flag == false) {
        for (int i = 0; i < N; i++)
            for (int j = i+1; j < N; j++) {
                if (mas[i] > mas[j]) {
                    swap(mas[i], mas[j]);
                }
                else
                    continue;
            }
            
        
    }
    for (int i = 0; i < N; i++){
           printf(" %d ", mas[i]);
    }
     
    
}

