//
//     Generated by private class-dump
//

@class NSThread, NSTimer, NSMutableDictionary, NSLock;

@interface BDCastFLVStreamProducer : NSObject {
    id /* block */ _streamDataAvailableBlock;
    id /* block */ _noStreamDataAvailableBlockMaxTimesReached;
    NSThread *_thread;
    NSTimer *_timer;
    NSLock *_dataPoolAccessLock;
    NSMutableDictionary *_dataPool;
    unsigned long long _dataIndex;
    unsigned long long _consumedDataIndex;
    long long _totalNoStreamDataAvailableBlockTimes;
}

@property (retain, nonatomic) NSThread *thread;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSLock *dataPoolAccessLock;
@property (retain, nonatomic) NSMutableDictionary *dataPool;
@property unsigned long long dataIndex;
@property (nonatomic) unsigned long long consumedDataIndex;
@property (nonatomic) long long totalNoStreamDataAvailableBlockTimes;
@property (copy, nonatomic) id /* block */ streamDataAvailableBlock;
@property (copy, nonatomic) id /* block */ noStreamDataAvailableBlockMaxTimesReached;

- (void)threadEntryPoint:(id)arg0;
- (void)cancelThread;
- (id /* block */)streamDataAvailableBlock;
- (id /* block */)noStreamDataAvailableBlockMaxTimesReached;
- (id)dataPoolAccessLock;
- (void)setDataPoolAccessLock:(id)arg0;
- (id)dataPool;
- (void)setDataPool:(id)arg0;
- (unsigned long long)consumedDataIndex;
- (void)setConsumedDataIndex:(unsigned long long)arg0;
- (long long)totalNoStreamDataAvailableBlockTimes;
- (void)setTotalNoStreamDataAvailableBlockTimes:(long long)arg0;
- (void)setNoStreamDataAvailableBlockMaxTimesReached:(id /* block */)arg0;
- (void)setStreamDataAvailableBlock:(id /* block */)arg0;
- (void)timerFired:(id)arg0;
- (id)timer;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)setTimer:(id)arg0;
- (id)thread;
- (void)start;
- (void)dealloc;
- (void)addData:(id)arg0;
- (void)setThread:(id)arg0;
- (unsigned long long)dataIndex;
- (void)setDataIndex:(unsigned long long)arg0;

@end
