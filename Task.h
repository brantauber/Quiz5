//
//  Task.h
//  Quiz5
//
//  Created by Brandon on 3/14/14.
//  Copyright (c) 2014 Brandon Tauber. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject {
    float *urgency;
    NSDate *dueDate;
    NSString *name;
}

- (void)name:(NSString *)str;
- (NSString *)getName;
- (void)urgency:(float *)urg;
- (float *)getUrgency;
- (void)dueDate:(NSDate *)date;
- (NSDate *)getDueDate;

- (id) initWithName:(NSString *)name
            urgency:(float *)urg
            dueDate:(NSDate *)date;

@end
