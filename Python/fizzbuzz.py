
from fastapi import FastAPI
import fastapi
from typing import Optional
from pydantic import BaseModel

app = FastAPI()

@app.post('/')

def fizzbuzz():
    for i in range(1, 101):
        if(i%3 == 0):
            return{'Fizz'}
        elif( i%5 ==0):
            return{'Buzz'}
        elif(i%3 == 0 & i%5 ==0):
            return{'FizzBuzz'}
            