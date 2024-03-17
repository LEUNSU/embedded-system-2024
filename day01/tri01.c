  #include <stdio.h>
 
  void main()
  {
    for(int i =0; i <5; i++)  {
      for(int j =0; j <4; j++)
      {
        printf("*");
      }
      printf("\n");
    }
    printf("\n");

    for(int i =0; i<5; i++){
      for(int j =0; j<= i; j++){
        printf("*");
      }
      printf("\n");
    }
    printf("\n");
 
    for(int i=0; i<5; i++){
      for(int j=4; j>i; j--){
        printf(" ");
      }
      for(int k=0; k<2*i+1; k++){
       printf("*");
      }
      printf("\n");
    }
  }
