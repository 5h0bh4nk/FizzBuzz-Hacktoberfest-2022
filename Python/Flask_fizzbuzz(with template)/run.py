#!usr/bin/python3
#simple fizzbuzz app built with flask
# Author: @fr4nkl1n-1k3h

from flask import Flask, render_template

app = Flask(__name__)

@app.route("/")
def fizzbuzz():
    return render_template("index.html")

if __name__ == "__main__":
    app.run(debug=True)
