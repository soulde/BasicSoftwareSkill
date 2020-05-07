"""
author:李雨璟

edit in May/07/2020
"""

import numpy as np

#trasfer everyone's comment to a matrix
commentMatrix = np.array([
    [False,True,True,True],
    [False,False,True,False],
    [False,False,False,True],
    [True,True,True,False]
    ])

#suspect in every row,and the suspected one will mul -1.  (print judge to see how it work)
judge =np.ones([4,4])-np.identity(4)*2
#print(judge)

#to achieve 'not' function (1-i = !i (i == 0 or i == 1))
vote = np.matmul(judge,commentMatrix) + 1


#show the vote result
print(vote)

#when everyone tell the truth ,the eating-cake one get most (4) votes
if vote.max()==4:
    _position =np.argmax(vote)
    row,col = divmod(_position, 4)

    print("Person %d lies, and person %d eat the cake"%(row+1,col+1))
else:
    print("Can't solve")
