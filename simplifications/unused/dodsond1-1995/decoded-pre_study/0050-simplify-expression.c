main() {
  char V1[9], *V2, V3 = getchar(), V4;
  for (; (V3 + 1) && (!(((V3 - 65) * (91 - V3) >= 0) + ((V3 - 97) * (123 - V3) >= 0)));
         putchar(V3), V3 = getchar());
  for (; V3 + 1;) {
   for (V2 = V1, V4 = ((V3 - 65) * (91 - V3) >= 0);
         ((((V3 - 65) * (91 - V3) >= 0) + ((V3 - 97) * (123 - V3) >= 0))
             && "-Pig-" "Lat-in" "COb-fus" "ca-tion!!"[(((V3 - 65) * (91 - V3) >= 0) ? V3 + 32 :
             V3) - 97] - '-') || ((V2 == V1) && !(*(V2++) = 'w')) || !(*(V2++) = 97);
       *(V2++) = (((V3 - 65) * (91 - V3) >= 0) ? V3 + 32 : V3), V3 = getchar())
    ;
   for (V3 = V4 ? (((V3 - 97) * (123 - V3) >= 0) ? V3 - 32 : V3) : V3;
         (((V3 - 65) * (91 - V3) >= 0) + ((V3 - 97) * (123 - V3) >= 0));
         putchar(V3), V3 = getchar())
    ;
   for (*V2 = 0, V2 = V1; *V2; putchar(*(V2++)))
    ;
   for (; (V3 + 1) && (!(((V3 - 65) * (91 - V3) >= 0) + ((V3 - 97) * (123 - V3) >= 0)));
          putchar (V3), V3 = getchar())
    ;
  }
}
