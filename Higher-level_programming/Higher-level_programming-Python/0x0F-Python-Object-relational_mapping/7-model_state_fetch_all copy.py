#!/usr/bin/python3
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy import Column, Integer, String, MetaData
""" Description module """
from sqlalchemy import create_engine, Table
from sqlalchemy.orm import Session
from model_state import Base, State
import sys

if __name__ == "__main__":
    connInfo = 'mysql+mysqldb://{}:{}@localhost/{}'
    engine = create_engine(
                            connInfo.format(sys.argv[1],
                                            sys.argv[2],
                                            sys.argv[3]),
                            pool_pre_ping=True)
    Base = declarative_base()
    session = Session(engine)
    # states = session.query(State).order_by(State.id.asc()).all()
    states = session.query(State)
    for row in states:
        print(str(row.id) + ": " + row.name)
