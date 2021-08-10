

def getArray (size) :
    list = []                                   # store all values
    

    for i in range (size):
        x = int (input ("element = "))
        list.append (x)

    checkArray (size, list)
    

def checkArray (size, list):
    plusList = []                               # store positive values
    minusList = []                              # store negative values
    zeroList = []                               # store zeros

    for i in range(size):
        if (list[i] > 0):
                                                    # check for positive values and store
            plusList.append(list[i])

        elif (list[i] < 0):
                                                    # check for negative values and store
            minusList.append(list[i])

        else:
            zeroList.append(list[i])                # check for zeros and store

    #print (len(plusList), len (minusList), len ((zeroList)))                        # print number of positive , negative , zero values
    result (size, len (plusList), len (minusList), len (zeroList))


def result (size, plusCount, minusCount, zeroCount):
    p = f"{plusCount / size: .6f}"                                  # customizing decimal points (To 6 decimal points)
    print ("plus number ratio  = ", p)

    m = f"{minusCount / size: .6f}"
    print ("Minus number ratio = ", m)

    z = f"{zeroCount / size: .6f}"
    print ("Zeros ratio        = ", z)


n = int (input ("size = "))                    # get the size of array

getArray (n)
