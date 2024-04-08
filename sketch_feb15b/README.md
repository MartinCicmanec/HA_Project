https://www.tme.com/Document/e38d805f9a476a416522af89296a370e/RFM12B-433DP.pdf

https://arduino.stackexchange.com/questions/89859/esp8266-cant-upload-or-use-serial-monitor-ubuntu-22-04-lts

```bash
sudo systemctl stop brltty-udev.service
sudo systemctl mask brltty-udev.service
sudo systemctl stop brltty.service
sudo systemctl disable brltty.service
```