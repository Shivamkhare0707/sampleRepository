 #include<stdio.h>
int main(int argc, char const *argv[])
{ 
    printf("%d\n",sizeof(int));//size of int & signed int 
    printf("%u\n",sizeof(int));//size of unsigned int 
    printf("%ld\n",sizeof(int));//size of signed long int 
    printf("%lu\n",sizeof(int));//size of unsigned long  
    printf("%hd\n",sizeof(int));// size of signed short int 
     printf("%hu\n",sizeof(int));//size of unsigned long int 
    printf("%c\n",sizeof(char));// size of charecter & signed charecter
    printf("%u\n",sizeof(char));// size of unsigned charecter 
    printf("%f\n",sizeof(float));// size of float
    printf("%lf\n",sizeof(double));//size of double
    printf("%Lf\n"),sizeof(long double);//size of long double 
    return 0;
}
