#FastAPI is a superfast Python Webframework, which help with in-house deployment
#Line 3 to Line 4 Importing necessary FastAPI modules

from fastapi import FastAPI
import fastapi
from typing import Optional
from pydantic import BaseModel

app = FastAPI()

#Using "post" method to use internal UI using "FastAPI-SWAGGER UI". 

@app.post('/')    #Go to local host "http://127.0.0.1:8000/" plus soon you'll get a chance to cross-check.

def fizzbuzz():
    for i in range(1, 101):
        if(i%3 == 0):
            return{'Fizz'}
        elif( i%5 ==0):
            return{'Buzz'}
        elif(i%3 == 0 & i%5 ==0):
            return{'FizzBuzz'}
        
        
        
#Points to take care:
#Download :::  FastAPI & Uvicorn in your local
# Please make sure your app (e.g. this python-script and FastAPI are in the same path)
#Open your terminal (in my case VScode) and run command :  uvicorn FastAPI_FizzBuzz:app --reload
#As menthione above, Now its time to recheck your local host link, when app start running You'll find a local host to visit in the terminal.
#Click on the link, and enjoy your deployed fizzBuzz Code
#FastAPi work with API or Urls for continuous input, and much more things, here we'll only be getting one output at a time, but its much more then it.
#This code is the most basic code of FastAPI and much more left to explore.
