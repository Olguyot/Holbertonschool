#!/usr/bin/python3
"""Module to find the max integer in a list
"""
import unittest
max_integer = __import__('6-max_integer').max_integer


class TestMaxInteger(unittest.TestCase):
    """Test max_integer function"""

    def test_max_integer(self):
        """Test for max integer"""
        ls = [1, 2, 3, 4]
        self.assertEqual(max_integer(ls), 4)
        ls = [1, 2, 4, 3]
        self.assertEqual(max_integer(ls), 4)
        ls = [4, 2, 3, 1]
        self.assertEqual(max_integer(ls), 4)
        ls = [1, 6, 3, 4]
        self.assertEqual(max_integer(ls), 6)

    def test_negative_integer(self):
        """test"""
        ls = [-1, -2, -3, -4]
        self.assertEqual(max_integer(ls), -1)
        ls = [-6, -2, -3, -4]
        self.assertEqual(max_integer(ls), -2)
        ls = [-6, -6, -1, -4]
        self.assertEqual(max_integer(ls), -1)
        ls = [-6, -2, -2, -1]

    def test_empty(self):
        """test"""
        ls = []
        self.assertEqual(max_integer(ls), None)
        ls = ""
        self.assertEqual(max_integer(ls), None)

    def test_one_elem(self):
        """test"""
        ls = [4]
        self.assertEqual(max_integer(ls), 4)

    def test_one_elem_n(self):
        """test"""
        ls = [-4]
        self.assertEqual(max_integer(ls), -4)
