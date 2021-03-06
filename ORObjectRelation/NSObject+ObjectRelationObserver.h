//
//  NSObject+ObjectRelationObserver.h
//  ORObjectRelationDemo
//
//  Created by xulinfeng on 2017/1/17.
//  Copyright © 2017年 xulinfeng. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ORCountObjectRelation.h"
#import "ORBooleanObjectRelation.h"
#import "ORMajorKeyCountObjectRelation.h"

@interface NSObject (ORObjectRelationObserver)

- (BOOL)observeRelation:(ORObjectRelation *)relation queue:(dispatch_queue_t)queue picker:(void (^)(id relation, id value))picker error:(NSError **)error;
- (void)removeObservedRelations;

@end

@interface NSObject (ORCountObjectRelation)

- (BOOL)observeRelation:(ORCountObjectRelation *)relation queue:(dispatch_queue_t)queue countPicker:(void (^)(id relation, NSUInteger count))countPicker error:(NSError **)error;

@end

@interface NSObject (ORBooleanObjectRelation)

- (BOOL)observeRelation:(ORBooleanObjectRelation *)relation queue:(dispatch_queue_t)queue booleanPicker:(void (^)(id relation, BOOL boolean))booleanPicker error:(NSError **)error;

@end

@interface NSObject (ORObjectRelationObserverMainQueue)

- (BOOL)registerObserveRelation:(ORObjectRelation *)relation picker:(void (^)(id relation, id value))picker error:(NSError **)error;
- (BOOL)registerObserveRelation:(ORCountObjectRelation *)relation countPicker:(void (^)(id relation, NSUInteger count))countPicker error:(NSError **)error;
- (BOOL)registerObserveRelation:(ORBooleanObjectRelation *)relation booleanPicker:(void (^)(id relation, BOOL boolean))booleanPicker error:(NSError **)error;

@end

@interface NSObject (ORObjectRelationObserverDeprecated)

- (void)clearAllRegisteredRelations ORObjectRelationDeprecated(clearAllObservedRelations);

@end
