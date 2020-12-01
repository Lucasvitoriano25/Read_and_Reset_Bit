#include <stdio.h>

unsigned char ReadBit (unsigned char x, int bit);

unsigned char ResetBit (unsigned char x, int bit);

void main(void){
    unsigned char x,y,z;
    x = 0xab; //1010_1011

    y = ReadBit(x,0);//1
    z = ResetBit(x,0);//1010_1011

    printf("O resultado do Read eh : %x \n",y);
    printf("O resultado do Reset eh : %x ",z);
}
unsigned char ReadBit(unsigned char x,int bit){

    unsigned char mask;
    mask = (0x01<<bit);
    x= x & mask;

    return x;
}

unsigned char ResetBit(unsigned char x, int bit){
    unsigned char mask;
    mask =~(0x01<<bit);
    x = x & mask;
    return x;
}