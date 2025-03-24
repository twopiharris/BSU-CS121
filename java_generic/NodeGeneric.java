/** NodeGeneric.java
    Generic node for a double-linked list
    Note the payload can be any type, but that
    type must be specified when the class is instantiated
*/

public class NodeGeneric <NodeType> {
  protected NodeType payload;
  protected NodeGeneric <NodeType> previous;
  protected NodeGeneric <NodeType> next;

  public NodeGeneric(){
    this.payload = null;
    this.previous = null;
    this.next = null;
  } // end constructor

  // payload accessors
  public NodeType getPayload(){
    return this.payload;
  } // end getPayload

  public void setPayload(NodeType payload){
    this.payload = payload;
  } // end setPayload

  // previous accessors
  public NodeGeneric <NodeType> getPrevious(){
    return this.previous;
  } // end getPrevious

  public void setPrevious(NodeGeneric <NodeType> previous){
    this.previous = previous;
  } // end setPrevious

  // next accessors
  public NodeGeneric <NodeType> getNext(){
    return this.next;
  } // end getNext

  public void setNext(NodeGeneric <NodeType> next){
    this.next = next;
  } // end setNext

} // end class def

