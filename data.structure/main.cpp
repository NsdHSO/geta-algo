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

int get(struct Array stud, int index){
   if(index >=0 && stud.length >= index)
    return stud.numbers[index];
    
    return -1;
}

int max(struct Array stud){
    int max= 0;
    for(int i=0; i< stud.length; i++){
        if(stud.numbers[i] > max){
            max = stud.numbers[i];
        }
    }
    return max;
}
int min(struct Array stud){
    int min= stud.numbers[0];
    for(int i=0; i< stud.length; i++){
        if(stud.numbers[i] < min){
            min = stud.numbers[i];
        }
    }
    return min;
}

int sum(struct Array stud){
    int sum=0;
    
    for(int i=0; i< stud.length; i++){
        sum+= stud.numbers[i];
    }
    return sum;
}

int sumRecur(struct Array stud, int n){
    if(n < 0){
        return 0;
    }
    return sumRecur(stud, n-1) + stud.numbers[n];
}

float avg(struct Array stud){
    return  sumRecur(stud, stud.length -1) / stud.length;
}

void revArray(struct Array * stud){
    int temp[stud->size];
    int i= stud->length;
    for(int j = 0; i>=0; i--,j++){
        temp[j] = stud->numbers[i];
    }
    
    for(int i =0 ; i< stud->length; i++){
        stud->numbers[i] = temp[i];
    }
}

void anotherReverse(struct Array * stud){
    int i = stud->length -1, j =0;
    
    for(; j < i; i--, j++){
        int temp = stud->numbers[i];
        stud->numbers[i] = stud->numbers[j];
        stud->numbers[j] = temp;
        
    }
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
    cout<<"--------"<<endl;
    cout<<get(stdu, 3)<<endl;
    cout<<max(stdu)<<endl;
    cout<<min(stdu)<<endl;
    cout<<sum(stdu)<<endl;
    cout<<sumRecur(stdu, stdu.length-1)<<endl;
    cout<<avg(stdu)<<endl;

    revArray(&stdu);

    display(stdu);
    anotherReverse(&stdu);
    display(stdu);

    return  0;
}
