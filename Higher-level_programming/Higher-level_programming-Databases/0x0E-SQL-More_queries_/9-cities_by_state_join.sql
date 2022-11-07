-- Desc
-- Desc
SELECT cities.id, cities.name, states.name
FROM cities
JOIN states
WHERE states.id = cities.state_id
ORDER BY cities.id ASC;