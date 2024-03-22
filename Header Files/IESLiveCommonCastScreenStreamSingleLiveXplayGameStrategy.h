//
//     Generated by private class-dump
//

@class UIImage;
@protocol IESLiveVideoEffectProcessing;

@interface IESLiveCommonCastScreenStreamSingleLiveXplayGameStrategy : IESLiveCommonCastScreenStreamBaseStrategy {
    UIImage *_castBackground;
    long long _lastAnchorScreenStatus;
    id<IESLiveVideoEffectProcessing> _effectProcessingService;
    struct CGSize { double width; double height; } _originalOutputSize;
}

@property (nonatomic) struct CGSize { double width; double height; } originalOutputSize;
@property (retain, nonatomic) UIImage *castBackground;
@property (nonatomic) long long lastAnchorScreenStatus;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> effectProcessingService;

- (void)resumeScreenCastWithFirstFrame:(struct __CVBuffer { } *)arg0;
- (void)setupCastContext;
- (void)resetCastContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })castScreenStreamLayoutWithHostLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updateAnchorPreviewLayout;
- (void)didSendFrameBuffer:(struct __CVBuffer { } *)arg0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)castScreenChangedWithStatus:(long long)arg0;
- (void)setupBackgroundImage:(id)arg0;
- (void)updateAnchorScreenStatus:(long long)arg0;
- (void)setOriginalOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setupBackgroundImageStream;
- (void)setCastBackground:(id)arg0;
- (struct CGSize { double x0; double x1; })originalOutputSize;
- (id)castBackground;
- (void)handleBackgroundImageStream;
- (id)effectProcessingService;
- (void)setLastAnchorScreenStatus:(long long)arg0;
- (void)setCameraOutputSize;
- (long long)lastAnchorScreenStatus;
- (void)setupVideoCaptureWithAnchorScreenStatus:(long long)arg0;
- (void)setEffectProcessingService:(id)arg0;
- (void).cxx_destruct;
- (void)startVideoCapture;
- (void)stopVideoCapture;

@end