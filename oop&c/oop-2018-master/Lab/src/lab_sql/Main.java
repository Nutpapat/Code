package lab_sql;

import java.sql.*;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
//        insertBook(new Book("001", "Java", "James", 56.99));
//        insertBook(new Book("002", "PHP", "Jack", 31.99));
//        insertBook(new Book("003", "Swift", "Phil", 43.99));
//        insertBook(new Book("004", "Kotlin", "Doug", 12.99));

        System.out.println(getBookDetails("001"));
        System.out.println(getAllBooks());
    }

    public static Connection getConnection() {
        Connection conn = null;
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            String url = "jdbc:mysql://localhost:3306/test";
            String user = "root";
            String pwd = "";
            conn = DriverManager.getConnection(url, user, pwd);
        } catch (ClassNotFoundException | SQLException ex) {
            ex.printStackTrace();
        }
        return conn;
    }

    public static void insertBook(Book book) {
        String sqlCmd = "insert into books values(?,?,?,?)";
        try {
            PreparedStatement pstmt = getConnection().prepareStatement(sqlCmd);
            pstmt.setString(1, book.getIsbn());
            pstmt.setString(2, book.getTitle());
            pstmt.setString(3, book.getAuthor());
            pstmt.setDouble(4, book.getPrice());
            pstmt.executeUpdate();
        } catch (SQLException ex) {
            ex.printStackTrace();
        }
    }

    public static ArrayList<Book> getAllBooks() {
        ArrayList<Book> results = new ArrayList<Book>();
        try {
            PreparedStatement pstmt = getConnection().prepareStatement("SELECT * FROM books");
            ResultSet rs = pstmt.executeQuery("SELECT * FROM books");

            while (rs.next()) {
                results.add(new Book(rs.getString("isbn"),
                        rs.getString("title"),
                        rs.getString("author"),
                        rs.getDouble("price")));
            }
        } catch (SQLException e) {
            System.out.println(e);
        }
        return results;
    }

    public static Book getBookDetails(String isbn) {
        try {
            Statement stmt = getConnection().createStatement();
            String sqlCmd = "select * from books where isbn = " + isbn;
            ResultSet rs = stmt.executeQuery(sqlCmd);
            rs.next();
            return new Book(rs.getString("isbn"),
                    rs.getString("title"),
                    rs.getString("author"),
                    rs.getDouble("price"));
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return null;
    }
}
