/*
C Programming Practice - Island (Hybrid)
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdlib.h>

int scanIsland(int **island, int i, int j, int width, int length);
int min(int a, int b);
int max(int a, int b);

int main() {
    /* Main function */
    int width, length;
    scanf("%i %i", &width, &length);
    int *island[width];
    int count = 0;
    int biggest = 0;
    int size;

    // Memory Allocation
    for (int i = 0; i < width; i++) {
        island[i] = (int*)malloc((length+1)*sizeof(int));
    }

    // Get island map
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < length; j++) {
            scanf(" %i", &island[i][j]);
        }
    }

    // Scan island
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < length; j++) {
            if (island[i][j] == 1) {
                island[i][j] = 0;
                size = 1 + scanIsland(island, i, j, width, length);
                if (size > biggest) {
                    biggest = size;
                }
                count += 1;
            }
        }
    }

    printf("Total Island: %i\n", count);
    printf("Biggest Island Size: %i\n", biggest);

    return 0;
}

int scanIsland(int **island, int i, int j, int width, int length) {
    /* Recursive Function: Scan island */
    int size = 0;
    if (island[max(i-1, 0)][max(j-1, 0)] == 1) {
        // Northwest
        island[max(i-1, 0)][max(j-1, 0)] = 0;
        size += 1 + scanIsland(island, max(i-1, 0), max(j-1, 0), width, length);
    }
    if (island[max(i-1, 0)][j] == 1) {
        // North
        island[max(i-1, 0)][j] = 0;
        size += 1 + scanIsland(island, max(i-1, 0), j, width, length);
    }
    if (island[max(i-1, 0)][min(j+1, length)] == 1) {
        // Northeast
        island[max(i-1, 0)][min(j+1, length)] = 0;
        size += 1 + scanIsland(island, max(i-1, 0), min(j+1, length), width, length);
    }
    if (island[i][min(j+1, length)] == 1) {
        // East
        island[i][min(j+1, length)] = 0;
        size += 1 + scanIsland(island, i, min(j+1, length), width, length);
    }
    if (island[min(i+1, width)][min(j+1, length)] == 1) {
        // Southeast
        island[min(i+1, width)][min(j+1, length)] = 0;
        size += 1 + scanIsland(island, min(i+1, width), min(j+1, length), width, length);
    }
    if (island[min(i+1, width)][j] == 1) {
        // South
        island[min(i+1, width)][j] = 0;
        size += 1 + scanIsland(island, min(i+1, width), j, width, length);
    }
    if (island[min(i+1, width)][max(j-1, 0)] == 1) {
        // Southwest
        island[min(i+1, width)][max(j-1, 0)] = 0;
        size += 1 + scanIsland(island, min(i+1, width), max(j-1, 0), width, length);
    }
    if (island[i][max(j-1, 0)] == 1) {
        // West
        island[i][max(j-1, 0)] = 0;
        size += 1 + scanIsland(island, i, max(j-1, 0), width, length);
    }
    return size;
}

int min(int a, int b) {
    /* Compare and get minimum value */
    if (a < b) {
        return a;
    }
    return b;
}

int max(int a, int b) {
    /* Compare and get maximum value */
    if (a > b) {
        return a;
    }
    return b;
}
