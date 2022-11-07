import unittest
from models.base import Base
from models.square import Square
from models.square import Rectangle

class TestRectangle(unittest.TestCase):
    """ Unit test Base class """
    def setUp(self):
        # print(Rectangle.__base__.__dict__)
        Square._Rectangle_Base__nb_objects = 0

    # TYPE
    def test_size_type(self):
        with self.assertRaises(TypeError) as cm:
            Square("toto", 10, 10)
        self.assertEqual(str(cm.exception), "width must be an integer")
    def test_x_type(self):
        with self.assertRaises(TypeError) as cm:
            Square(10, "toto", 10)
        self.assertEqual(str(cm.exception), "x must be an integer")
    def test_y_type(self):
        with self.assertRaises(TypeError) as cm:
            Square(10, 10, "toto")
        self.assertEqual(str(cm.exception), "y must be an integer")
    # def __init__(self, size, x=0, y=0, id=None)::
    # attr = ["width", "height", "x", "y"]
    def setUp(self):
        # print(Rectangle.__base__.__dict__)
        Square._Base__nb_objects = 0

    def test_size_negatif(self):
        with self.assertRaises(ValueError) as cm:
            Square(-1, 10, 10)
        self.assertEqual(str(cm.exception), "width must be > 0")

    def test_x_negatif(self):
        with self.assertRaises(ValueError) as cm:
            Square(10, -2, 10)
        self.assertEqual(str(cm.exception), "x must be >= 0")

    def test_y_negatif(self):
        with self.assertRaises(ValueError) as cm:
            Square(10, 10, -2)
        self.assertEqual(str(cm.exception), "y must be >= 0")

    # ZERO
    def test_size_zero(self):
        with self.assertRaises(ValueError) as cm:
            Square(0, 10, 10)
        self.assertEqual(str(cm.exception), "width must be > 0")

    # Base value
    def test_BaseSquare(self):
        s1 = Square(5)
        self.assertEqual(str(s1), "[Square] (16) 0/0 - 5")
        self.assertEqual(s1.size, 5)
        s1.size = 10
        self.assertEqual(str(s1), "[Square] (16) 0/0 - 10")

    def test_size_negatif(self):
        with self.assertRaises(ValueError) as cm:
            Square(-1, 10, 10)
        self.assertEqual(str(cm.exception), "width must be > 0")
