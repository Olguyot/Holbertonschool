-- Desc
-- Desc
SELECT tv_shows.title AS "title", SUM(tv_show_ratings.rate) AS "rating" 
FROM tv_show_ratings 
JOIN tv_shows 
ON tv_shows.id = tv_show_ratings.show_id 
GROUP BY title 
ORDER BY rating DESC;