FROM ubuntu:latest

WORKDIR /app

RUN apt-get update && \
    apt-get install -y g++

COPY . /app

RUN g++ -o calculator src/calculator.cpp

CMD ["./calculator"]
