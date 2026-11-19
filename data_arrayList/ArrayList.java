import java.util.*;

@SuppressWarnings({"unchecked", "deprecation"})
public class ArrayList<T> {

  // you can't directly create an array of generic elements
  // instead we'll build an array of objects and cast it to the 
  // generic type.  Java is aware this could be problematic, which is
  // why we suppressed the warnings it will give

  T[] list = (T[]) new Object[0];
  
  public static void main(String[] args){
    ArrayList al = new ArrayList<String>();
    al.append("a"); 
    al.append("b"); 
    al.append("c"); 
    al.show();
    al.insert(2, "t");
    al.show();
    al.delete(2);
    al.show();

    System.out.println();

    ArrayList alI = new ArrayList<Integer>();
    alI.append(new Integer(1));
    alI.append(new Integer(2));
    alI.append(new Integer(3));
    alI.show();
    alI.insert(2, new Integer(5));
    alI.show();
    alI.delete(2);
    alI.show();

  } // end main


  public void append(T newValue){
    T[] temp = (T[]) new Object[list.length + 1];

    for (int i = 0; i < list.length; i++){
      temp[i] = list[i];
    } // end for

    temp[temp.length -1] = newValue;

    list = temp;
  } // end append

  public int getLength(){
    return list.length;
  } // end getLength

  public void insert (int position, T value){
    T[] temp = (T[]) new Object[list.length + 1];
    System.arraycopy(list, 0, temp, 0, position );
    temp[position] = value;
    System.arraycopy(list, position, temp, position +1, list.length - position);

    list = temp;
  } // end insert

  public void delete(int position){
    T[] temp = (T[]) new Object[list.length - 1];
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

