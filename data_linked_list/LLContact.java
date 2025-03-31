import java.util.*;

public class LLContact{
  Contact head;
  Scanner input;

  public static void main(String[] args){
    LLContact ll = new LLContact();
  } // end main

  public LLContact(){
    head = null;
    input = new Scanner(System.in);
    menu();
  } // end constructor

  public void menu(){
    Boolean keepGoing = true;
    while (keepGoing){
      
      System.out.println();
      System.out.println("0. Quit");
      System.out.println("1. View Contacts");
      System.out.println("2. Add Contact");
      System.out.println("3. Edit Contact");
      System.out.println("4. Delete Contact");
      System.out.print("Your choice? ");
      String choice = input.nextLine();

      if (choice.equals("0")){
        keepGoing = false;
      } else if (choice.equals("1")){
        traverse();
      } else if (choice.equals("2")){
        append();
      } else {
        System.out.println("Please enter 0-4");
      } // end if
    } // end loop
  } // end menu

  public void append(){
    //create a new contact and add it to the end 
    System.out.print("Name: ");
    String name = input.nextLine();
    System.out.print("Phone: ");
    String phone = input.nextLine();
    System.out.print("Email: ");
    String email = input.nextLine();

    Contact newContact = new Contact(name, phone, email, null);

    // append this value to the end of the list
    Contact currentContact = null;
    // if list is empty, just make the node the new head
    if (head == null){
      head = newContact; 
    } else {
      //if there are already nodes, go to the end
      currentContact = head;
      while (currentContact.getNext() != null){
       currentContact = currentContact.getNext();
      } // end while
      // now the current node is the last node
      // add a new node
      currentContact.setNext(newContact);
    } // end if
  } // end append

  public void traverse(){
    Contact currentContact = head;
    while (currentContact != null){
      System.out.println(currentContact.getPayload());
      currentContact = currentContact.getNext();
    } // end while
  } // end traverse

  public Contact search(String value){
    // return a node containing a string or 
    // null if the string is not found
    Contact result = null;
    Contact currentContact = head;
    while (currentContact.getNext() != null){
      if (currentContact.getPayload().equals(value)){
        result = currentContact;
      } // end if
      currentContact = currentContact.getNext();
    } // end while
    return result;
  } // end search

  public void insertAfter(String prevString, String value){
    Contact before = search(prevString);
    if(before == null){
      System.out.println(prevString + " not found...");
    } else {
      Contact after = before.getNext();
      Contact newContact = new Contact(value, after);
      before.setNext(newContact);
    } // end if
  } // end insertAfter

  public void deleteContact(String value){
    // check to see that node is there
    if (search(value) == null){
      System.out.println("That node is not here");
    } else {
      // special search preserves previous element
      Contact currentContact = head;
      Contact prevContact = head;
      String currentVal;
      while (currentContact != null){
        currentVal = currentContact.getPayload();
        if (currentVal.equals(value)){
          // delete this element
          Contact nextContact = currentContact.getNext();
          prevContact.setNext(nextContact);
          // note we don't actually delete anything!
        } // end if

        //move on to next node
        prevContact = currentContact;
        currentContact = currentContact.getNext();
      } // end while
    } // end if
  } // end delete
} // end LinkedList
