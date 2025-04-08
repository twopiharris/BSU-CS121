/** BinNode.java
 *  Node for a binary tree
 */

public class BinNode{
  protected String payload;
  protected BinNode left;
  protected BinNode right;

  public BinNode(){
    // set nulls
    payload = "";
    left = null;
    right = null;
  } // end constructor

  public BinNode(String payload, BinNode left, BinNode right){
    this.payload = payload;
    this.left = left;
    this.right = right;
  } // end constructor

  // payload access
  public void setPayload(String payload){
    this.payload = payload;
  }

  public String getPayload(){
    return this.payload;
  } 

  //left access
  public void setLeft(BinNode left){
    this.left = left;
  }

  public BinNode getLeft(){
    return this.left;
  } // end getLeft

  // right access
  public void setRight(BinNode right){
    this.right = right;
  } 

  public BinNode getRight(){
    return this.right;
  } 

} // end class def
