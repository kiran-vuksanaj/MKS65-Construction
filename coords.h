struct coord {
  char *name;
  double latitude;
  double longidtude;
  char displaySymbol;
};

struct coord examplecoord();
struct coord buildcoord(char *name, double lat, double lon, char displaySymbol);
void editlat(struct coord coord, double newLat);
void editlon(struct coord coord, double newLon);
void printcoord(struct coord coord);
