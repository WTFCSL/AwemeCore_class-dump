//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_semaphore;

@protocol IVEReverseProtocol <NSObject>

@property (readonly, nonatomic) BOOL reverseVideoStatus;
@property (readonly, nonatomic) BOOL timeMachineReady;
@property (copy, nonatomic) id /* block */ reverseCompleteBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *reverseCompleteSemaphore;

- (BOOL)updateVideoData:(id)arg0;
- (BOOL)timeMachineReady;
- (void)restartReverseAsset:(id /* block */)arg0;
- (void)clearReverseAsset;
- (id)initWithVideoData:(id)arg0;
- (BOOL)reverseVideoStatus;
- (void)reverseAssetWithComplete:(id /* block */)arg0;
- (id)reverseCompleteSemaphore;
- (id /* block */)reverseCompleteBlock;
- (void)cancelReverseAsset;
- (void)restoreReverseIfNeeded:(id /* block */)arg0;
- (void)setReverseCompleteBlock:(id /* block */)arg0;
- (void)setReverseCompleteSemaphore:(id)arg0;

@end
