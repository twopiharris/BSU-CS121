/*
 * BasicDB.java
 *
 * Created on April 11, 2007, 1:02 PM
 *
 * Demo basic mySQL access through netbeans
 */

/**
 *
 * @author aharris
 */

import java.sql.*;
//import java.io.*;


public class BasicDB {
    
    public static void main(String args[]){
        new BasicDB();
    }
    
    /** Creates a new instance of BasicDB */
    public BasicDB() {
        //System.out.println("Hi there...");
        Connection con = null;
        try {
          Class.forName("com.mysql.jdbc.Driver");
          con = DriverManager.getConnection(
                "jdbc:mysql://localhost/spy", "user","pwd");
          Statement stmt = con.createStatement();
          ResultSet rs = stmt.executeQuery(
                  "SELECT * FROM BADSPY");
          while (rs.next()){
              System.out.print("Name: \t\t");
              System.out.println(rs.getString("name"));
              System.out.print("Specialty: \t");
              System.out.println(rs.getString("specialty"));
              System.out.print("Operation: \t");
              System.out.println(rs.getString("assignment"));
              System.out.println();
          } // end while
      } catch (Exception e){
          System.out.println(e.getMessage());
      } //end try
        
    } // end constructor
    
} // end class def
