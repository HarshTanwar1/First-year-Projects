
# FIRST WE IMPORT ALL PACKAGES OF PYTHON WHICH ARE HELPING IN THIS TASK
import phonenumbers
import opencage
import folium

# WE TAKE INPUT OF MOBILE NUMBER
number = input("Enter Your Number with +__ : ")

#  COUNTRY WHERE THE SIM IS REGISTERED
from phonenumbers import geocoder
phone = phonenumbers.parse(number)
print(phone)

location = geocoder.description_for_number(phone, "en")
print(location)

# TIME-ZONE WHERE SIM IS REGISTERED
from phonenumbers import timezone
time = timezone.time_zones_for_number(phone)
print(time)

# SERVICE PROVIDER OF THE SIM NUMBER
from phonenumbers import carrier
service_pro = phonenumbers.parse(number)
print(carrier.name_for_number(service_pro, "en"))

from opencage.geocoder import OpenCageGeocode
# USING THE API KEY
key = '35d4f7a11c774da0adaa3bdb45771707'

geocoder = OpenCageGeocode(key)
query = str(location)
results = geocoder.geocode(query)
# print(results)

# GIVE THE LATITUDE AND LONGITUDE OF THE REGISTERATION PLACE OF THE SIM

lat = results[0]['geometry']['lat']
lng = results[0]['geometry']['lng']

print(lat,lng)


# USING THE MAPS TO TRACK THE LOCATION OF PHONE NUMBER

myMap = folium.Map(location=[lat, lng], zoom_start= 9)
folium.Marker([lat,lng], popup=location).add_to(myMap)

myMap.save("mylocation.html")

# some different countries numbers for sample output ----> +14155552671 , +40721234567


