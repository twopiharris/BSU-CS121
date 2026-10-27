import java.util.*;

public class Horse{
  int position;
  int id;
  int trackLength;

  public Horse(int id, int trackLength){
    this.id = id;
    this.trackLength = trackLength;
    this.position = 0;
  } // end constructor

  public void advance(){
    int coin = (int)(Math.random() * 2);
    this.position += coin;
  } // end advance

  public void printLane(){
    for (int i = 0; i < this.trackLength; i++){
      if (i == this.position){
        System.out.print(this.id);
      } else {
        System.out.print(".");
      } // end if
    } // end for
    System.out.println();
  } // end printLane

  public boolean isWinner(){
    boolean isWinner = false;
    if (this.position >= this.trackLength){
      isWinner = true;
      System.out.println("Horse " + this.id + " wins!");
    } // end if
    return isWinner;
  } // end isWinner

  public static void main(String[] args){
    Horse h = new Horse(0, 15);
    boolean keepGoing = true;
    while (keepGoing){
      h.advance();
      h.printLane();
      if (h.isWinner()){
        keepGoing = false;
      } // end if
    } // end while
  } // end main

} // end class def
