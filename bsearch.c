// returns the positions of the value in the array, using binary search
// returns -1 if not found
int search(int initialIndex, int finalIndex, int * array, int value);

//exemple
int main()
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    printf("Item na posicao: %d\n", search(0, 5, array, 1));
    printf("Item na posicao: %d\n", search(0, 5, array, 2));
    printf("Item na posicao: %d\n", search(0, 5, array, 3));
    printf("Item na posicao: %d\n", search(0, 5, array, 4));
    printf("Item na posicao: %d\n", search(0, 5, array, 5));
    printf("Item na posicao: %d\n", search(0, 5, array, 6));
    printf("Item na posicao: %d\n", search(0, 5, array, 88));
    return 0;
}

// implementation
int search(int initialIndex, int finalIndex, int * array, int value) {
    int middle = initialIndex + ((finalIndex - initialIndex)/2);
    if(array[middle] == value){
     return middle;   
    }
    if(initialIndex == finalIndex){
        return -1;
    }
    if(array[middle] > value){
        return search(initialIndex, middle - 1, array, value);
    } else {
        return search(middle + 1, finalIndex, array, value);
    }
}
