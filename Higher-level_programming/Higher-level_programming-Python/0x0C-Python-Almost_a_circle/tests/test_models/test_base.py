import unittest
from models.base import Base
from models.square import Square

class TestRectangle(unittest.TestCase):

    def test_id_basis(self):
        b1 = Base()
        self.assertEqual(b1.id, 1)
        b2 = Base()
        self.assertEqual(b2.id, 2)
        b3 = Base()
        self.assertEqual(b3.id, 3)
        b4 = Base(12)
        self.assertEqual(b4.id, 12)
        b5 = Base()
        self.assertEqual(b5.id, 4)

    def test_id_type(self):
        b1 = Base()
        typeCheck = type(b1.id)
        self.assertEqual(typeCheck, int)
