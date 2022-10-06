
# Import date and timedelta class from datetime module
from datetime import date
from datetime import timedelta

# today's date
today = date.today()
print("today is : ", today)

# yesterday's date
yesterday = today - timedelta(days=1)
print("yesterday is : ", yesterday)

# Tomorrow's date
tomorrow = today + timedelta(days=1)
print("tomorrow is : ", tomorrow)
