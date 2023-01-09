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


struct Student * newStudent(){
    struct Student *student;
    student = (struct Student * )malloc(sizeof(struct Student));
    student->address[0]='S';
    student->lastName[0]='S';
    student->firstName[0]='S';
    
    return student;
};



int main(int argc, const char * argv[]) {
    struct Student *student;
    student = newStudent();
    cout<<student->lastName[0]<<endl;
}
