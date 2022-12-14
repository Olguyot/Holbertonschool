#!/usr/bin/python3
"""
    commentaire
"""
from flask import Flask
from flask import render_template
from models import storage
from models.state import State
app = Flask(__name__)


@app.route('/cities_by_states', strict_slashes=False)
def cities_states_route():
    """ commentaire """
    states = storage.all(State).values()
    return render_template('8-cities_by_states.html', states=states)


@app.teardown_appcontext
def teardown_db(exception):
    """ commentaire """
    storage.close()

if __name__ == '__main__':
    app.run(host='0.0.0.0')
