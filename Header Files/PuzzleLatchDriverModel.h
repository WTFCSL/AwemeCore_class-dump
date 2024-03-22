//
//     Generated by private class-dump
//

@class PuzzleContext, IESHYHybridContainerConfig, NSObject;
@protocol OS_dispatch_queue;

@interface PuzzleLatchDriverModel : NSObject {
    PuzzleContext *_context;
    IESHYHybridContainerConfig *_configuration;
    NSObject<OS_dispatch_queue> *_safeQueue;
}

@property (weak, nonatomic) PuzzleContext *context;
@property (weak, nonatomic) IESHYHybridContainerConfig *configuration;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *safeQueue;

- (id)safeQueue;
- (void)setSafeQueue:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)configuration;
- (id)context;
- (void)setConfiguration:(id)arg0;

@end
