#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100000

int arr[MAX_N];

typedef struct {
    int key;
    int value;
} Pair;

typedef struct {
    Pair* data;
    size_t size;
    size_t capacity;
} Map;

void initMap(Map* map, size_t capacity) {
    map->data = (Pair*)malloc(capacity * sizeof(Pair));
    map->size = 0;
    map->capacity = capacity;
}

void freeMap(Map* map) {
    free(map->data);
}

void insert(Map* map, int key) {
    for (size_t i = 0; i < map->size; i++) {
        if (map->data[i].key == key) {
            map->data[i].value++;
            return;
        }
    }
    if (map->size == map->capacity) {
        map->capacity *= 2;
        map->data = (Pair*)realloc(map->data, map->capacity * sizeof(Pair));
    }
    map->data[map->size].key = key;
    map->data[map->size].value = 1;
    map->size++;
}

int main() {
    int n;
    scanf("%d", &n);

    Map cnt;
    initMap(&cnt, n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        insert(&cnt, arr[i]);
    }

    printf("%zu\n", cnt.size);
    for (size_t i = 0; i < cnt.size; i++) {
        printf("%d %d\n", cnt.data[i].key, cnt.data[i].value);
    }

    freeMap(&cnt);

    return 0;
}
