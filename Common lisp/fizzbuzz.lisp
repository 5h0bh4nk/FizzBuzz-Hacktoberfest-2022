(defun fizzbuzz ()
    (loop for n from 1 below 101 do
        (let ((divisibleByThree (zerop (mod n 3)))
                (divisibleByFive  (zerop (mod n 5))))
            (cond
                ((and divisibleByThree divisibleByFive)
                    (write-line "FizzBuzz"))
                (divisibleByThree
                    (write-line "Fizz"))
                (divisibleByFive
                    (write-line "Buzz"))
                (t (format t "~d~%" n))))))

(fizzbuzz)