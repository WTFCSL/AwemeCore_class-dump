//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSObject, AVVideoCompositionRenderContext;
@protocol OS_dispatch_queue;

@interface IESSCVideoCompositing : NSObject <AVVideoCompositing> {
    BOOL _renderContextDidChange;
    BOOL _shouldCancelAllRequests;
    NSDictionary *_sourcePixelBufferAttributes;
    NSDictionary *_requiredPixelBufferAttributesForRenderContext;
    NSObject<OS_dispatch_queue> *_renderContextQueue;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    AVVideoCompositionRenderContext *_renderContext;
    double _renderTime;
    long long _renderCount;
}

@property (class, retain, nonatomic) NSDictionary *globalSourcePixelBufferAttributes;
@property (class, retain, nonatomic) NSDictionary *globalRequiredPixelBufferAttributesForRenderContext;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderContextQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (nonatomic) BOOL renderContextDidChange;
@property (nonatomic) BOOL shouldCancelAllRequests;
@property (retain, nonatomic) AVVideoCompositionRenderContext *renderContext;
@property (nonatomic) double renderTime;
@property (nonatomic) long long renderCount;
@property (retain, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (retain, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setGlobalSourcePixelBufferAttributes:(id)arg0;
+ (void)setGlobalRequiredPixelBufferAttributesForRenderContext:(id)arg0;
+ (id)globalSourcePixelBufferAttributes;
+ (id)globalRequiredPixelBufferAttributesForRenderContext;
+ (void)initialize;

- (struct __CVBuffer { } *)RBGBuffereCopyWithPixelBuffer:(struct __CVBuffer { } *)arg0;
- (void)setRenderContextDidChange:(BOOL)arg0;
- (BOOL)renderContextDidChange;
- (void)setRequiredPixelBufferAttributesForRenderContext:(id)arg0;
- (id)renderContextQueue;
- (struct __CVBuffer { } *)newRenderdPixelBufferForRequest:(id)arg0;
- (void)setRenderContextQueue:(id)arg0;
- (long long)renderCount;
- (void)setRenderCount:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)renderContext;
- (id)sourcePixelBufferAttributes;
- (void)setSourcePixelBufferAttributes:(id)arg0;
- (id)renderingQueue;
- (void)renderContextChanged:(id)arg0;
- (void)startVideoCompositionRequest:(id)arg0;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)cancelAllPendingVideoCompositionRequests;
- (BOOL)shouldCancelAllRequests;
- (void)setShouldCancelAllRequests:(BOOL)arg0;
- (void)setRenderContext:(id)arg0;
- (double)renderTime;
- (void)setRenderTime:(double)arg0;
- (void)setRenderingQueue:(id)arg0;

@end
