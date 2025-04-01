class Node {
  String payload;
  Node next;

  public Node(){
    payload = "";
    next = null;
  } // end constructor

  public Node(String payload, Node next){
    this.payload = payload;
    this.next = next;
  } // end constructor

  public String getPayload(){
    return this.payload;
  } // end getPayload

  public void setPayload(String payload){
    this.payload = payload;
  } // end setPayload

  public Node getNext(){
    return this.next;
  } // end getNext

  public void setNext(Node next){
    this.next = next;
  } // end setNext

} // end Node class


