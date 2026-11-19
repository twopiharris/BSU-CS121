/*

binary search tree
      4
   /     \
  2       6
 / \     / \
1   3   5   7

index trick
      1
   /     \
  2       3
 / \     / \
4   5   6   7

*/

public class ArrayBtree{

  public static void main(String[] args){
    
    String[] bTree =  {"", "4", "2", "6", "1", "3", "5", "7"};
    String[] indices ={"", "1", "2", "3", "4", "5", "6", "7"};
    String[] maxHeap = {"", "8", "7", "6", "5", "4", "3", "2"};


    System.out.println("Indices");
    printTree(indices);
   
    System.out.println("2s left: " + getLeftChildIndex(2));
    System.out.println("2s right: " + getRightChildIndex(2));
    System.out.println("2s parent: " + getParentIndex(2));

    System.out.println();
    System.out.println("Binary search");
    printTree(bTree);

    System.out.println("VALUE of node 2: " + getNodeValue(bTree, 2));
    System.out.println("VALUE of its left child: " + getLeftChild(bTree, 2));
    System.out.println("VALUE of its right child: " + getRightChild(bTree, 2));

    System.out.println();
    System.out.println("Max Heap");
    printTree(maxHeap);

  } // end main

  public ArrayBtree(){
    
  } // end constructor

  public static void printTree(String[] bTree){
    System.out.println("      " + bTree[1]);
    System.out.println("   /    \\");
    System.out.println("  " + bTree[2] + "      " + bTree[3]);
    System.out.println(" / \\    / \\");
    System.out.println(bTree[4]+ "   " + bTree[5] + "  " + bTree[6] + "   " + bTree[7]);
    System.out.println();
  } // end printTree

  public static int getLeftChildIndex(int index){
    return index * 2;
  } // end getLeftChildIndex

  public static int getRightChildIndex(int index){
    return (index * 2) + 1;
  } // end getRightChildIndex

  public static int getParentIndex(int index){
    return (int) (index/2);
  } // end getParentIndex


  public static String getNodeValue(String[] tree, int index){
    return tree[index];
  } // end getNodeValue

  public static String getLeftChild(String[] tree, int index){
    return tree[getLeftChildIndex(index)];
  } // end getLeftChild

  public static String getRightChild(String[] tree, int index){
    return tree[getRightChildIndex(index)];
  } // end getLeftChild

  public static String getParent(String[] tree, int index){
    return tree[getParentIndex(index)];
  } // end getLeftChild

} // end class def




