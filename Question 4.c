#include <stdio.h>

void sequencer(int current, int max, int count) {
    int next;
    scanf("%d", &next);
    if (next == 0) {
        printf("(%d; %d)", max, count);
        return;
    }
    if (next > max) {
        max = next;
        count = 1;
    } else if (next == max) {
        count++;
    }
    sequencer(next, max, count);
}

int main() {
    sequencer(0, 0, 0);
    return 0;
}
