line = "2025-07-08 10:24:01 [ERROR] Unable to connect to database"

timestamp = line[:19]

start = line.find("[")
end = line.find("]")

severity = line[start+1:end]

message = line[end+2:]

print("Timestamp:", timestamp)
print("Severity:", severity)
print("Message :", message)
