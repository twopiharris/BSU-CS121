import java.util.*;

public class ArrayListString {
  String[] list = {};
  

  public static void main(String[] args){
    ArrayListString al = new ArrayListString();
    al.append("a"); 
    al.append("b"); 
    al.append("c"); 
    al.show();
    al.insert(2, "t");
    al.show();
    al.delete(2);
    al.show();
  } // end main


  public ArrayListString(){
  } // end constructor

  public void append(String newValue){
    String[] temp = new String[list.length + 1];

    for (int i = 0; i < list.length; i++){
      temp[i] = list[i];
    } // end for

    temp[temp.length -1] = newValue;

    list = temp;
  } // end append

  public int getLength(){
    return list.length;
  } // end getLength

  public void insert (int position, String value){
    String[] temp = new String[list.length + 1];
    System.arraycopy(list, 0, temp, 0, position );
    temp[position] = value;
    System.arraycopy(list, position, temp, position +1, list.length - position);

    list = temp;
  } // end insert

  public void delete(int position){
    String[] temp = new String[list.length - 1];
    System.arraycopy(list, 0, temp, 0, position);
    System.arraycopy(list, position + 1, temp, position, temp.length - position);

    list = temp;
  } // end delete

  public void show(){
    for (int i = 0; i < list.length; i++){
      System.out.print(i + ": " + list[i] + ",  ");
    } // end for
    System.out.println();
  } // end show

} // end class def



