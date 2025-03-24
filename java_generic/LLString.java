/** LLString.java
    doubly-linked list
*   works with a generic node type
*/

public class LLString{

  protected NodeGeneric<String> head;

  public static void main(String[] args){
    LLString l2 = new LLString();
    l2.append("A");
    l2.append("B");
    l2.append("C");

    l2.iterate();
    System.out.println();

    NodeGeneric<String> result = l2.search("B");
    System.out.println(result.getPayload());
    System.out.println();
    
    l2.insertAfter("B", "T");
    System.out.println();
    l2.iterate();  
    
    System.out.println();
    l2.delete("T");
    l2.iterate();

  } // end main

  public LLString(){
    head = null;
  } // end constructor

  public void append(String newValue){
    //adds new value to end of list
    NodeGeneric<String> newNode = new NodeGeneric<String>();
    newNode.setPayload(newValue);

    //move to end of list
    NodeGeneric<String> currentNode = head;
    // if we have an empty list, the new element is the head
    if (currentNode == null){
      head = newNode;
    } else {
      while (currentNode.getNext() != null){
        currentNode = currentNode.getNext();
      } // end while: by end, currentNode should be last
      currentNode.setNext(newNode);
      newNode.setPrevious(currentNode);
    } // end if
  } // end append

  public void iterate(){
    NodeGeneric<String> currentNode = head;
    while (currentNode != null){
      System.out.println(currentNode.getPayload());
      currentNode = currentNode.getNext();
    } // end while
  } // end iterate

  public NodeGeneric<String> search(String target){
    NodeGeneric<String> currentNode = head;
    NodeGeneric<String> result = null;

    while (currentNode != null){
      if (currentNode.getPayload().equals(target)){
        result = currentNode;
      } // end if
      currentNode = currentNode.getNext();
    } // end while
    return result;
  } // end search

  public void insertAfter(String target, String value){
    NodeGeneric<String> before = this.search(target);
    if (before == null){
      System.out.println("target not found");
    } else {
      NodeGeneric<String> after = before.getNext();
      NodeGeneric<String> newNode = new NodeGeneric<String>();
      newNode.setPayload(value);
      newNode.setPrevious(before);
      newNode.setNext(after);

      before.setNext(newNode);
      after.setPrevious(newNode);
    } // end if
  } // end insertAfter

  public void delete(String target){
    NodeGeneric<String> targetNode = this.search(target);
    if (targetNode == null){
      System.out.println("target not found");
    } else {
      NodeGeneric<String> before = targetNode.getPrevious();
      NodeGeneric<String> after = targetNode.getNext();
      before.setNext(after);
      after.setPrevious(before);
      // target node will be deleted by garbage collector (we hope)
    } // end if
  } // end delete
} // end class def
