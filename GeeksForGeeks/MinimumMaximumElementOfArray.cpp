pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a, a+n);

    return {a[0], a[n-1]};
