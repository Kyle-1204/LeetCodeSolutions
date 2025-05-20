# Write your MySQL query statement below
SELECT e.name as Employee
FROM employee AS e
JOIN employee AS m
    ON e.managerID = m.ID
WHERE e.salary > m.salary;