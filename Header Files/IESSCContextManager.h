//
//     Generated by private class-dump
//

@class NSObject, CIContext, NSHashTable;
@protocol IESSCPixelBufferPool, OS_dispatch_semaphore;

@interface IESSCContextManager : NSObject {
    CIContext *_CIContext;
    id<IESSCPixelBufferPool> _pixelBufferPool;
    NSHashTable *_observerList;
    NSObject<OS_dispatch_semaphore> *_dataUpdateSemaphore;
}

@property (retain, nonatomic) NSHashTable *observerList;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;
@property (retain, nonatomic) CIContext *CIContext;
@property (retain, nonatomic) id<IESSCPixelBufferPool> pixelBufferPool;

+ (id)sharedInstance;

- (id)dataUpdateSemaphore;
- (void)renderCIImage:(id)arg0 toMetalImage:(id)arg1;
- (void)notifyChangeRenderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setDataUpdateSemaphore:(id)arg0;
- (void)unregisterObserver:(id)arg0;
- (id)init;
- (id)pixelBufferPool;
- (void).cxx_destruct;
- (void)registerObserver:(id)arg0;
- (id)observerList;
- (void)setObserverList:(id)arg0;
- (void)setPixelBufferPool:(id)arg0;
- (void)setCIContext:(id)arg0;
- (id)CIContext;

@end
