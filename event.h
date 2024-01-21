/* Alexander Cruz, alexcruz, 119092071 */

#ifndef EVENT_H
#define EVENT_H

typedef struct event {
    char *name;
    int start_time;
    int duration_minutes;
    void *info;
    struct event *next;
} Event;

#endif
