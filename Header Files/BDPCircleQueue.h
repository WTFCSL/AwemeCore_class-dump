//
//     Generated by private class-dump
//

@class NSObject, NSString, BDPLinkListNode;
@protocol OS_dispatch_semaphore;

@interface BDPCircleQueue : NSObject <BDPQueueProtocol> {
    unsigned long long _count;
    BDPLinkListNode *_queue_head;
    BDPLinkListNode *_queue_tail;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (retain, nonatomic) BDPLinkListNode *queue_head;
@property (retain, nonatomic) BDPLinkListNode *queue_tail;
@property unsigned long long count;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)queue_head;
- (void)setQueue_head:(id)arg0;
- (id)queue_tail;
- (void)setQueue_tail:(id)arg0;
- (void)empty;
- (void)setCount:(unsigned long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)dequeue;
- (unsigned long long)count;
- (void)enqueue:(id)arg0;
- (id)lock;
- (BOOL)isEmpty;
- (void)dealloc;
- (void)setLock:(id)arg0;

@end
