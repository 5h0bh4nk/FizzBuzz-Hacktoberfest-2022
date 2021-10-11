;; fizzbuzz with no conditionals
;; Author: @augustoscher
;; Hactoberfest 2021

(defn fizzbuzz [x]
  (let [v [(= (mod x 3) 0) (= (mod x 5) 0)]]
    ({[true false] "fizz"
      [false true] "buzz"
      [true true] "fizzbuzz"
      [false false] x} v)))

;; single map lookup
(map fizzbuzz (range 1 101))
