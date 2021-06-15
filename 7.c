#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	 int n, c = 0, mok, nmg, i; 
    int arr[10]; 

    printf("Enter decimal number : "); 
    scanf("%d", &n); 

    do 
    { 
        mok = n / 2; 
        nmg = n - mok * 2; 
        arr[c++] = nmg; 
        n = mok; 
    } while (mok != 0); 

    for (i = c - 1; i >= 0; i--) 
    printf("%d", arr[i]); 

    return 0; 
}