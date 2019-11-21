int main() {
    int a[20];
    for (int i = 0; ; i++) {
        a[i] = i; // segfault likely occurs here because accessing memory that's not allocated
    }
}
