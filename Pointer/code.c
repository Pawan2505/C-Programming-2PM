// #include<stdio.h>

// int main(){
//     int a = 10;

//     int *ptr = &a;

//     printf("Address of a : %d\n",&a);
//     printf("Value of  ptr : %d\n", ptr);
// }


// #include<stdio.h>

// int main(){
//     int a = 10;

//     int *ptr = &a;

//     printf("Address of a : %d\n",&a);
//     printf("Value of  ptr : %d\n", ptr);

//     printf(" a : %d\n",a);
//     printf(" ptr : %d\n", *ptr);
// }


// #include<stdio.h>

// int main(){
   
//     int arr[5] = {10,20,30,40,50};


//     for(int i = 0; i <5; i++){
//         printf("%d ",arr[i]);
//     }
// }



#include<stdio.h>

int main(){
   
    int arr[5] = {10,20,30,40,50};

    int *ptr = arr;

    // printf("%d\n",&arr[0]);
    // printf("%d\n",arr);


    for(int i = 0; i <5; i++){
        printf("%u ",*(ptr+i));
    }
}