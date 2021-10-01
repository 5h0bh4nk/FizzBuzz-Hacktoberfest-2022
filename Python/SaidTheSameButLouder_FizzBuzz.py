# author : Sufiyan

labels = 'fizz buzz fizzbuzz'.split()
answers = []
for i in range(1,101):
  if i%15 == 0:
    answers.append(labels[2])
  elif i%5 == 0:
    answers.append(labels[1])
  elif i%3 == 0:
    answers.append(labels[0])
  else:
    answers.append(str(i))

print('\n'.join(answers))
