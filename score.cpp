#include <iostream>

using namespace std;

int score[10];
float Average(int arr[], int size);
int MaxVal(int arr[], int size);
int MinVal(int arr[], int size);

int main(){
    int i;
    float avg;
    int Max;
    int Min;

    cout << "Score Calculator" << endl;
    cout << "Please only input 0 - 100" << endl;

    for(i = 1; i <= 10; i++){
        cout << "Enter score No. " << i << " : ";
        cin >> score[i];
    }

    avg = Average(score, 10);
    cout << "Average score: " << avg << endl;

    Max = MaxVal(score, 10);
    cout << "Max score: " << Max << endl;

    Min = MinVal(score, 10);
    cout << "Min score: " << Min << endl;

    return 0;
}

float Average(int arr[], int size){
    int i, sum = 0;
    float avg;

    for(i = 0; i < size; i++){
        sum += arr[i];
    }
    avg = float(sum) / size;
    return avg;
}

int MaxVal(int arr[], int size){
    int i;
    int j = 0;

    for(i = 1; i <= size; i++){
        if(arr[0] < arr[i])
            arr[0] = arr[i];
    }
    return arr[0];
}

int MinVal(int arr[], int size){
    int i;
    int j = 0;

    for (i = 1; i <= size; i++){
        if(arr[0] > arr[i])
        arr[0] = arr[i];
    }
    return arr[0];
}

//Copyright Galvin @ Kalbis Institute 2021
