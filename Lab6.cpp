#include <iostream>
using namespace std;

int index_of_smallest(const int a[], int start_index, int user_size);
int index_of_largest(const int a[], int start_index, int user_size);
void fillUp(int a[], int size);
void avgOfArray(int a[], double size);

int main()
{
    int user_size, index_of_min, index_of_max;
    cout << "How big is this array: ";
    cin >> user_size;
    int Array[user_size];
    fillUp(Array, user_size);
    
    index_of_min = index_of_smallest(Array, 0, user_size);
    
    cout << "Index of minimum is: " << index_of_min << endl;
    cout << "The smallest number is: " << Array[index_of_min] << endl;
    
    index_of_max = index_of_largest(Array, 0, user_size);
    cout << "Index of maximum is: " << index_of_max << endl;
    cout << "the largest number is: " << Array[index_of_max] << endl;
    
    avgOfArray(Array, user_size);
   
}

int index_of_smallest(const int a[], int start_index, int user_size)
{
      int min = a[start_index], index_of_min = start_index;
     for(int i = start_index+1; i < user_size; i++)
          if(a[i] < min )
          {
                min = a[i];
                index_of_min = i;
           }
           return index_of_min;
}

int index_of_largest(const int a[], int start_index, int user_size)
{
      int min = a[start_index], index_of_max = start_index;
     for(int i = start_index+1; i < user_size; i++)
          if(a[i] > min )
          {
                min = a[i];
                index_of_max = i;
           }
           return index_of_max;
}

void fillUp(int a[], int size)
{
    cout << "Enter " << size << " of numbers: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}

void avgOfArray(int a[], double size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = a[i] + sum;
        
    }
    cout << "The average of the array is: " << sum/size << endl;
}
