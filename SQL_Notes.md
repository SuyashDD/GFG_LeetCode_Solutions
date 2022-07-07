``` SQL
SELECT    User_id 
        , name = CONCAT(  UPPER(SUBSTRING(name , 1 , 1)) 
                        , LOWER(SUBSTRING(name, 2 , LEN(name))) 
                       )
FROM Users
;
```

#### 1. name  = concat(input 1 , input 2) -> performs concatenation of two inputs and returns the result

#### 2. Lower() / Upper() -> changes the case as per command

#### 3. Substring (name , 1 , 1) ->  1st par : input string ; 2nd par : start index ; 3rd par : end index (in SQL index start from 1) 
