#include <stdio.h>
#include <string.h>

void reverse_string(char *s) {
    if (!s) return;
    size_t i = 0, j = strlen(s);
    if (j == 0) return;
    j--;
    while (i < j) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++; j--;
    }
}

int main(int argc, char **argv) {
    char buf[1024];
    if (argc > 1) {
        strncpy(buf, argv[1], sizeof(buf)-1);
        buf[sizeof(buf)-1] = '\0';
    } else {
        if (!fgets(buf, sizeof(buf), stdin)) return 0;
        size_t len = strlen(buf);
        if (len && buf[len-1] == '\n') buf[len-1] = '\0';
    }
    reverse_string(buf);
    printf("%s\n", buf);
    return 0;
}