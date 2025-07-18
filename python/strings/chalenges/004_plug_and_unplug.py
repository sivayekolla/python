def usb(log):
    lines = log.strip().split('\n')
    for line in lines:
        if ("usb disconnect" in line.lower()) or ("new full-speed usb device" in line.lower()):
            print(line)
log = """
[22.1] usb 1-1: USB disconnect, device number 2
[22.3] usb 1-1: new full-speed USB device number 3 using xhci_hcd
[22.5] usb 2-1: reset high-speed USB device number 4 using ehci-pci
"""

usb(log)
