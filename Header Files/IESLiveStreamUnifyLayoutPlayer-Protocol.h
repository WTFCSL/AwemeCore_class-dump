//
//     Generated by private class-dump
//

@protocol IESLivePlayerProtocol;

@protocol IESLiveStreamUnifyLayoutPlayer <NSObject>

@property (readonly, nonatomic) id<IESLivePlayerProtocol> player;
@property (nonatomic) struct CGSize { double x0; double x1; } mediaSize;
@property (nonatomic) unsigned long long alignMode;
@property (nonatomic) long long scaleType;
@property (readonly, nonatomic) BOOL isGameViceViewExist;
@property (nonatomic) BOOL shouldHasViceView;
@property (nonatomic) BOOL isViceHidden;
@property (nonatomic) double viceViewRightOffSet;
@property (nonatomic) long long cameraVerticalType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } specifyRatio;

- (void)destroyVicePlayerView:(id)arg0;
- (unsigned long long)alignMode;
- (void)setAlignMode:(unsigned long long)arg0;
- (id)previewViewWithCallTrace:(id)arg0;
- (id)playerViewWithCallTrace:(id)arg0;
- (id)viceViewWithCallTrace:(id)arg0;
- (void)layoutWithType:(unsigned long long)arg0 callTrace:(id)arg1;
- (BOOL)isVRStream;
- (BOOL)isViceLayoutTypeGame;
- (void)storageUsedSpecifyRatioFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getUsedSpecifyRatioFrame;
- (BOOL)shouldHasViceView;
- (BOOL)isGameViceViewExist;
- (struct CGSize { double x0; double x1; })specifyRatio;
- (long long)cameraVerticalType;
- (void)setCameraVerticalType:(long long)arg0;
- (void)layoutPlayerIfNeededWithCallTrace:(id)arg0;
- (BOOL)isViceHidden;
- (double)viceViewRightOffSet;
- (void)layoutWithData:(struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; BOOL x3; })arg0 layoutType:(unsigned long long)arg1;
- (void)vicePlayerViewCreateWithRenderingArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 maskView:(id)arg1;
- (void)vicePlayerViewSetWith:(id)arg0 maskView:(id)arg1;
- (void)vicePlayerViewSetAlpha:(double)arg0;
- (void)setShouldHasViceView:(BOOL)arg0;
- (void)setIsViceHidden:(BOOL)arg0;
- (void)setViceViewRightOffSet:(double)arg0;
- (id)player;
- (struct CGSize { double x0; double x1; })mediaSize;
- (long long)scaleType;
- (void)setScaleType:(long long)arg0;
- (void)setMediaSize:(struct CGSize { double x0; double x1; })arg0;

@end