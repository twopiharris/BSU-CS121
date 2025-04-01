/** Contact.java
 *  represents a contact as a linked list node
 *  Name, phone, email, and next
 */

public class Contact{
  protected String name;
  protected String phone;
  protected String email;
  protected Contact next;

  public Contact(){
    // null parameter constructor
    this.name = "";
    this.phone = "";
    this.email = "";
    this.next = null;
  } // end constructor

  public Contact(String name, String phone, String email, Contact next){
    this.name = name;
    this.phone = phone;
    this.email = email;
    this.next = next;
  } // end constructor

  public Contact(String name, Contact next){
    this.name = name;
    this.phone = "";
    this.email = "";
    this.next = next;
  } // end constructor

  public void setName(String name){
    this.name = name;
  } // end setName

  public void setPhone(String phone){
    this.phone = phone;
  } // end setPhone

  public void setEmail(String email){
    this.email = email;
  } // end setEmail;

  public void setNext(Contact next){
    this.next = next;
  } // end setNext

  public String getName(){
    return this.name;
  } // end getName

  public String getPhone(){
    return this.phone;
  } // end getPhone

  public String getEmail(){
    return this.email;
  } // end getEmail

  public Contact getNext(){
    return this.next;
  } // end getNext

  boolean goesBefore(Contact other){
    // compares the name of this contact with
    // some other contact (using name for now)
    // Returns true if this contacts' name comes 
    // aphabetically before other name
    boolean result = false;
    
    String myName = this.getName();
    String otherName = other.getName();
    if (myName.compareTo(otherName) < 0){
      result = true;
    } // end if
    return result;
  } // end goesBefore

  public String getPayload(){
    // return a string representing contents.
    // modify for more interesting reports
    String output = this.name + ", ";
    output += this.phone + ", ";
    output += this.email;
    return output; 
  } // end getPayload

} // end Contact class


