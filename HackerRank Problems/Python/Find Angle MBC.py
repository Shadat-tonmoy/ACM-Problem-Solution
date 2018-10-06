import math
ab = int(raw_input())
bc = int(raw_input())
ac = math.sqrt(ab**2+bc**2)
bcm = round(math.degrees(math.atan2(ab,bc)))
#mbc = round(180 - (90+bcm))
print("%d"+u"\u00B0") %(bcm)

