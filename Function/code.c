// // Type 1: Take something and return nothing 

// #include<stdio.h>

// int addition(int x, int y){ // x, y-> parameter

//     int sum = x+y;
//     printf("Sum : %d ", sum);

// }

// int main(){
//     addition(10,20);  // invoke-> 10,20 -> arguments
// }



// // Type 2: Take something and return something

// #include<stdio.h>

// int addition(int x, int y){
//     int sum = x+y;
   
//     return sum;

// }

// int main(){


//     // printf("Sum is : %d ",addition(10,20));

//     int result = addition(10,200); 
//     printf("Sum is : %d ",result);
// }


// // Type 3: Take Nothing and return something

// #include<stdio.h>

// int addition(){
//     int x = 10;
//     int y = 20;
//     int sum = x+y;
   
//     return sum;

// }

// int main(){


//     // printf("Sum is : %d ",addition(10,20));

//     int result = addition(10,200); 
//     printf("Sum is : %d ",result);
// }

// Type 4: Take Nothing and return Nothing

#include<stdio.h>

int addition(){
    int x = 10;
    int y = 20;
    int sum = x+y;
   
    printf("Sum is : %d ",sum);

}

int main(){
   addition(); 
}