//
//  Task.m
//  Quiz5
//
//  Created by Brandon on 3/14/14.
//  Copyright (c) 2014 Brandon Tauber. All rights reserved.
//

#import "Task.h"

@implementation Task

- (NSDate *)getDueDate {
    return dueDate;
}

- (NSString *)getName {
    return name;
}

- (float *)getUrgency {
    return urgency;
}

- (void)dueDate:(NSDate *)date {
    dueDate = date;
}

- (void)name:(NSString *)str {
    name = str;
}

- (void)urgency:(float *)urg {
    urgency = urg;
}

- (id) initWithName:(NSString *)str
            urgency:(float *)urg
            dueDate:(NSDate *)date {
    self = [super init];
    if (self) {
        [self name:str];
        [self urgency:urg];
        [self dueDate:date];
    }
    return self;
}

- (id) init {
    return [self initWithName:@"Task "
                      urgency:0
                      dueDate:[[NSDate alloc] init]];
}


@end
