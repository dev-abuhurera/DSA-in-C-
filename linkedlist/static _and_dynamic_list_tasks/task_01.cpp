#include <iostream>
#include <vector>

using namespace std;
int insertTransaction(double amount, vector<double>& vec);  // function prototype here
int deleteTransaction(int index, vector<double> &vec); // function prototype here
int findandupdate(double oldAmount, double newAmout, vector<double> &vec); // function prototype here
int calculateStatistics(vector<double> &vec); // function prototype here
int displayTransactionsSorted(bool ascending, vector<double> &vec); // function prototype here



int main(){

    // Create a vector 

//-----------------------------------------------------


    int size;

    cout << "Enter size of vector: ";

    cin >> size;

    vector<double>* vec = new vector<double>(size); // pointer

    // Fill the vector with values

    cout << "Enter " << size << " values: " <<endl;

    for(int i = 0; i < vec->size(); i++){

        cin >> (*vec)[i]; 
        // (*vec).capacity();
        
    }

    // Now we have a vector with the values of transaction in it 

    double amount;

    cout << "Enter the amount to be inserted: " << endl;

    cin >> amount;


    insertTransaction(amount, *vec);

//---------------------------------------------------------------------

    // Now we will delete a specific transaction from the vector

    int index;

    cout << "Enter the index of the transaction to be deleted: " << endl;

    cin >> index;

    deleteTransaction(index, *vec);

    

    // -----------------------------------------------------

    cout << endl;

    double oldAmount, newAmout;

    cout << "Enter the old amount to be updated: " << endl;

    cin >> oldAmount;
    cout << "Enter the new amount: " << endl;
    cin >> newAmout;

    findandupdate(oldAmount, newAmout, *vec);


    // -----------------------------------------------------


    calculateStatistics(*vec);

    // -----------------------------------------------------

    bool ascending;

    cout << "Enter 1 for ascending order and 0 for descending order: " << endl;

    cin >> ascending;

    displayTransactionsSorted(ascending, *vec);

    // -----------------------------------------------------


    // cout << "The values in the vector are: " << endl;

    // for(int i = 0; i < vec -> size(); i++){

    //     cout << (*vec)[i] << " ";
    // }

    return 0;
}

 //-----------------------------------------------------

int insertTransaction(double amount, vector<double> &vec){

    // (*vec)[vec -> size() + 1] = amount;
    
    if(vec.empty()){
        cout<< "Vector is empty" << endl;
    }

    vec.push_back(amount); // This will put the amount at the end 
    return 0;
}

//-----------------------------------------------------


int deleteTransaction(int index, vector<double> &vec){

    // To delete the specific amount from the vector
    
   if(vec.empty()){
        cout<< "Vector is empty" << endl;
        return -1;
    }

    for(int i = 0; i < vec.size(); i++){


        if( i == index){

            vec.erase(vec.begin() + i); // This will remove the element at the index
            cout<< "Element at index " << index << " is removed" << endl;
            return 0;

        }

    }

    return 0;
}

//-----------------------------------------------------

int findandupdate(double oldAmount, double newAmount, vector<double> &vec){

    if(vec.empty()){

        cout << "Vector is empty" << endl;
        return -1;

    }

    for (int i = 0; i < vec.size(); i++){
        
        if(vec[i] == oldAmount){
            vec[i] = newAmount;
        }

    }

    cout << "The old amount " << oldAmount << " is updated to " << newAmount << endl;

    return 0;
}

int calculateStatistics(vector<double> &vec){
    
    if(vec.empty()){
        cout << "Vector is empty" << endl;
        return -1;
    }

    // calculate the numer of transactions

    // Number of transactions are the elements inside the vector

    int totalTransactions = vec.size();
    cout << "Total number of transactions: " << totalTransactions << endl;

    // Maximum transaction 


    double maxTransaction = vec[0]; // we have to compare the values inside the vector to find the maximum value

    for(int i = 0; i < vec.size(); i++){
        if(vec[i] > maxTransaction){ // we check every value with respect to the maxValue
            maxTransaction = vec[i];
        }
    }

    cout << "Maximum transaction amount: " << maxTransaction << endl;

    // Minimum transaction

    double minTransaction = vec[0]; // we have to compare the values inside the vector to find the minimum value

    for(int i = 0; i < vec.size(); i++){
        if(vec[i] < minTransaction){
            minTransaction = vec[i];
        }
    }

    cout << "Minimum transaction amount: " << minTransaction << endl;

    // Average transaction

    // Average is sum of all values / numebr of values

    double sum = 0;

    for(int i = 0; i < vec.size(); i++){
        sum += vec[i];
    }

    double average = sum / vec.size(); // This will give the average 

    cout << "Average transaction amount: " << average << endl;

    return 0;
}

int displayTransactionsSorted(bool ascending, vector<double> &vec){
    
    for(int i = 0; i < vec.size(); i++){
        for (int j = i+1; j < vec.size(); j++){
            if(ascending){
                
                if(vec[i] < vec[j]){ // It is the ascending order
                    int temp = vec[i];
                    vec[i] = vec[j];
                    vec[j] = temp;
                }
            }
            else{
                if(vec[i] > vec[j]){ // It is the descending order
                    int temp = vec[i];
                    vec[i] = vec[j];
                    vec[j] = temp;
                }
            }
        }
    }

    cout << "The sorted transactions are: " << endl;

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
  
    return 0;
}

// ---------------------------------------------------------------------------------------------