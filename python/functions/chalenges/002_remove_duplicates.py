def mal(arr,n):
     arr_1=[]
     for i in range(n):
          if arr[i] not in arr_1:
               arr_1.append(arr[i])
     print(arr_1)
amp=list(map(int,input("enter a list : ").split()))
mal(amp,len(amp))