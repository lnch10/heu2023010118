#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}


int checkEqual(int arr1[], int arr2[], int n) {
	int i;
    for ( i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1; 
}


int main() {
    int n1, n2,i;
    scanf("%d", &n1);
    int arr1[n1];
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);
    int arr2[n2];
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

 
    if (n1 != n2) {
        printf("0\n");
        return 0;
    }

 
    qsort(arr1, n1, sizeof(int), compare);
    qsort(arr2, n2, sizeof(int), compare);


    if (checkEqual(arr1, arr2, n1)) {
        printf("1\n");
    } else {
        printf("0\n");
    }


	
    int count = 1;
    for (i = 0; i < n1; i++) {
        if (i < n1 - 1 && arr1[i] == arr1[i + 1]) {
            count++;
        } else {
            printf("%d %d\n", arr1[i], count);
            count = 1;
        }
    }

    return 0;
}


