//
//     Generated by private class-dump
//

@class IESLiveInteractionLayout, NSString, UIView;

@interface IESLiveBigPartyCameraPreviewViewWrapper : NSObject <IESLiveInteractionSingleViewOptimizationDelegate> {
    BOOL _isInAnimation;
    UIView *_cameraPreview;
    IESLiveInteractionLayout *_layout;
    id /* block */ _insertingBlock;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (weak, nonatomic) UIView *cameraPreview;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (nonatomic) BOOL isInAnimation;
@property (copy, nonatomic) id /* block */ insertingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cameraPreview;
- (void)setCameraPreview:(id)arg0;
- (void)setOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originFrame;
- (void)layoutTouchableViewWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isInAnimation;
- (void)setIsInAnimation:(BOOL)arg0;
- (void)setCameraCornerHidden:(BOOL)arg0;
- (id)cameraEffectProvider;
- (void)resumeOrigin;
- (void)resetOriginFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorCameraTargetFrameWithLayout:(id)arg0;
- (void)setInsertingBlock:(id /* block */)arg0;
- (void)addCameraPreviewToOriginViewStackIfNeeded;
- (id /* block */)insertingBlock;
- (void)singleViewOptimizationDidEnableWithConfig:(id)arg0;
- (void)singleViewOptimizationDidDisableWithConfig:(id)arg0;
- (void)singleViewOptimizationDidUpdateCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 config:(id)arg1;
- (void)startWithLayout:(id)arg0;
- (void)updateWithCurrentLayout;
- (void)onAnchorPreviewInsertToSlotUsingBlock:(id /* block */)arg0;
- (void)regenerateCameraPreview;
- (void)setLayout:(id)arg0;
- (void).cxx_destruct;
- (void)setup;
- (id)layout;
- (void)clean;

@end
