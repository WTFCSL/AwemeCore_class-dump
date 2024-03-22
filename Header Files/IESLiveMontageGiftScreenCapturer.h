//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue, HTSLiveStreamPlayerProvider, IESLiveRealStreamingProvider;

@interface IESLiveMontageGiftScreenCapturer : NSObject {
    BOOL _isAnchor;
    BOOL _isPixelBufferCopied;
    BOOL _isFirstFrame;
    struct __CVBuffer { } *_currentPixelBuffer;
    id<IESLiveRealStreamingProvider> _anchorStreamingProvider;
    id<HTSLiveStreamPlayerProvider> _audienceStreamingProvider;
    NSObject<OS_dispatch_queue> *_queue;
    struct CGSize { double width; double height; } _currentFrameSize;
}

@property (nonatomic) BOOL isAnchor;
@property (nonatomic) struct __CVBuffer { } *currentPixelBuffer;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> anchorStreamingProvider;
@property (retain, nonatomic) id<HTSLiveStreamPlayerProvider> audienceStreamingProvider;
@property (nonatomic) BOOL isPixelBufferCopied;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isFirstFrame;
@property (nonatomic) struct CGSize { double width; double height; } currentFrameSize;

- (void)setIsAnchor:(BOOL)arg0;
- (BOOL)isFirstFrame;
- (void)setIsFirstFrame:(BOOL)arg0;
- (id)anchorStreamingProvider;
- (void)setCurrentFrameSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setIsPixelBufferCopied:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })currentFrameSize;
- (BOOL)isPixelBufferCopied;
- (void)p_copyRenderedPixelBufferFromRealStreamingWithCompletion:(id /* block */)arg0;
- (void)p_copyInstantPixelBufferFromStreamPlayerWithCompletion:(id /* block */)arg0;
- (void)p_copyInstantPixelBufferFromInteractStreamProviderWithUid:(id)arg0 completion:(id /* block */)arg1;
- (id)audienceStreamingProvider;
- (void)loadPixelBufferObverserWithCompletion:(id /* block */)arg0;
- (void)unLoadPixelBufferObverser;
- (void)getEffectedPixelBufferWithCompletion:(id /* block */)arg0 role:(long long)arg1;
- (struct __CVBuffer { } *)cropCopyPixelBufferWithCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setAnchorStreamingProvider:(id)arg0;
- (void)setAudienceStreamingProvider:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)queue;
- (void)setQueue:(id)arg0;
- (struct __CVBuffer { } *)currentPixelBuffer;
- (void)setCurrentPixelBuffer:(struct __CVBuffer { } *)arg0;
- (id)initWithComponentContext:(id)arg0;

@end