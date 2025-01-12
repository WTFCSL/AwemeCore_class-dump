//
//     Generated by private class-dump
//

@protocol IESLivePlaybackAutoRotateRouter <NSObject>

@property (readonly, nonatomic) BOOL isAutoRotating;
@property (readonly, nonatomic) BOOL isManualRotating;

- (BOOL)disableAutoRotate;
- (void)setDisableAutoRotate:(BOOL)arg0;
- (void)willAutoRotateToSize:(struct CGSize { double x0; double x1; })arg0;
- (void)animationRotateToSize:(struct CGSize { double x0; double x1; })arg0 duration:(double)arg1;
- (void)didAutoRotateToSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)isAutoRotating;
- (void)setIsManualRotating:(BOOL)arg0;
- (void)rotateOrientation:(long long)arg0 rotateModel:(unsigned long long)arg1;
- (BOOL)isManualRotating;
- (long long)currentInterfaceOrientation;

@end
