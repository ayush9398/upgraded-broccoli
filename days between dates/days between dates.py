def daysBetweenDates(year1, month1, day1, year2, month2, day2):
    ##
    # Your code here.
    ##
    
    day_count1=0
    b=13
    bd1=0
    month_days=[31,28,31,30,31,30,31,31,30,31,30,31]
    if year1!=year2:
        if month1>month2:
            for i in range(year1+1,year2):
                a=365
                if (i%4==0 and i%100!=0) or i%400==0 :
                    a=a+1
                bd1=bd1+a
        else:
            if month1<month2:
                bd1=day2+month_days[month1]-day1
                for a in range(month1+1,month2):
                   bd1=bd1+month_days[a]
                month1=month2
                day1=day2
                for f in range(year1+1,year2):
                    a=365
                    if (f%4==0 and f%100!=0) or f%400==0 :
                        a=a+1
                    bd1=bd1+a
                
                
 
    bd2=0
    
    if month1!=month2:
        if month1<=month2:
            for j in range(month1+1,month2):
                bd2=bd2+month_days[j-1]
                if year1%4==0 or year1%400==0:    
                    if j<=2:
                        bd2=bd2+1
                if year2%4==0 or year2%400==0:   
                    if j>2:
                        bd2=bd2+1
        else:
            for j in range(month1+1,b):
                bd2=bd2+month_days[j-1]
                if (year1%4==0 and year1%100!=0) or year1%400==0:    
                    if j<=2:
                        bd2=bd2+1
                if (year2%4==0 and year1%100!=0) or year2%400==0:   
                    if j>2:
                        bd2=bd2+1
                if j==12:
                    b=month2
        day_count1=day2+month_days[month1-1]-day1
    else:
        if year1==year2:
            day_count1=day2-day1
        if year1!=year2 and day1==day2:
            while year1!=year2:
                
                if (year1%4==0 and year1%100!=0) or year1%400==0 or (year2%4==0 and year2%100!=0) or year2%400==0:  
                    day_count1=366+day_count1
                else:
                    day_count1=365+day_count1
                year1=year1+1
            
    final_days= bd1+bd2+day_count1
    return final_days
a= int(input("enter 1st year: "))
b= int(input("enter 1st month: "))
c= int(input("enter 1st day: "))
d= int(input("enter 2nd year: "))
e= int(input("enter 2nd month: "))
f= int(input("enter 2nd day: "))
if a<d:
    print("Day(s) between these dates are "+str(daysBetweenDates(a,b,c,d,e,f)))
elif a==d and b>d:
    print("Day(s) between these dates are "+str(daysBetweenDates(d,e,f,a,b,c)))
elif a==d and b==d and c>f:
    print("Day(s) between these dates are "+str(daysBetweenDates(d,e,f,a,b,c)))
else:
    print("Day(s) between these dates are "+str(daysBetweenDates(d,e,f,a,b,c)))