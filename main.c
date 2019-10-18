#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include"coords.h"

int main(){
  printf("\t____Work 02: Construction____\n");
  printf("\t____Kiran Vuksanaj____\n");
  printf("Coordinate Locations\n");
  srand(time(NULL));
  struct coord generatedcoord = examplecoord();
  printcoord(&generatedcoord);
  printf("change longitude to 44:\n");
  editlon(&generatedcoord,44);
  printcoord(&generatedcoord);
  printf("change latitude to -23.432:\n");
  editlat(&generatedcoord,-23.432);
  printcoord(&generatedcoord);
}
