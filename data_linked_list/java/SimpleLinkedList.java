class SimpleLinkedList {
  Node head;

  public SimpleLinkedList(){
    head = null;

    // build a basic list by hand
    Node c = new Node("C", null);
    Node b = new Node("B", c);
    Node a = new Node("A", b);
    //specify the head is a
    head = a;
    traverse();
    System.out.println();

    // insert a node after b
    Node t = new Node("T", b.getNext());
    b.setNext(t);
    traverse();
    System.out.println();

    // delete node t
    b.setNext(t.getNext());
    //note we really never delete anything
    traverse();
  } // end constructor

  public void traverse(){
    // iterate through nodes
    Node currentNode = head;
    while(currentNode != null){
      System.out.println(currentNode.getPayload());
      currentNode = currentNode.getNext();
    } // end while
  } // end traverse

  public static void main(String[] args){
    new SimpleLinkedList();
  } // end main

} // end SimpleLinkedList

