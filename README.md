# libwireshark library decoded data
Using libwireshark library to decode packet, the decoded data is stored in `struct epan_dissect`.

# Install
- ubuntu
```
sudo apt-get install libwireshark-dev libglib2.0-dev libwiretap-dev
make
./myshark -f file.pcap -t text
```

# Debug
Debug program to see how wireshark dissect packet.
- Download wireshark source code from www.wireshark.org
- Uncompress source code and compile. Following [wireshark guide](https://www.wireshark.org/docs/wsug_html/#ChBuildInstallUnixBuild)
- Export SRC_WIRESHARK as wireshark source code path
```
export SRC_WIRESHARK=<wireshark source code path>
```
- Make file
```
make debug
```
- Using GDB
```
libtool --mode=execute gdb ./myshark
```

