// #include<stdio.h>

// int main(){
//     char username[13] = "Pawan\0 Maurya";

//     printf("%s",username);
// }

// #include<stdio.h>

// int main(){
//     char username[13] = "Pawan Maurya\0";

//     for(int  i = 0; i <=13; i++){
//         printf("%c",username[i]);
//     }

   
// }



#include<stdio.h>

int main(){
    char username[13] = "Pawan Maurya\0";

    for(int  i = 0; i <=13; i++){
        printf("%c",username[i]);
    }

   
}