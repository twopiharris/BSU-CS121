/** Node2.java
    node for a double-linked list
*/

public class Node2 {
  protected String payload;
  protected Node2 previous;
  protected Node2 next;

  public Node2(){
    this.payload = "";
    this.previous = null;
    this.next = null;
  } // end constructor

  public Node2(String payload, Node2 previous, Node2 next){
    this.payload = payload;
    this.previous = previous;
    this.next = next;
  } // end constructor

  // payload accessors
  public String getPayload(){
    return this.payload;
  } // end getPayload

  public void setPayload(String payload){
    this.payload = payload;
  } // end setPayload

  // previous accessors
  public Node2 getPrevious(){
    return this.previous;
  } // end getPrevious

  public void setPrevious(Node2 previous){
    this.previous = previous;
  } // end setPrevious

  // next accessors
  public Node2 getNext(){
    return this.next;
  } // end getNext

  public void setNext(Node2 next){
    this.next = next;
  } // end setNext

} // end class def

