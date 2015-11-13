/*
 * Sometimes the purpose of a variable changes over time... v starts as the number of arguments, but then gets assigned the value of fread later.
 *
 * Can we use contractual obligations in our simplifications? What if they're guaranteed by a spec? E.G. argc is guaranteed to be non-negative, though there's no reason a bug, for example, couldn't invalidate that promise.
 *
 * Confusion *= vs =* => *a*=1;
 * Atom: !! as clomp to 0/1
 */

#include <stdio.h>
#include <string.h>

char X[] =
  " ETIANMSURWDKGOHVF:L:PJBXCYZQ::54:3:::2&:+::::16=/:::(:7:::8:90"
  "::::::::::::?_::::\"::.::::@:::'::-::::::::;!:):::::,:::::";

int j,w,h,f,u,d,g,e,n,i,l,a,r,p,c,m,o,t,s,Q=32,T[32],W[32],I=13000;

int main(int v, char** b) {

  //DAN fread(dest, size, count, stream), returns number bytes read
  //DAN read the nth byte of stdin into the first character of X, where n is the number of arguments to the program (or 5, if there are more than 5 arguments). Store 1 into v* and t if stdin has atleast n bytes.
  int k = 0;
  if (v > 0 && v < 5) {
    for (i=0;k>0&&k<5&&(k*=t=fread(X,1,1,stdin));)
  }

  for (k-1&&101==*1[b]?++g%1500?u+=(g&1^1)*(*X<0?-*X:*X):(f=e,e=w,w=d,d=u,
    m=(1 - h%2* 2  )*(d -f)/ (d<f  ?d|1 : 1|f) >  5?T[ h%Q] =o+l  , l=W[
    h++%Q]=o,o=0:m,o++,u=main(0,b)):(c=strrchr(X,~(Q&*X&*X/2)&*X)-X,j=255);
    k==1&&(c*j||main(*X-Q?8:24,b));j/=2)c<j?0:main(9+(c-j)/(j/2+1)%2*10,b);

  for (a=u=0;i<=Q*Q&&!k;j>7&&j<13?s=c*s+T[i/Q]/2,s/=++c:0)
    !(i++%Q)?a=c>a?u=s,c:a,c=s=0:0,j=T[i%Q],j=j?T[i/Q]*10/j:0,j*=(j<5)*2+1;

  for (r+=(h-r)/Q*Q;i<k/4*I;putchar((i/I<k%4)*i%2*85<<(i%176/88)),i++);

  for (g*=!!k;r+t!=h+1&&h>5&&!k;r+t!=h+1?(W[r%Q]>2*u||r==h?p=n=n>6?0:
    putchar(X[p-1+(1<<n)])&0:0,W[r++%Q]>6*u?putchar(Q):0):0)
    *X=Q,p=r%2?++n,2*p+(W[r++%Q]>2*u):p;

  return 0;
}
