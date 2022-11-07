#!/usr/bin/python3
""" Description module """
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy import Column, Integer, String, MetaData
from sqlalchemy import create_engine, Table
from sqlalchemy.orm import Session
from sqlalchemy.orm import sessionmaker
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
    Session = sessionmaker(bind=engine)
    session = Session()
    # session = Session(engine)
    states = session.query(State).order_by(State.id.asc()).all()
    for row in states:
        print("{}: {}".format(row.id, row.name))
