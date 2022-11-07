#!/usr/bin/python3
""" Description module """
import MySQLdb
import sys

if __name__ == "__main__":
    h_n = 'localhost'
    u_n = sys.argv[1]
    p_n = sys.argv[2]
    d_n = sys.argv[3]
    db = MySQLdb.connect(host=h_n, port=3306, user=u_n, passwd=p_n, db=d_n)
    cursor = db.cursor()
    mysql_cmd = "SELECT cities.id, cities.name, states.name\
                 FROM cities\
                 INNER JOIN states ON\
                 cities.state_id = states.id;"
    cursor.execute(mysql_cmd)
    data = cursor.fetchall()
    for row in data:
        print(row)
