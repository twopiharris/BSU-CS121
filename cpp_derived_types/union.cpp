//union.cpp

//union is not generally recommended any more
//it can define relationships, but can be quite difficult
//to use well

struct circle{
  int radius;
};

struct triangle{
  int side1;
  int side2;
  int angle;
};

struct rectangle{
  int side1;
  int side2;
};

union shape{
  struct circle s1;
  struct triangle s2;
  struct rectangle s3;
}; // end union


int main(){
  // not really doing anything here.
  return 0;
} // end main
