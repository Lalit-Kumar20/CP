def validSolution(board):
    temp = []
    for row in board:
  
        for i in range(1,10):
            if i not in row:

                return False

    for column in range(0,9):
        temp = []
        for row in board:
            temp.append(row[column])

        
        for i in range(1,10):
            if i not in temp:

                return False

    j = 0
    while (j <=2):
        temp = []
        for row in range(3*j,3*j+3):
            k = 0
            for column in range(3*j,3*j+3):
                temp.append(board[row][column])


        for i in range(1,10):
            if temp.count(i) != 1:
                return False                          
        j += 1
            
    return True
