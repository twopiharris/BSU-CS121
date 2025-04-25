# Using SQL in Java



## ER for schedule

```
mermaid
erDiagram
    
    cell {
      name varchar(2) pk
      start_time varchar(10)
      end_time varchar(10)
      day varchar(10)
    }

    session {
      id integer pk
      credits integer
      start_time varchar(10)
      days varchar(10)
      cell varchar(2) fk
    }

    session }|--|| cell: implies
```
