``` SQL
SELECT    User_id 
        , name = CONCAT(  UPPER(SUBSTRING(name , 1 , 1)) 
                        , LOWER(SUBSTRING(name, 2 , LEN(name))) 
                       )
FROM Users
;
```
