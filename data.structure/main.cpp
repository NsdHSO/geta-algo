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

struct Array {
    int *numbers;
    int length;
    int size;
};

void display(struct Array studends){
    cout<<"NUmber of student : "<<endl;
    for(int i = 0; i< studends.length; i++){
        cout<<studends.numbers[i]<<' ';
    }
    cout<<endl;
}
void addElement(struct Array *student, int item){
    if(student->length < student->size){
        student->numbers[student->length++] = item;
    }
}

void insertElement(struct Array *student, int item, int index){
    if(index == student->length){
        if(index == student->size){
            cout<<"You don't have space";
        }else{
            addElement(student,item);
        }
    }if(index <= student->length){
        for(int i = student->length  ; i > index ; i -- ){
            student->numbers[i] = student->numbers[i-1];
        }
        student->numbers[index] = item;
        student->length++;
    }
    if(index > student->size){
        cout<<"You don't have space";
    }
    
}

int main(int argc, const char * argv[]) {
    struct Array stdu;
    cout<<"Enter A size of Array";
    cin>>stdu.size;
    cout<<"Enter a lenght of Array";
    cin>>stdu.length;
    while (stdu.length > stdu.size) {
        cout<<"Enter a correct lenght of Array";
        cin>>stdu.length;
    }
    
    stdu.numbers = (int *)(malloc(sizeof(int) * stdu.size));
    
    int i =0;
    while (stdu.length> i) {
        cout<<"Enter note of student: ";
        cin>>stdu.numbers[i];
        i++;
    }
    i = 0;
    
    display(stdu);
    
    addElement(&stdu, 20);
    display(stdu);
    insertElement(&stdu, 10, 20);
    display(stdu);
    return  0;
}
