//DbPractice.java
//an early try at jdbc
//I have an access ODBC connection called practice
//
import java.sql.*;
import java.io.*;
import sun.jdbc.odbc.*;

public class DbPractice {
  public static void main(String args[]){
    try{
      new JdbcOdbcDriver();
      ResultSet rs;

      //prepare the connection parameters
      String url = "jdbc:odbc:practice";
      String user = "root";
      String password = "";

      //make the connection
      Connection con = DriverManager.getConnection(url, user, password);
      System.out.println("Made the connection to the database");

      //generate a statement object
      Statement stmt = con.createStatement();

      //create the table
      //note that this is commented out after the first run
      //stmt.executeUpdate("CREATE TABLE people (LName varchar(15), FName varchar(10), city integer)");
      //stmt.executeUpdate("CREATE TABLE city (ID integer, Name VarChar(15))"); 
      
      //populate it with some data
      //again, I commented out after first run to avoid duplicate values
      //stmt.executeUpdate("INSERT INTO people VALUES('Harris', 'Andy', 0)");
      //stmt.executeUpdate("INSERT INTO people VALUES('Harris', 'Heather', 0)");
      //stmt.executeUpdate("INSERT INTO people VALUES('Moon', 'Judy', 1)");

      //stmt.executeUpdate("INSERT INTO city VALUES(0, 'Noblesville')");
      //stmt.executeUpdate("INSERT INTO city VALUES(1, 'Indianapolis')");
      
      
      //generate a query
      //Any SQL commands can go here...
      rs = stmt.executeQuery("SELECT * FROM people");
      while (rs.next()){
	System.out.println(rs.getString("LName") + "\t" +
			   rs.getString("FName") + "\t" +
			   rs.getInt("city"));
      } // end while
      System.out.println("----------------");
      System.out.println("Inner Join example");
      System.out.println();
      System.out.println();
      
      //let's try a more complex SQL statement:
      rs = stmt.executeQuery("SELECT people.FName, city.Name FROM people INNER JOIN city ON people.city = city.ID");
      while (rs.next()){
	System.out.println(rs.getString(1) + "\t" +
			   rs.getString(2));
      } // end while
      
    } catch (Exception e){
      e.printStackTrace();
    } // end try
  } // end main
} // end class def