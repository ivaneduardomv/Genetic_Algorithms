#include <stdlib.h>
#include <stdio.h>

typedef struct tGene_tag
{
   unsigned char G_bit0 : 1;
   unsigned char G_bit1 : 1;
   unsigned char G_bit2 : 1;
   unsigned char G_bit3 : 1;
   unsigned char G_bit4 : 1;
   unsigned char G_bit5 : 1;
   unsigned char G_bit6 : 1;
   unsigned char G_bit7 : 1;
}tGene;

void Set_Gene(const tGene *g, unsigned char v);
void Display_Gene(const tGene g);
tGene Cross_Gene(tGene p, tGene m);

int main(int argc, char *argv[])
{
   tGene gen1;
   Set_Gene(&gen1, 0xAA);
   return 0;
}


void Set_Gene(const *tGen g, unsigned char v)
{
   g->Gbit0 = v | 0x01;
   g->Gbit1 = v | 0x02;
   g->Gbit2 = v | 0x04;
   g->Gbit3 = v | 0x08;
   g->Gbit4 = v | 0x10;
   g->Gbit5 = v | 0x20;
   g->Gbit6 = v | 0x40;
   g->Gbit7 = v | 0x80;
}


tGene Display_Gene(const tGene g)
{
   printf("g = %b", g);
}


tGene Cross_Gene(tGene p, tGene m)
{
   tGene c = p | m;
   return c;
}
