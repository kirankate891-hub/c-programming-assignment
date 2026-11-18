#include <stdio.h>

void merge(int a[], int l, int m, int r) {
    int tmp[100], i = l, j = m + 1, k = 0;
    while (i <= m && j <= r) tmp[k++] = (a[i] <= a[j]) ? a[i++] : a[j++];
    while (i <= m) tmp[k++] = a[i++];
    while (j <= r) tmp[k++] = a[j++];
    for (i = 0; i < k; i++) a[l + i] = tmp[i];
}

void mergeSort(int a[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}

int main() {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
