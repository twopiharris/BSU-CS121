/** LinkedList2.java
    doubly-linked list
    uses node2
*/

public class LinkedList2{

  protected Node2 head;

  public static void main(String[] args){
    LinkedList2 l2 = new LinkedList2();
    l2.append("A");
    l2.append("B");
    l2.append("C");

    l2.iterate();
    System.out.println();

    Node2 result = l2.search("B");
    System.out.println(result.getPayload());
    System.out.println();
    
    l2.insertAfter("B", "T");
    System.out.println();
    l2.iterate();  
    
    System.out.println();
    l2.delete("T");
    l2.iterate();

  } // end main

  public LinkedList2(){
    head = null;
  } // end constructor

  public void append(String newValue){
    //adds new value to end of list
    Node2 newNode = new Node2(newValue, null, null);

    //move to end of list
    Node2 currentNode = head;
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
    Node2 currentNode = head;
    while (currentNode != null){
      System.out.println(currentNode.getPayload());
      currentNode = currentNode.getNext();
    } // end while
  } // end iterate

  public Node2 search(String target){
    Node2 currentNode = head;
    Node2 result = null;

    while (currentNode != null){
      if (currentNode.getPayload().equals(target)){
        result = currentNode;
      } // end if
      currentNode = currentNode.getNext();
    } // end while
    return result;
  } // end search

  public void insertAfter(String target, String value){
    Node2 before = this.search(target);
    if (before == null){
      System.out.println("target not found");
    } else {
      Node2 after = before.getNext();
      Node2 newNode = new Node2(value, before, after);
      before.setNext(newNode);
      after.setPrevious(newNode);
    } // end if
  } // end insertAfter

  public void delete(String target){
    Node2 targetNode = this.search(target);
    if (targetNode == null){
      System.out.println("target not found");
    } else {
      Node2 before = targetNode.getPrevious();
      Node2 after = targetNode.getNext();
      before.setNext(after);
      after.setPrevious(before);
      // target node will be deleted by garbage collector (we hope)
    } // end if
  } // end delete
} // end class def
