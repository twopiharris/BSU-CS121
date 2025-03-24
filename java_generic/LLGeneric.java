/** LLGeneric.java:w
    doubly-linked list
*   works with a generic node type
*/

public class LLGeneric <NodeType>{

  protected NodeGeneric<NodeType> head;

  public static void main(String[] args){
    //LLGeneric <NodeType> ll = new LLGeneric <NodeType>();
    LLGeneric <String> ll = new LLGeneric <String>();
    ll.append("A");
    ll.append("B");
    ll.append("C");
    ll.insertAfter("B", "T");
    ll.iterate();

    LLGeneric <Integer> li = new LLGeneric <Integer>();
    li.append(new Integer(1));
    li.append(new Integer(2));
    li.append(new Integer(3));
    li.iterate();

  } // end main

  public LLGeneric(){
    head = null;
  } // end constructor

  public void append(NodeType newValue){
    //adds new value to end of list
    NodeGeneric<NodeType> newNode = new NodeGeneric<NodeType>();
    newNode.setPayload(newValue);

    //move to end of list
    NodeGeneric<NodeType> currentNode = head;
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
    NodeGeneric<NodeType> currentNode = head;
    while (currentNode != null){
      System.out.println(currentNode.getPayload());
      currentNode = currentNode.getNext();
    } // end while
  } // end iterate

  public NodeGeneric<NodeType> search(NodeType target){
    // given a target, returns a node containing that target.
    // For custom data types, the .equals method may need to be
    // overwritten to give appropriate results
    NodeGeneric<NodeType> currentNode = head;
    NodeGeneric<NodeType> result = null;

    while (currentNode != null){
      // may need to overload equals operator
      NodeType thisNode = currentNode.getPayload();
      if (thisNode.equals(target)){
        result = currentNode;
      } // end if
      currentNode = currentNode.getNext();
    } // end while
    return result;
  } // end search

  public void insertAfter(NodeType target, NodeType value){
    NodeGeneric<NodeType> before = this.search(target);
    if (before == null){
      System.out.println("target not found");
    } else {
      NodeGeneric <NodeType> after = before.getNext();
      NodeGeneric <NodeType> newNode = new NodeGeneric<NodeType>();
      newNode.setPayload(value);
      newNode.setPrevious(before);
      newNode.setNext(after);

      before.setNext(newNode);
      after.setPrevious(newNode);
    } // end if
  } // end insertAfter

  public void delete(NodeType target){
    NodeGeneric <NodeType> targetNode = this.search(target);
    if (targetNode == null){
      System.out.println("target not found");
    } else {
      NodeGeneric <NodeType> before = targetNode.getPrevious();
      NodeGeneric <NodeType> after = targetNode.getNext();
      before.setNext(after);
      after.setPrevious(before);
      // target node will be deleted by garbage collector (we hope)
    } // end if
  } // end delete
} // end class def
