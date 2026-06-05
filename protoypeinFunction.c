#include<stdio.h>
int main(){

void india();  //prototype function
   india();  //calling india
   return 0;
}

void india(){
    printf("You are in India\n");
    void australia();    //prototype function
    australia();  //calling australia
    return;
}

void australia(){
   printf("You are in Australia\n");
   void england();    //prototype function
   england();   //calling england
   return;
}

void england(){
   printf("You are in England\n");
   return;
}
