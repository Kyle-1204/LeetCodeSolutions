# Write your MySQL query statement below
SELECT class
From courses
GROUP BY class
HAVING COUNT(class) >= 5;