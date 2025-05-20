# Write your MySQL query statement below
SELECT name AS Customers
FROM customers
LEFT JOIN orders
ON customerId = customers.id
WHERE customerId IS NULL;