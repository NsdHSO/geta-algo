//
//  main.cpp
//  data.structure
//
//  Created by David Nechiforel on 07.01.2023.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;
void swap(int &p, int &b){
    int temp;
    temp = p;
    p = b;
    b = temp;
}

struct Student{
    char firstName[25];
    char lastName[25];
    char address[50];
};

int * newArray(int length){
    int *p = (int *)malloc(sizeof(int) * length);
    return p;
}

 void name(struct Student *student){
     student->lastName[0]='t';
    

    
 };

int main(int argc, const char * argv[]) {
    int a=10,b=20;
    int *p;
    p = newArray(10);
    p[2] = 20;
    cout << p[2]<<endl;
    swap(a, b);
    cout<< a<< endl;
    cout<< b<<endl;
    
    struct Student std;
    name(&std);
    cout<<std.lastName<<endl;
    
}
