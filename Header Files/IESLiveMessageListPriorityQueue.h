//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESLiveMessageListPriorityQueue : NSObject {
    BOOL _enableHighPriorityStratery;
    BOOL _enableLowPriorityStratery;
    long long _highPriorityCount;
    long long _lowPriorityCount;
    NSMutableArray *_lowPriorityArray;
    NSMutableArray *_middlePriorityArray;
    NSMutableArray *_highPriorityArray;
}

@property (retain, nonatomic) NSMutableArray *lowPriorityArray;
@property (retain, nonatomic) NSMutableArray *middlePriorityArray;
@property (retain, nonatomic) NSMutableArray *highPriorityArray;
@property (nonatomic) BOOL enableHighPriorityStratery;
@property (nonatomic) BOOL enableLowPriorityStratery;
@property (nonatomic) long long highPriorityCount;
@property (nonatomic) long long lowPriorityCount;

- (void)setEnableLowPriorityStratery:(BOOL)arg0;
- (void)setEnableHighPriorityStratery:(BOOL)arg0;
- (void)setLowPriorityCount:(long long)arg0;
- (void)setHighPriorityCount:(long long)arg0;
- (BOOL)enableLowPriorityStratery;
- (BOOL)enableHighPriorityStratery;
- (id)popObjectsInTimeOrderWithCount:(long long)arg0 needReverse:(BOOL)arg1;
- (void)pushObject:(id)arg0 withPriority:(int)arg1;
- (id)popObjectsByStrategyWithCount:(long long)arg0 needReverse:(BOOL)arg1;
- (id)lowPriorityArray;
- (id)highPriorityArray;
- (id)middlePriorityArray;
- (id)popObjectsInTimeOrderWithArrays:(id)arg0 count:(long long)arg1;
- (long long)highPriorityCount;
- (id)popObjectsFromArray:(id)arg0 count:(long long)arg1;
- (long long)lowPriorityCount;
- (double)localTimeStampWith:(id)arg0;
- (void)setLowPriorityArray:(id)arg0;
- (void)setMiddlePriorityArray:(id)arg0;
- (void)setHighPriorityArray:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)count;
- (BOOL)isEmpty;
- (void)clear;
- (id)allObjects;

@end