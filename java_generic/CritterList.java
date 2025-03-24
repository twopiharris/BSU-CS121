public class CritterList{
  public static void main(String[] args){
    LLGeneric <Critter> cl = new LLGeneric <Critter>();
    cl.append(new Critter("george", 1));
    cl.append(new Critter("martha", 2));
    cl.insertAfter(new Critter("george",0), new Critter("harry", 3));
    cl.iterate();

  } // end main
} // end CritterList

class Critter{
  String name;
  int age;

  public Critter(){
    this.name = "";
    this.age = 1;
  } // end constructor

  public Critter(String name, int age){
    this.name = name;
    this.age = age;
  } // end constructor

  public String speak(){
    return ("Hi, my name is..." + this.name);
  } // end speak

  //redefine equals to handle comparing against a string
  
  @Override public boolean equals(Object o) {
    boolean isEqual = false;
    Critter other = (Critter) o;
    if (o instanceof Critter){
      if (this.name.equals(other.name)){
        isEqual = true;
      } // end if
    } // end if
    return isEqual;

  } // end equals
  
  // overWrite toString method for better output
  public String toString(){
    return(speak());
  } // end toString
} // end Critter 
