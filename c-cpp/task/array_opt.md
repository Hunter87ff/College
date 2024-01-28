write a program in C to to perform some actions on an array entered by user. <br>
a) Print event numbers<br>
b) print Odd Numbers<br>
c) Print the sum and average of the elements<br>
d) print maximum and minimum value<br>
e) remove duplicate elements<br>
f) Print the reverse array<br>
Note : Program should present the menu to the user and ask for one of the option, and should have an option to re entry the array and exit the program
<br>


```cpp
#include <stdio.h>

void EvenNum(int arr[], int size) {
    printf("Even Numbers: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void OddNum(int arr[], int size) {
    printf("Odd Numbers: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void sumAvg(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / size);
}

void minMax(int arr[], int size) {
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Minimum Value: %d\n", min);
    printf("Maximum Value: %d\n", max);
}

void duplicate(int arr[], int *size) {
    for (int i = 0; i < *size; i++) {
        for (int j = i + 1; j < *size;) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < *size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
            } else {
                j++;
            }
        }
    }
}

void reverse(int arr[], int size) {
    printf("Reverse Array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, choice;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Print Even Numbers\n");
        printf("2. Print Odd Numbers\n");
        printf("3. Print Sum and Average\n");
        printf("4. Print Maximum and Minimum Value\n");
        printf("5. Remove Duplicate Elements\n");
        printf("6. Print Reverse Array\n");
        printf("7. Re-enter Array\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                EvenNum(arr, size);
                break;
            case 2:
                OddNum(arr, size);
                break;
            case 3:
                sumAvg(arr, size);
                break;
            case 4:
                minMax(arr, size);
                break;
            case 5:
                duplicate(arr, &size);
                printf("Array after removing duplicates:\n");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 6:
                reverse(arr, size);
                break;
            case 7:
                printf("Enter the size of the array: ");
                scanf("%d", &size);
                printf("Enter %d elements:\n", size);
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                break;
            case 8:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 8);

    return 0;
}
```

![2024-01-28-11-59-42](https://github.com/Hunter87ff/College/assets/83773586/fec12ea9-1b7d-4152-a5ba-32ca45cdac28)

