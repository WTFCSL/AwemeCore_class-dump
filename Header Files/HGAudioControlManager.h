//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HGAudioControlManager : NSObject <HGApplicationLifeCycleMessage> {
    NSObject<OS_dispatch_queue> *_operationQueue;
    long long _activeInstance;
    long long _activeContainer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (nonatomic) long long activeInstance;
@property (nonatomic) long long activeContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setupObserver;
- (void)applicationEnterWithUniqueID:(id)arg0;
- (void)applicationExitWithUniqueID:(id)arg0;
- (void)decreaseActiveContainer;
- (void)increaseActiveContainer;
- (long long)activeContainer;
- (void)setActiveContainer:(long long)arg0;
- (void)beginInterruption:(id)arg0;
- (void)endInterruption:(id)arg0;
- (void)increaseActiveInstance;
- (void)decreaseActiveInstance;
- (void)setCategory:(id)arg0 completion:(id /* block */)arg1;
- (id)init;
- (void)setOperationQueue:(id)arg0;
- (void).cxx_destruct;
- (void)setActiveInstance:(long long)arg0;
- (void)handleInterruption:(id)arg0;
- (id)operationQueue;
- (long long)activeInstance;
- (void)dealloc;
- (void)handleAVAudioSessionInterruption:(id)arg0;
- (void)setActive:(BOOL)arg0 completion:(id /* block */)arg1;

@end
