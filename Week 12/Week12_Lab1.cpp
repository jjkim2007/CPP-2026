#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <utility>

using namespace std;
const int ARRAY_SIZE = 100000;   // can store up to 100 numbers

typedef chrono::high_resolution_clock Clock;

// Function prototypes
void createRandomList(int list[]); 
void printList(int list[]);
void bubbleSort(int list[]); 
int findSmallestItem(int list[], int loc); 
void selectionSort(int list[]);            

int main()
{
    srand(time(0));      // randomize the seeds
    
    int num_list[ARRAY_SIZE];         // store a set of numbers
    
    // 1. Populate the array first
    createRandomList(num_list);
    
    // 2. Display the numbers before sorting
    cout << "***Before Sorting***" << endl;
    printList(num_list);
    
    cout << "\n\nSorting " << ARRAY_SIZE << " numbers..." << endl;
    
    // 3. Start timing
    auto start_time = Clock::now();
    
    // 4. Sort the list (Uncomment selectionSort and comment bubbleSort to test it!)
    // bubbleSort(num_list); 
    selectionSort(num_list); 
    
    // 5. End timing
    auto end_time = Clock::now();
    
    // 6. Display the numbers after sorting
    cout << "\n***After Sorting***" << endl;
    printList(num_list);
    
    // 7. Output the time taken
    cout << "\n";
    cout << setprecision(5) << showpoint << fixed;
    cout << "This sorting process took "
         << chrono::duration<double>(end_time - start_time).count()
         << " seconds" << endl;
         
    return 0;
}

// Function bodies (definitions)

int findSmallestItem(int list[], int loc){
    int minIndex = loc;
    for (int i = loc + 1; i < ARRAY_SIZE; i++){
        if (list[i] < list[minIndex]){
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSort(int list[]){
    // Uses findSmallestItem to perform a Selection Sort
    for (int i = 0; i < ARRAY_SIZE - 1; i++){
        int minIndex = findSmallestItem(list, i);
        
        // Swap the current item with the smallest item found
        if (minIndex != i){
            int temp = list[i];
            list[i] = list[minIndex];
            list[minIndex] = temp;
        }
    }
}

void createRandomList(int list[]){
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        list[i] = rand() % 100;            // might get 0..99
    }
}

void bubbleSort(int list[]){
    for (int pass = 1; pass < ARRAY_SIZE; pass++){
        for (int i = 0; i < ARRAY_SIZE - pass; i++){
            // swap the item if the current is greater than the next
            if (list[i] > list[i+1]){
                int temp = list[i+1];
                list[i+1] = list[i];
                list[i] = temp;
            }
        }
    }
} 

void printList(int list[]){
    // print out 20 numbers per row 
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        // Add a newline every 20 numbers, but skip the very first iteration
        if(i % 20 == 0 && i != 0) cout << endl;
        cout << setw(3) << list[i];
    }
    cout << endl; 
}
			
	
