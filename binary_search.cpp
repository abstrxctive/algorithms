int binary_search(int a, int arr[], int n) {
    int low, middle, high;
    low = 0;
    high = n - 1;
    while (low <= high) {
        middle = (low + high) / 2;
        if (a < arr[middle]) {
            high = middle - 1;
        }
        else if (a > arr[middle]) {
            low = middle + 1;
        }
        else {
            return middle;
        }
    }
    return -1;
}
