
def validPhoneNumber(phone):
    if len(phone) != 10 or int(phone[-1]) == 0 or int(phone[-1]) == 4 or int(phone[-1]) == 7 or int(phone[0]) != 0 or not phone.isdigit():
        return False
    return True

print(validPhoneNumber('094453353778'))