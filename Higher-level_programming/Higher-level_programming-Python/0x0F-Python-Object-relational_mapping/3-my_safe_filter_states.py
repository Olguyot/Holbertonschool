#!/usr/bin/python3
"""description"""
import MySQLdb
import sys


if __name__ == '__main__':
    h_n = 'localhost'
    u_n = sys.argv[1]
    p_n = sys.argv[2]
    d_n = sys.argv[3]
    d_new = str(sys.argv[4])
    db = MySQLdb.connect(host=h_n, port=3306, user=u_n, passwd=p_n, db=d_n)
    cursor = db.cursor()
    query = "SELECT * FROM states WHERE name = %s"
    cursor.execute(query, (d_new,))
    data = cursor.fetchall()
    for row in data:
        print(row)
