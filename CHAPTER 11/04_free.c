#include <stdio.h>
#include <stdlib.h>
// Free(ptr) for calloc
int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    // int arr[n]; // Not allowed in c
    ptr[0] = 3; 
    printf("%d\n", ptr[0]);
    free(ptr);
    return 0;
}

// Free(ptr) for malloc
int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n *sizeof(int));
    // int arr[n]; // Not allowed in c
    ptr[0] = 3;
    free(ptr); 
    printf("%d\n", ptr[0]);
    free(ptr);
    return 0;
}