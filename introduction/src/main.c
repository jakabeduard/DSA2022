
#include "function.h"
#include "errors.h"
int main() {
    int x,y;
    scanf("%i%i",&x,&y);
    printf("%i\n",sum(x,y));
    printf("%i\n",maximum(x,y));
    printf("%i\n",minimum(x,y));

    /// tombok
    int size;
    float *array,start, end ;
    printf("Adja  meg az elemek  szamat");
    scanf("%i",&size);
    allocateArray( &array,size);
    printf("Adja  meg a  tomb elemeinek az also es felso  hatrat: ");
    scanf("%i%i", &start,&end);
    fillWithRandomElements(array,size ,start,end);
    printArray(array,size);

    return 0;
}
