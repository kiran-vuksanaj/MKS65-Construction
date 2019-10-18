#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"coords.h"


struct coord examplecoord(){ //assumes srand has already been taken care of!!
  char name[10];
  int i;
  for(i=0;i<10;i++){
    name[i] = 97 + (rand() % 26); // random lowercase letter
  }
  name[10] = 0;
  // printf("new random name = [%s] \n",name);
  double lat = (rand() % 10000 / 5000.0) - 1;
  double lon = (rand() % 10000 / 5000.0) - 1;
  // printf("latitude %lf and longitude %lf\n",lat,lon);
  char displaySymbol = 33 + (rand() % 15); // random symbol like ',",!,etc. (just one section)
  // printf("displaysymbol: %c\n",displaySymbol);
  return buildcoord(name,lat,lon,displaySymbol);
}
struct coord buildcoord(char *name, double lat, double lon, char displaySymbol){
  struct coord out;
  strcpy(out.name,name);
  // printf("name string: [%s]",out.name);
  out.latitude = lat;
  out.longitude = lon;
  out.displaySymbol = displaySymbol;
  return out;
}
void editlat(struct coord *coord, double newLat) {
  coord -> latitude = newLat;
}
void editlon(struct coord *coord, double newLon) {
  coord -> longitude = newLon;
}
void printcoord(struct coord *coord) {
  printf("{Location:[%s]@(%lf N,%lf W) with marker %c}\n", coord -> name , coord -> latitude , coord -> longitude , coord -> displaySymbol);
}
