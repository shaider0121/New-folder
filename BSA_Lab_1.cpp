#include <iostream>

using namespace std;

//ALL methods should be outside of the main

int myArray[30];
int numElem =0;
int maxElem =20;

void bubbleSort(){
    int i, j;
    bool swapped;
    for(int i =0; i < numElem - 1; i++){
        swapped = false;
        for(j =0; j < numElem - i -1; j++){
            if(myArray[j] > myArray[j+1]){
                swap(myArray[j], myArray[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }
}

void traverseArray(){
    cout << "Showing elements in my array \n";
    for(int i = 0; i< maxElem; i++){ 
       cout << to_string(myArray[i]) + "|";
}
cout << "\n";
}

string insertAtTheEnd(int num){
    if(numElem != maxElem){
        myArray[numElem] = num;
        numElem++;
        return "An element is succesfully inserted at the end! \n";
    }
    
    return "The array is full. Please remove elements before inserting new one. \n";
}

string insertAtTheBeginning(int num){
     if(numElem != maxElem){
         for(int i= numElem; i>=0; i--){
            myArray[i+1] = myArray[i];
         }
         
         myArray[0] =num;
         numElem++;
         return "An element is succesfully inserted at the beginning! \n";
     }
     
     
     return "The array is full. Please remove elements before inserting new one. \n";
}

string insertAtTheGivenPosition(int num, int ElementAfter){
    if(numElem != maxElem){
        int position;
        for(int i = 0; i <= maxElem; i++){
            if(myArray[i] ==ElementAfter){
                position = i;
                break;
            }
        }
        
        for(int i = numElem; i >=position; i--){
            myArray[i+1] = myArray[i];
        }
        myArray[position + 1] = num;
        numElem++;
        return "An element is successfully inserted at the specified location! \n";
    }
    
    return "The array is full. Please remove elements before inserting new one. \n";
}


int main(){
    
 
  insertAtTheBeginning(3);
  insertAtTheEnd(7);
  insertAtTheEnd(9);
  insertAtTheBeginning(20);
  insertAtTheGivenPosition(37,7);
  insertAtTheBeginning(256);
  insertAtTheGivenPosition(128,9);
  insertAtTheBeginning(19);
  traverseArray();

  
    return 0;
}