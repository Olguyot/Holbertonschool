-- Desc

-- SELECT cities.id, cities.name FROM cities
-- WHERE state_id IN (SELECT id FROM states WHERE name = "California")
-- ORDER BY cities.id ASC;
SELECT cities.id, cities.name FROM states, cities
WHERE states.id = cities.state_id
AND states.name = 'California'
ORDER BY cities.id ASC;