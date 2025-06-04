// #include<stdio.h>

// int main(){

//     // row
//     for(int row = 1; row<=5; row++){

//         // col

//         for(int col = 1; col<=5; col++){
//             printf("* ");
//         }

//         printf("\n");
//     }
// }


// #include<stdio.h>

// int main(){

//     // row
//     for(int row = 1; row<=5; row++){

//         // col

//         for(int col = 1; col<=5; col++){
//            printf("%d ",col);
//         }

//         printf("\n");
//     }
// }



// #include<stdio.h>

// int main(){

//     // row
//     for(int row = 1; row<=5; row++){

//         // col

//         for(int col = 1; col<=row; col++){
//            printf("%d ",col);
//         }

//         printf("\n");
//     }
// }

// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1


// #include<stdio.h>

// int main(){

//     // row
//     for(int row = 1; row<=5; row++){

//         // col

//         for(int col = row; col>=1; col--){
//            printf("%d ",col);
//         }

//         printf("\n");
//     }
// }


// #include<stdio.h>

// int main(){

//     // row
//     for(int row = 5; row>=1; row--){

//         // col

//         for(int col = row; col<=5; col++){
//            printf("%d ",col);
//         }

//         printf("\n");
//     }
// }


// #include<stdio.h>

// int main(){

//     // row
//     for(int row = 5; row>=1; row--){

//         // col

//         for(int col = row; col<=5; col++){
//            printf("%d ",row);
//         }

//         printf("\n");
//     }
// }




// #include<stdio.h>

// int main(){

//     // row
//     for(int row = 1; row<=5; row++){

//         // col

//         for(int col = row; col<=5; col++){
//            printf("%d ",col);
//         }

//         printf("\n");
//     }
// }


// #include<stdio.h>

// int main(){

//     // row
//     for(int row = 1; row<=5; row++){

//         // col

//         for(int col = row; col<=5; col++){
//            printf("%d ",row);
//         }

//         printf("\n");
//     }
// }



// #include<stdio.h>

// int main(){

//     // row
//     for(int row = 1; row<=5; row++){

//         // col

//         for(int col = row; col<=5; col++){

//             if(col%2==0){
//                 printf("0 ");
//             }else{
//                   printf("1 ");
//             }
           
//         }

//         printf("\n");
//     }
// }


#include<stdio.h>

int main(){

    // row
    for(int row = 65; row<=69; row++){

        int data = row;
   
        // col
        for(int col = 65; col<=row; col++){

            printf("%c ",data--);
           
        }
        printf("\n");
    }
}