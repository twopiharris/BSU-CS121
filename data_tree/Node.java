
public class Node {
    //node for a binary tree
	private String data;
	private Node left;
	private Node right;
	
	public Node(String data, Node left, Node right){
		this.data = data;
		this.left = left;
		this.right = right;
	} // end constructor
	
	public void setData(String data){
		this.data = data;
	}
	
	public String getData(){
		return this.data;
	}
	
	public void setLeft(Node left){
		this.left = left;
	}
	public Node getLeft(){
		return this.left;
	}
	
	public void setRight(Node right){
		this.right = right;
	}
	public Node getRight(){
		return this.right;
	}	
}
