# Write your MySQL query statement below
SELECT l.book_id, l.title, l.author, l.genre, l.publication_year, l.total_copies AS current_borrowers
FROM library_books l
JOIN (
    SELECT book_id, COUNT(*) AS borrowed_count
    FROM borrowing_records
    WHERE return_date IS NULL
    GROUP BY book_id
) AS b
ON l.book_id = b.book_id
WHERE b.borrowed_count = l.total_copies
ORDER BY b.borrowed_count DESC, l.title ASC;