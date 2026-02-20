#include <afx.h>
#include <iostream>

CString reverse_string(const CString &s) {
    CString result = s;
    int len = result.GetLength();
    for (int i = 0, j = len - 1; i < j; ++i, --j) {
        TCHAR tmp = result[i];
        result.SetAt(i, result[j]);
        result.SetAt(j, tmp);
    }
    return result;
}

int main(int argc, char **argv) {
    CString input;
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            if (i > 1) input += " ";
            input += argv[i];
        }
    } else {
        char buf[1024];
        if (fgets(buf, sizeof(buf), stdin)) {
            input = buf;
            input.Trim();
        }
    }
    CString result = reverse_string(input);
    _tprintf(_T("%s\n"), (LPCTSTR)result);
    return 0;
}