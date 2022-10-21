#include<stdio.h>

void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void selection_sort(int array[], int size)
{
    int least, i, j, temp, l;
    
    for ( i = 0; i < size; i++)        
    {
        least = array[i];          
        for ( j = i + 1; j < size; j++)         
	{
            if (least > array[j])           
            {
                least = array[j];           
                l=j;            
            }   
        }
        //swap lopgic in least and ith element
        temp = array[i];
        array[i] = array[l];
        array[l] = temp;
    }
}

int main()
{
    int array[5] = {23,15,29,11,1};
    int size = 5;

    //calling the selection_sort funtion
    selection_sort(array, size);
     
    //calling the display function
    display(array, size);

    return 0;
}
