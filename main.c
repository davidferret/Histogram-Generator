#include <stdio.h>
#define SIZE 10

void getUserInput(int data[], int *size);
void displayHistogram(int data[], int size);
void saveHistogramToFile(int data[], int size);

int main(void) {
    int data[SIZE], size;
    
    getUserInput(data, &size);
    
    printf("%7s%8s%12s\n", "Element", "Value", "Histogram");
    displayHistogram(data, size);
    saveHistogramToFile(data, size);
    
    printf("Histogram saved to 'histogram.txt'.\n");
    return 0;
}

void getUserInput(int data[], int *size) {
    printf("Enter the number of elements (max %d): ", SIZE);
    scanf("%d", size);
    
    if (*size > SIZE) {
        printf("Exceeding max size, setting to %d\n", SIZE);
        *size = SIZE;
    }
    
    printf("Enter %d values: ", *size);
    for (int i = 0; i < *size; i++) {
        scanf("%d", &data[i]);
    }
}

void displayHistogram(int data[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%7d%8d   ", i, data[i]);
        for (int j = 0; j < data[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void saveHistogramToFile(int data[], int size) {
    FILE *file = fopen("histogram.txt", "w");
    if (!file) {
        printf("Error creating file!\n");
        return;
    }
    
    fprintf(file, "%7s%8s%12s\n", "Element", "Value", "Histogram");
    for (int i = 0; i < size; i++) {
        fprintf(file, "%7d%8d   ", i, data[i]);
        for (int j = 0; j < data[i]; j++) {
            fprintf(file, "*");
        }
        fprintf(file, "\n");
    }
    fclose(file);
}
