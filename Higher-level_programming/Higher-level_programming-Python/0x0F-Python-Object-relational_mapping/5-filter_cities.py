#!/usr/bin/python3
""" Description module """
import MySQLdb
import sys

if __name__ == "__main__":
    if len(sys.argv) >= 5:
        h_n = 'localhost'
        u_n = sys.argv[1]
        p_n = sys.argv[2]
        d_n = sys.argv[3]
        db = MySQLdb.connect(host=h_n, port=3303, user=u_n, passwd=p_n, db=d_n)
        state_name = str(sys.argv[4])
        cursor = db.cursor()
        mysql_cmd = "SELECT cities.id, cities.name, states.name\
                    FROM cities\
                    INNER JOIN states ON\
                    cities.state_id = states.id\
                    WHERE BINARY states.name='{}';".format(state_name)
        cursor.execute(mysql_cmd)
        data = cursor.fetchall()
        i = 0
        for i in range(0, len(data)):
            if i == len(data) - 1:
                print(data[i][1])
            else:
                print(data[i][1], end=', ')
        if len(data) == 0:
            print('')
