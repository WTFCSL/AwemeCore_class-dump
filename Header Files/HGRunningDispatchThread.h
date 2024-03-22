//
//     Generated by private class-dump
//

@class NSString, NSRunLoop;
@protocol HGQueueProtocol, HGRunningDispatchQueueDelegate;

@interface HGRunningDispatchThread : NSThread <HGRunningDispatchProtocol> {
    id _engine;
    id _realEngine;
    BOOL _running;
    BOOL _isAwake;
    BOOL _disableAutoreleaseFix;
    BOOL _disablePriorityFix;
    long long _dispatchCount;
    id<HGRunningDispatchQueueDelegate> _delegate;
    id<HGQueueProtocol> _queue;
    unsigned long long _pkey;
    id /* block */ _clearBlk;
    NSRunLoop *_currentRunLoop;
}

@property (nonatomic) unsigned long long pkey;
@property (copy) id /* block */ clearBlk;
@property BOOL running;
@property (retain) NSRunLoop *currentRunLoop;
@property BOOL isAwake;
@property (nonatomic) BOOL disableAutoreleaseFix;
@property (nonatomic) BOOL disablePriorityFix;
@property long long dispatchCount;
@property (weak, nonatomic) id<HGRunningDispatchQueueDelegate> delegate;
@property (retain, nonatomic) id<HGQueueProtocol> queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)currentIsDispatchThread;
- (void)setClearBlk:(id /* block */)arg0;
- (void)setEnableAcceptAsyncCall:(BOOL)arg0;
- (BOOL)enableAcceptAsyncCall;
- (void)dispatchAsyncImmediately:(id /* block */)arg0;
- (void)stopWith:(id /* block */)arg0;
- (void)setupClearBlockWithoutStop:(id /* block */)arg0;
- (void)setCurrentRunLoop:(id)arg0;
- (id /* block */)clearBlk;
- (BOOL)isAwake;
- (void)setIsAwake:(BOOL)arg0;
- (void)setDisableAutoreleaseFix:(BOOL)arg0;
- (void)setDisablePriorityFix:(BOOL)arg0;
- (long long)dispatchCount;
- (void)setDispatchCount:(long long)arg0;
- (void)_innerDispatchedBlockConsumeQueue;
- (unsigned long long)pkey;
- (BOOL)disablePriorityFix;
- (BOOL)disableAutoreleaseFix;
- (id)realEngine;
- (void)setRealEngine:(id)arg0;
- (void)setPkey:(unsigned long long)arg0;
- (void)removeAllAsyncDispatch;
- (BOOL)running;
- (void)setRunning:(BOOL)arg0;
- (id)init;
- (void)main;
- (void).cxx_destruct;
- (void)stop;
- (id)engine;
- (id)delegate;
- (void)start;
- (id)queue;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setEngine:(id)arg0;
- (void)setQueue:(id)arg0;
- (void)dispatchAsync:(id /* block */)arg0;
- (id)currentRunLoop;

@end
