import java.util.*;

public class Race {
  Horse[] horses = new Horse[5];
  int trackLength = 15;
  int numHorses = 5;

  public Race(){
    for (int i = 0; i < numHorses; i++){
      horses[i] = new Horse(i, trackLength);
    } // end for
  } // end constructor

  public void start(){
    Scanner input = new Scanner(System.in);
    boolean keepGoing = true;
    while (keepGoing){
      for (int hn = 0; hn < numHorses; hn++){
        horses[hn].advance();
        horses[hn].printLane();
        if (horses[hn].isWinner()){
          keepGoing = false;
        } // end if
      } // end for
      System.out.print("ENTER for next turn");
      String dummy = input.nextLine();
    } // end while
  } // end start

  public static void main(String[] args){
    Race r = new Race();
    r.start();
  } // end main
} // end class

