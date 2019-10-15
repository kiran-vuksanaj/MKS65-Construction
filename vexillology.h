struct cityflag {
  char* cityname;
  char grade;
  int[5] ratings; // score in the five categories of vexillology, 0-10
  char* description;
};

struct cityflag exampleflag();
void printflagdata(struct cityflag flag);
void updaterating(int index, int newrating);
