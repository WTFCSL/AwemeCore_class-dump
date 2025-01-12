//
//     Generated by private class-dump
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveUserEnterQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _dequeueNodeCallBack;
    NSMutableArray *_array;
}

@property (retain, nonatomic) NSMutableArray *array;
@property (copy, nonatomic) id /* block */ dequeueNodeCallBack;

- (BOOL)updateCommonNotifyEnterNode:(id)arg0;
- (void)replaceNode:(id)arg0 withCondition:(id /* block */)arg1;
- (unsigned long long)countOfCalculateThresholdObjects;
- (void)dequeueInPriorityOrder;
- (id /* block */)dequeueNodeCallBack;
- (id)front;
- (void)replaceFront:(id)arg0;
- (void)removeNodeWithCondition:(id /* block */)arg0;
- (void)removeLastNodeWithCondition:(id /* block */)arg0;
- (id)popNodeWithCondition:(id /* block */)arg0;
- (void)setDequeueNodeCallBack:(id /* block */)arg0;
- (id)array;
- (void).cxx_destruct;
- (id)initWithLabel:(id)arg0;
- (void)dequeue;
- (unsigned long long)count;
- (void)enqueue:(id)arg0;
- (void)setArray:(id)arg0;
- (BOOL)contains:(id /* block */)arg0;
- (BOOL)isEmpty;
- (void)clear;
- (void)replaceNodeAtIndex:(int)arg0 withNode:(id)arg1;
- (id)popNode;
- (void)pushNode:(id)arg0;

@end
