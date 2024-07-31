#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    int n, m, ans = 0, sbd, d;
    char ten[MAX_LEN], dd[MAX_LEN];

    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    if (input == NULL || output == NULL) {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    fscanf(input, "%d %d", &n, &m);

    int *x = (int *)malloc(n * sizeof(int));
    int *y = (int *)malloc(n * sizeof(int));
    char **z = (char **)malloc(n * sizeof(char *));
    char **v = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++) {
        z[i] = (char *)malloc(MAX_LEN * sizeof(char));
        v[i] = (char *)malloc(MAX_LEN * sizeof(char));
    }

    for (int i = 0; i < n; i++) {
        fscanf(input, "%d %d %s %s", &sbd, &d, ten, dd);
        if (d >= m) {
            x[ans] = sbd;
            y[ans] = d;
            strcpy(z[ans], ten);
            strcpy(v[ans], dd);
            ans++;
        }
    }

    fprintf(output, "Tong so thi sinh trung tuyen: %d\n", ans);
    for (int i = 0; i < ans; i++) {
        fprintf(output, "%d %d %s %s\n", x[i], y[i], z[i], v[i]);
    }

    for (int i = 0; i < n; i++) {
        free(z[i]);
        free(v[i]);
    }
    free(x);
    free(y);
    free(z);
    free(v);

    fclose(input);
    fclose(output);

    return 0;
}
