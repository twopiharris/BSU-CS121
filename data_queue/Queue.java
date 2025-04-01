/**  Queue.java
     double-ended queue
     uses Node.java 
*/

public class Queue {
  
  Node head = null;
  Node tail = null;

  public static void main(String[] args){
    Queue q = new Queue();
    q.append("A");
    q.append("B");
    q.append("C");

    q.iterate();
    System.out.println();
    Node temp = q.pop();
    System.out.println(temp.getPayload());
    System.out.println();

    q.append("D");
    q.iterate();
  } // end main

  public Queue(){
    head = null;
    tail = null;
  } // end constructor

  public void append(String value){
    // add new node to end of stack

    // if queue is empty, this is the head and the tail
    Node newNode = new Node(value, null);
    if (head == null){
      head = newNode;
      tail = newNode;
    } else {
      tail.setNext(newNode);
      tail = newNode;
    } // end if
  } // end append

  public Node pop(){
    // pop the head of the stack
    Node returnNode = null;
    // return null if empty stack
    if (head != null){
      returnNode = head;
      head = returnNode.getNext();
    } // end if

    return returnNode;
  } // end pop
 
  public void iterate(){
    Node currentNode = head;
    while (currentNode != null){      
      System.out.println(currentNode.getPayload());
      currentNode = currentNode.getNext();
    } // end while
  } // end iterate

} // end class 
