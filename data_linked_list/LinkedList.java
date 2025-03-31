public class LinkedList{
  Node head;

  public static void main(String[] args){
    LinkedList ll = new LinkedList();
    ll.append("A");
    ll.append("B");
    ll.append("C");

    ll.traverse();
    
    Node b = ll.search("B");
    System.out.println(b + ": " + b.getPayload());

    ll.insertAfter("B", "T");
    ll.traverse();

    ll.insertAfter("J", "K");

    ll.deleteNode("T");

    ll.traverse();
  } // end main

  public LinkedList(){
    head = null;
  } // end constructor

  public void append(String value){
    // append this value to the end of the list
    Node currentNode = null;
    // if list is empty, just make the node the new head
    if (head == null){
      head = new Node(value, null);
    } else {
      //if there are already nodes, go to the end
      currentNode = head;
      while (currentNode.getNext() != null){
       currentNode = currentNode.getNext();
      } // end while
      // now the current node is the last node
      // add a new node
      currentNode.setNext(new Node(value, null));
    } // end if
  } // end append

  public void traverse(){
    Node currentNode = head;
    while (currentNode != null){
      System.out.println(currentNode.getPayload());
      currentNode = currentNode.getNext();
    } // end while
  } // end traverse

  public Node search(String value){
    // return a node containing a string or 
    // null if the string is not found
    Node result = null;
    Node currentNode = head;
    while (currentNode.getNext() != null){
      if (currentNode.getPayload().equals(value)){
        result = currentNode;
      } // end if
      currentNode = currentNode.getNext();
    } // end while
    return result;
  } // end search

  public void insertAfter(String prevString, String value){
    Node before = search(prevString);
    if(before == null){
      System.out.println(prevString + " not found...");
    } else {
      Node after = before.getNext();
      Node newNode = new Node(value, after);
      before.setNext(newNode);
    } // end if
  } // end insertAfter

  public void deleteNode(String value){
    // check to see that node is there
    if (search(value) == null){
      System.out.println("That node is not here");
    } else {
      // special search preserves previous element
      Node currentNode = head;
      Node prevNode = head;
      String currentVal;
      while (currentNode != null){
        currentVal = currentNode.getPayload();
        if (currentVal.equals(value)){
          // delete this element
          Node nextNode = currentNode.getNext();
          prevNode.setNext(nextNode);
          // note we don't actually delete anything!
        } // end if

        //move on to next node
        prevNode = currentNode;
        currentNode = currentNode.getNext();
      } // end while
    } // end if
  } // end delete
} // end LinkedList
