//
//     Generated by private class-dump
//

@protocol IESLiveRecoder;

@protocol IESLiveInteractionGuestPreviewViewAdapter <NSObject>

@property (readonly, nonatomic) BOOL isPreviewing;
@property (nonatomic) BOOL shouldCheckEffectProcesser;
@property (nonatomic) BOOL killedByPKAudienceLinkmic;
@property (retain, nonatomic) id<IESLiveRecoder> camera;
@property (copy, nonatomic) id /* block */ onOpenCameraCompletion;

- (void)resetOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)killedByPKAudienceLinkmic;
- (id /* block */)onOpenCameraCompletion;
- (BOOL)shouldCheckEffectProcesser;
- (id)initWithPreviewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)overturn;
- (void)setShouldCheckEffectProcesser:(BOOL)arg0;
- (void)setKilledByPKAudienceLinkmic:(BOOL)arg0;
- (void)setOnOpenCameraCompletion:(id /* block */)arg0;
- (BOOL)isPreviewing;
- (id)camera;
- (void)setCamera:(id)arg0;
- (long long)currentPosition;
- (void)startVideoCapture;
- (void)stopVideoCapture;
- (void)setupCamera;

@end
