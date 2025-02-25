/*
 * BasicDB.java
 *
 * Created on April 11, 2007, 1:02 PM
 *
 * Demo basic sqlite access
 * 
 * Expects SQLite driver in classpath
 * 
 */

/**
 *
 * @author aharris
 */

import java.sql.*;
//import java.io.*;
//expects sqlite driver in class path

public class BasicDBSqlite {
    
    public static void main(String args[]){
        new BasicDBSqlite();
    }
    
    /** Creates a new instance of BasicDB */
    public BasicDBSqlite() {
        //System.out.println("Hi there...");
        Connection con = null;
        try {
          Class.forName("org.sqlite.JDBC");
          con = DriverManager.getConnection(
                "jdbc:sqlite:contacts.db");
          Statement stmt = con.createStatement();
          int result;
          String sql;
          
          result = stmt.executeUpdate("DROP TABLE IF EXISTS contacts");
          sql = "CREATE TABLE contacts(id INTEGER PRIMARY KEY, name VARCHAR(20), company VARCHAR(20), email VARCHAR(20))";
          result = stmt.executeUpdate(sql);
          result = stmt.executeUpdate("INSERT INTO contacts VALUES(null, 'andy', 'IUPUI', 'andy@aharrisbooks.net')");
          
          ResultSet rs = stmt.executeQuery(
                  "SELECT * FROM contacts");
          while (rs.next()){
              System.out.print("Name: \t\t");
              System.out.println(rs.getString("name"));
              System.out.print("Company: \t");
              System.out.println(rs.getString("company"));
              System.out.print("Email: \t");
              System.out.println(rs.getString("email"));
              System.out.println();
          } // end while
                
      } catch (Exception e){
          System.out.println(e.getMessage());
      } //end try
        
    } // end constructor
    
} // end class def
