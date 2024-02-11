FROM ubuntu:latest

WORKDIR /app

RUN apt-get update && \
    apt-get install -y g++

COPY . /app

RUN g++ -o calculator calculator.cpp

CMD ["./calculator"]
