//
//  TaskGroup.h
//  Quiz5C
//
//  Created by Brandon on 3/14/14.
//  Copyright (c) 2014 Brandon Tauber. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Task;

@interface TaskGroup : NSObject {
    NSMutableArray *allTasks;
}

+ (TaskGroup *)sharedGroup;
- (void)removeTask:(Task *)p;
- (NSArray *)allItems;
- (Task *)createTask;
- (void)moveItemAtIndex:(int)from
                toIndex:(int)to;


@end
