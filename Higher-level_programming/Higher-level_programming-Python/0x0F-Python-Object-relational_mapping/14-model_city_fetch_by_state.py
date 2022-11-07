#!/usr/bin/python3
""" Description module """
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy import Column, Integer, String, MetaData
from sqlalchemy import create_engine, Table
from sqlalchemy.orm import Session
from model_state import Base, State
from model_city import City
from sqlalchemy import text
from sqlalchemy import update
import sys


if __name__ == "__main__":
    connInfo = 'mysql+mysqldb://{}:{}@localhost/{}'
    engine = create_engine(
                            connInfo.format(sys.argv[1],
                                            sys.argv[2],
                                            sys.argv[3]),
                            pool_pre_ping=True)
    session = Session(engine)
    Base = declarative_base()
    query = session.query(City).all()
    for item in query:
        state = session.query(State).\
         filter(State.id == item.state_id).first().name
        print("{}: ({}) {}".format(state, item.id, item.name))
    session.close()
