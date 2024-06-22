#define QUEUE_SIZE 5
int queue_table[QUEUE_SIZE] = {0};
int front_index = 0;
int rear_index = -1;
int item_count = 0;

int isQueueEmpty(void)
{
    return (item_count == 0);
}

int isQueueFull(void)
{
    return (item_count == QUEUE_SIZE);
}

int Dequeue(void)
{
    if (!isQueueEmpty())
    {
        int val = queue_table[front_index];
        front_index = (front_index + 1) % QUEUE_SIZE;
        item_count--;
        return val;
    }
    return -1;
}

int Front(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[front_index];
    }
    return -1;
}

void Enqueue(int val)
{
    if (!isQueueFull())
    {
        rear_index = (rear_index + 1) % QUEUE_SIZE;
        queue_table[rear_index] = val;
        item_count++;
    }
}