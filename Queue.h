#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_SIZE 5

int isQueueEmpty(void);

int isQueueFull(void);

void Enqueue(int val);

int Dequeue(void);

int Front(void);

#endif // QUEUE_H