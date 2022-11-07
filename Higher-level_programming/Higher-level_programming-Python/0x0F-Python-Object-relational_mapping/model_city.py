#!/usr/bin/python3
""" Description module """
from sqlalchemy import Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy import ForeignKey

Base = declarative_base()


class City(Base):
    """description"""
    __tablename__ = 'cities'
    id = Column(Integer,
                autoincrement="auto",
                nullable=False,
                primary_key=True,
                unique=True)
    name = Column(String(128), nullable=False)
    state_id = Column(Integer,
                      ForeignKey('states.id'),
                      nullable=False)
