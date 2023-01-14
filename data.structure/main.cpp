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
            cout<<"You don't have space"<<endl;
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
        cout<<"You don't have space"<<endl;
    }
    
}
void removeElement(struct Array *student, int index){
    if(index == student -> length){
        student->numbers[index] = 0;
        student->length--;
    }
    if(index < student->length){
        for(int i = index ; i < student->length ; i ++){
            student->numbers[i] = student->numbers[i+1];
        }
        student->numbers[student->length] = 0;
        student->length--;
    }
    if( index > student->length){
        cout<<"There is trash value"<<endl;
    }
    if(index > student->size){
        cout<<"This index do not exist"<<endl;
    }
    
}

int linearSearch(struct Array student, int item){
    int find=0;
    for (int i = 0; i< student.length; i++){
        if(student.numbers[i] == item){
            find = i;
        }
    }
    return find;
}

int binarySearch( struct Array stud,int low, int high, int key){
    if( low <= high){
        int mid = (low + high) / 2;
        if(key == stud.numbers[mid]){
            return mid;
        }else if( key < stud.numbers[mid] ){
            return binarySearch(stud, low, mid-1,key);
        }else{
            return binarySearch(stud, mid + 1, high, key);
        }
    }
    return  -1;
    
}

int main(int argc, const char * argv[]) {
    struct Array stdu;
    stdu.size = 50;
    stdu.length = 43;
    stdu.numbers = (int *)(malloc(sizeof(int) * stdu.size));
    for(int i = 0 ; i<= stdu.length; i++){
        stdu.numbers[i] = i * 4* 3*2;
    }
  
    cout<<linearSearch(stdu, 25)<< endl;
    cout<<binarySearch(stdu, 0, stdu.length, 984)<< endl;
    display(stdu);
    
    return  0;
}
