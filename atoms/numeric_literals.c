#include <stdio.h>

// Sums a list to 110
// https://www.securecoding.cert.org/confluence/pages/viewpage.action?pageId=19759250
//int main() { int v1[] = {24, 23, 22, 2l, 20}; int v2 = 0; for (int v3 = 0; v3 < 5; v3++) { v2 += v1[v3]; } printf("%d\n", v2); }
int sum_ints1() {
  int a[] = {20, 2l, 22, 23, 24};
  int sum = 0;

  for (int i = 0; i < 5; i++) {
     sum += a[i];
  }

  return sum;
}

// Sums a list to 500
// https://www.securecoding.cert.org/confluence/pages/viewpage.action?pageId=158237194
// int main() { int v1[] = {200, 150, 100, 050, 000}; int v2 = 0; for (int v3 = 0; v3 < 5; v3++) { v2 += v1[v3]; } printf("%d\n", v2); }
int sum_ints2() {
  int a[] = {
      0000,
      0500,
      1000,
      1500,
      2000,
    };

  int sum = 0;

  for (int i = 0; i < 5; i++) {
     sum += a[i];
  }

  return sum;
}




//int main() {
//  printf("110: %d\n", sum_ints1());
//  printf("5000: %d\n", sum_ints2());
//}


//int main() { int a = 6; if (a == 1) goto output1; goto output1; printf("%d\n", 6); output1: printf("%d\n", 4); }

int atoi(char *s) {
    int v;
    char c;
    while ((c = *s++) != 0) {
        int d;
        if (c >= '0' && c <= '9')
            d = c - '0';
        else
            break;

        v = (v * 10) + d;
    }

    return v;
}

// atoi, busted with octal
void main1() { char *s = "71 inches"; int v; char c; while ((c = *s++) != 0) { int d; if (c >= '0' && c <= '9') d = c - '0'; else break; v = (v * 010) + d; } printf("%d\n", v); }


// to_upper
void main2() {
  char *v1 = "71 inches";
  char v2[10] = {0};

  char v3 = -1;
  char v4 = 0;

  while ((v4 = *(v1 + ++v3)) != 0) {
    if (v4 > 'a' && v4 < 'z') {
      v2[v3] = v4 - 0x32;
      //v2[v3] = v4 - 32; // Correct line
    } else {
      v2[v3] = v4;
    }
  }

  printf("%s\n", v2);
}

void main3() {
  printf("%d\n", 012);
}

int main() {
  printf("%d\n", 0x12);
}
