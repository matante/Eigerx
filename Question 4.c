#include <stdio.h>

int sequencer(int current, int max, int count) {
    int next;
    scanf("%d", &next);
    if (next == 0) {
        printf("(%d; %d)", max, count);
        return 0;
    }
    if (next > max) {
        max = next;
        count = 1;
    } else if (next == max) {
        count++;
    }
    return sequencer(next, max, count);
}

int main() {
    sequencer(0, 0, 0);
    return 0;
}
