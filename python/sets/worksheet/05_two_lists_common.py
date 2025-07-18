my_favs = ["Tom", "Jerry", "Ben 10"]
friend_favs = ["Powerpuff", "Jerry", "Scooby"]
my_favs=set(my_favs)
friend_favs=set(friend_favs)
common= my_favs.intersection(friend_favs)
print(f"yes! {' '.join(common)} is common")