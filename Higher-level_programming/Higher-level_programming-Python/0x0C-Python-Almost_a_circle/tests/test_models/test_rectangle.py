#!/usr/bin/python3
""" Project: Python Almost a Circle """
from models.base import Base
from models.rectangle import Rectangle
import unittest


class TestRectangle(unittest.TestCase):
    """ Unit test Base class """
    # width, height, x=0, y=0, id=None
    # attr = ["width", "height", "x", "y"]
    def setUp(self):
        # print(Rectangle.__base__.__dict__)
        Rectangle._Base__nb_objects = 0

    # NEGATIF MSG1
    # print(cm.__dict__)
    # print(cm.exception)
    def test_width_negatif(self):
        with self.assertRaises(ValueError) as cm:
            Rectangle(-1, 10, 10, 10)

        self.assertEqual(str(cm.exception), "width must be > 0")

    def test_height_negatif(self):
        with self.assertRaises(ValueError) as cm:
            Rectangle(10, -2, 10, 10)
        self.assertEqual(str(cm.exception), "height must be > 0")

    def test_x_negatif(self):
        with self.assertRaises(ValueError) as cm:
            Rectangle(10, 10, -2, 10)
        self.assertEqual(str(cm.exception), "x must be >= 0")

    def test_y_negatif(self):
        with self.assertRaises(ValueError) as cm:
            Rectangle(10, 10, 10, -2)
        self.assertEqual(str(cm.exception), "y must be >= 0")

    # ZERO
    def test_width_zero(self):
        with self.assertRaises(ValueError) as cm:
            Rectangle(0, 10, 10, 10)
        self.assertEqual(str(cm.exception), "width must be > 0")

    def test_height_zero(self):
        with self.assertRaises(ValueError) as cm:
            Rectangle(10, 0, 10, 10)
        self.assertEqual(str(cm.exception), "height must be > 0")

    def test_width_type(self):
        with self.assertRaises(TypeError) as cm:
            Rectangle("toto",10, 10, 10)
        self.assertEqual(str(cm.exception), "width must be an integer")

    def test_height_type(self):
        with self.assertRaises(TypeError) as cm:
            Rectangle(10,"toto", 10, 10)
        self.assertEqual(str(cm.exception), "height must be an integer")

    def test_x_type(self):
        with self.assertRaises(TypeError) as cm:
            Rectangle(10,10, "toto", 10)
        self.assertEqual(str(cm.exception), "x must be an integer")

    def test_y_type(self):
        with self.assertRaises(TypeError) as cm:
            Rectangle(10,10, 10, "toto")
        self.assertEqual(str(cm.exception), "y must be an integer")

    """def test_x_zero(self):
        with self.assertRaises(ValueError) as cm:
            Rectangle(10,10,0,10)
        self.assertEqual(str(cm.exception), "")

    def test_y_zero(self):
        with self.assertRaises(ValueError) as cm:
            Rectangle(10,10,10,0)
        self.assertEqual(str(cm.exception), "")"""
