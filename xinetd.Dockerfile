FROM ubuntu:latest
RUN apt-get update && apt-get -y upgrade
RUN apt-get install -y gcc make xinetd python3

CMD ["/usr/sbin/xinetd", "-dontfork"]
