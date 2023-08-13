from datetime import datetime

date = '2015-01-06'
date_into_date_format = datetime.strptime(date, '%Y-%m-%d')
print(date) 
date1 = 'Sat 14 Sep 2014'
day = datetime.strptime(date1,'%a %d %b %Y')
print(date1) 
