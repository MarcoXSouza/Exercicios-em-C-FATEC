#include <stdio.h>
#include <stdlib.h>
#define tam 4

main(){
int vetA[tam], i, num, naoDiv5;
naoDiv5 = 0;
i=0;
while (i < tam)
{
    printf("digite um valor divisivel por 5: ");
    scanf("%d", &num);
    if (num % 5 == 0)
    {
        vetA[i] = num;
        i = i + 1;
    }
    else
    {
    naoDiv5 = naoDiv5 + 1;    
    }
}
printf("vetor A: ");
for (i = 0; i < tam; i = i + 1)
{
    printf("%d|", vetA[i]);
}
if (naoDiv5 != 0)
{
    printf ("voce digitou %d valores nao divisiveis por 5", naoDiv5);
}
return 0;
}