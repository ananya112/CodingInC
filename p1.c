#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ){

  FILE *fin ;
  int n, i  ;
  int *A    ;

  fin = fopen( argv[1], "r") ;
  fscanf( fin, "%d", &n ) ;

  A = (int *)malloc( n* sizeof(int) );

  for ( i = 0; i < n ; i++ ) fscanf( fin, "%d", &A[i] ) ;

  for (i = n-1 ; i >= 0 ; i--) printf( "%d\n", A[i] ) ;

  fclose( fin );

  return 0;   
}
