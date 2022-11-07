#!/usr/bin/python3
""" Description module """
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy import Column, Integer, String, MetaData
from sqlalchemy import create_engine, Table
from sqlalchemy.orm import Session
from sqlalchemy.orm import sessionmaker
from model_state import Base, State
from sqlalchemy import text
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
    query = session.query(State).filter(State.name == sys.argv[4]).all()
    if not query:
        print("Not found")
    else:
        for e in query:
            print("{}".format(e.id))
