/* 8086 Assembly language program for */
/* Author: @Awais-KhanAK */

mov dx,03030h                    
mov ah,0Eh                              
mov bl,100d         
xor cx,cx           
xor bh,bh           
 
writeloop:          
inc dl              
cmp dl,3Ah          
jnz writeloop1      
mov dl,30h          
inc dh              
writeloop1:         
inc bh              
cmp bh,03h          
                                        
jz writefizz        
                    
cmp dl,30h          
jz writebuzz        
cmp dl,35h          
jz writebuzz        
                                        
mov al,dh           
int 10h             
mov al,dl           
int 10h             
writespace:
mov al,020h         
int 10h
dec bl              
jnz writeloop       
 
programend:         
cli                 
hlt                 
jmp programend      
 
writefizz:          
mov si,offset fizz  
call write          
xor bh,bh           
                    
cmp dl,30h          
jz writebuzz        
cmp dl,35h          
jnz writespace      
                    
                    
writebuzz:          
                    
                    
mov si,offset buzz  
call write          
jmp writespace      
                    
 
write:              
mov cl,04h          
                    
write1:
mov al,[si]         
inc si              
int 10h             
                    
                    
loop write1         
ret                 
                    
 
fizz:               
db "fizz"
 
buzz:             
db "buzz"