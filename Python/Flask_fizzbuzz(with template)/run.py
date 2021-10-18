#!usr/bin/python3
from flask import Flask, render_template

app = Flask(__name__)

@app.route("/fizzbuzz")
def fibu():
    return "Hello"

if __name__ == "__main__":
    app.run(debug=True)
