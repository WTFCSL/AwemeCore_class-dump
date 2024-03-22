//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SECInterestLogDefaultStash : NSObject <SECInterestLogStash> {
    NSObject<OS_dispatch_queue> *_stashQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stashMutex;
    NSMutableDictionary *_stashes;
    NSMutableArray *_logTypes;
}

@property (retain, nonatomic) NSMutableDictionary *stashes;
@property (retain, nonatomic) NSMutableArray *logTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitLogItemInStashQ:(id)arg0;
- (id)stashes;
- (id)logsBetween:(double)arg0 andTime:(double)arg1;
- (id)logsForType:(id)arg0 between:(double)arg1 andTime:(double)arg2;
- (BOOL)isInStashQueue;
- (void)submitLogItem:(id)arg0;
- (id)logsForType:(id)arg0 before:(double)arg1;
- (id)logsBefore:(double)arg0;
- (void)setStashes:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)logTypes;
- (void)setLogTypes:(id)arg0;
- (void)setupQueue;

@end
