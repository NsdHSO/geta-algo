//
//  main.cpp
//  data.structure
//
//  Created by David Nechiforel on 07.01.2023.
//

#include <iostream>
using namespace std;
void swap(int *p, int *b){
    int temp;
    temp = *p;
    *p = *b;
    *b = temp;
}

int main(int argc, const char * argv[]) {
    int a=10,b=20;
    
    swap(&a, &b);
    cout<< a<< endl;
    cout<< b<<endl;
}
