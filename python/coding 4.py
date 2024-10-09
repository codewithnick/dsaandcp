def top_t_words(words,t):

    words.sort()
    #print(words)
    mydict={}

    for word in words:
        if word in mydict.keys():
            mydict[word]+=1
        else:
            mydict[word]=1
    mydict= dict(sorted(mydict.items(), key=lambda item: item[1], reverse=True))
    #print(mydict)
    myarray=[]
    for key in mydict.keys():
        if t<0:
            break
        #print( key, mydict[key])
        myarray.append(key)
        t-=1
    return myarray


words=input("enter sentence ").split(" ")
t=int(input("enter t "))
top_t_words(words,t)