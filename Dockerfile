FROM ubuntu
FROM gcc:trixie

COPY hello.c /hello.c

RUN gcc -z execstack -fno-stack-protector -no-pie -o hello hello.c

RUN chown root:root hello
RUN chmod u+s hello

RUN useradd -m student

USER student

CMD ["/bin/bash"]