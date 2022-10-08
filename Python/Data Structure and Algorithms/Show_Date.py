# How to Find Yesterday’s, Today’s and Tomorrow’s date in Python

# Import Module
import datetime

# Today's Date
today = datetime.date.today()

# Yesterday's Date
yesterday = today - datetime.timedelta(days = 1)

# Tomorrow's Date
tomorrow = today + datetime.timedelta(days = 1)

# Display the Dates
print("Yesterday's Date: ",yesterday.strftime('%d-%m-%Y'))
print("Today's Date: ",today.strftime('%d-%m-%Y'))
print("Tomorrow's Date: ",tomorrow.strftime('%d-%m-%Y'))