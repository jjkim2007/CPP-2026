#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <chrono>       // clock from here
#include <utility>      // for std::swap

using namespace std;

const int ARRAY_SIZE = 100000;   // can store up to 100 numbers

typedef chrono::high_resolution_clock Clock; // rename high_resolution_clock as Clock 

// function prototypes
void createRandomList(int []);           // create a set of number in the array 
void printList(int []);

// sorting methods
void bubbleSort(int list[]);
void selectionSort(int list[]);
int findSmallestItem(int list[], int);
void insertionSort(int list[]);

// Added missing prototypes for Quick Sort
void quickSort(int list[], int low, int high);
int partition(int list[], int low, int high);

int main()
{
    srand(time(0));      // randomise the seeds
    
    int num_list[ARRAY_SIZE];         // store a set of number
    
    createRandomList(num_list);       // create a set of number in the array
    
    // Added spaces for better readability in output
    cout << "\n\nSort " << ARRAY_SIZE << " numbers with insertion sort..." << endl;
    cout << "Sorting......." << endl;
    
    // display the numbers
    cout << "**BEFORE SORTING**" << endl;
    printList(num_list);
    
    // record the start time
    auto start_time = Clock::now();
    
    // start performing sorting
    // bubbleSort(num_list);
    // selectionSort(num_list);
    insertionSort(num_list);
    // quickSort(num_list, 0, ARRAY_SIZE - 1);
    
    cout << "\n\n**AFTER SORTING**" << endl;
    printList(num_list);
    
    // record end time
    auto end_time = Clock::now();
    
    // Use the end time - start time to get the elapsed time 
    cout << "\n" << endl;
    cout << setprecision(5) << showpoint << fixed;
    cout << "This sorting process took "
         << chrono::duration<double>(end_time - start_time).count()
         << " seconds" << endl;
    
    return 0;
}

// --- function body (definition) ---

void insertionSort(int list[]){
    for (int pass = 1; pass < ARRAY_SIZE; pass++)
    // If the current number is smaller than the previous 
    {
        if(list[pass] < list[pass-1])
        // We need to change the location (shift previous to current)
        {
            int temp = list[pass];      // copy the current value
            int loc = pass;             // copy the current location 
            
            // Shift the previous to the current 
            do{
                list[loc] = list[loc-1];    // move the front to behind
                loc--;                      // move the index to previous 
            }
            while (loc > 0 && list[loc-1] > temp);
            
            // after shifting the value, we have to copy the temp value to the correct location
            list[loc] = temp;
        }
    }
}

// Added the missing partition function required by quickSort
int partition(int list[], int low, int high) {
    int pivot = list[high];
    int i = (low - 1);
    
    for (int j = low; j <= high - 1; j++) {
        if (list[j] < pivot) {
            i++;
            int temp = list[i];
            list[i] = list[j];
            list[j] = temp;
            swap(list[i], list[j]);
        }
    }
    swap(list[i + 1], list[high]);
    return (i + 1);
}

void quickSort(int list[], int low, int high){
    if (low < high){
        int pi = partition(list, low, high);
        
        quickSort(list, low, pi-1);
        quickSort(list, pi+1, high);
    }
}

void selectionSort(int list[]){
    int minIndex = 0;                  // Assume as 0 
    
    for(int loc = 0; loc < ARRAY_SIZE; loc++)
    {
        // find the smallest item location
        minIndex = findSmallestItem(list, loc);
        
        // swap the item between minIndex and loc
        int temp  = list[loc];
        list[loc] = list[minIndex];
        list[minIndex] = temp;
    }
}

int findSmallestItem(int list[], int loc)
{
    int minIndex = loc;
    
    for (int i = loc + 1; i < ARRAY_SIZE; i++)
    {
        if(list[i] < list[minIndex]){
            minIndex = i; // record the index location for the smallest items
        }
    }
    return minIndex;
}

void bubbleSort(int list[]){
    for(int pass = 1; pass < ARRAY_SIZE; pass++)
    {
        // exchange/swap the items
        for(int i = 0; i < ARRAY_SIZE - pass; i++)
        {
            // swap the item
            if(list[i] > list[i+1])
            {
                int temp = list[i+1];
                list[i+1] = list[i];
                list[i] = temp;
            }
        }
    }
}

void printList(int list[]){
    // print out 20 number per row 
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        if(i > 0 && i % 20 == 0) cout << endl; // Fixed so it doesn't drop a line on index 0
        cout << setw(3) << list[i];
    }
} 

void createRandomList(int list[]){
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        list[i] = rand() % 100;          // might get 0..99
    }
}
