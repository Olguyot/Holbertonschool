#!/usr/bin/python3
""" Description module """
import MySQLdb
import sys


if __name__ == "__main__":
    h_n = 'localhost'
    u_n = sys.argv[1]
    p_n = sys.argv[2]
    d_n = sys.argv[3]
    d_new = str(sys.argv[4])
    db = MySQLdb.connect(host=h_n, port=3306, user=u_n, passwd=p_n, db=d_n)
    cursor = db.cursor()
    cursor.execute("SELECT * FROM states WHERE BINARY \
    states.name='{}'".format(d_new))
    data = cursor.fetchall()
    for row in data:
        print(row)
