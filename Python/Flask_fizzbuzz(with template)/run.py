#!usr/bin/python3
from flask import Flask

app = Flask(__name__)

@app.route("/")
def fizzbuzz():
    return "Hello"

if __name__ == "__main__":
    app.run(debug=True)
