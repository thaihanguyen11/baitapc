int main() {
    long long x, max_val = 0;

    while (scanf("%lld", &x) == 1) {
        if (x > max_val) {
            max_val = x;
        }
    }

    printf("%lld\n", max_val);
    return 0;
}
