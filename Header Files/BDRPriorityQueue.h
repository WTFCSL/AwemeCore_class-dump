//
//     Generated by private class-dump
//

@class NSLock, NSMutableArray, NSMutableDictionary;
@protocol BDRPriorityQueueDelegate;

@interface BDRPriorityQueue : NSObject {
    id<BDRPriorityQueueDelegate> _delegate;
    long long _subQueueMaxObjectCount;
    NSMutableArray *_queue;
    NSMutableDictionary *_dict;
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) NSLock *lock;
@property (weak, nonatomic) id<BDRPriorityQueueDelegate> delegate;
@property (nonatomic) long long subQueueMaxObjectCount;

- (id)findObjectWithKey:(id)arg0;
- (void)discardObjectInSubQueue:(id)arg0;
- (long long)subQueueMaxObjectCount;
- (void)setSubQueueMaxObjectCount:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)dict;
- (BOOL)removeObject:(id)arg0;
- (id)dequeue;
- (id)delegate;
- (void)enqueue:(id)arg0;
- (id)lock;
- (id)queue;
- (void)setDelegate:(id)arg0;
- (void)setLock:(id)arg0;
- (void)setQueue:(id)arg0;
- (void)removeAllObjects;
- (void)setDict:(id)arg0;

@end