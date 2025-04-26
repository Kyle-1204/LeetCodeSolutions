# Write your MySQL query statement below
SELECT FirstName, LastName, City, State # Select the required columns from both tables
from Person left join Address # Merge the Person table with the Address table on personID
on Person.PersonId = Address.PersonId # Return everyone from the person table - if no matching address, city/state will be NULL