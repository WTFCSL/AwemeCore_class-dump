//
//     Generated by private class-dump
//

@class UIView, NSTimer, UIImage, NSString, TOCropScrollView, UIImageView, CAShapeLayer, UIPanGestureRecognizer, TOCropOverlayView;
@protocol TOCropViewDelegate;

@interface TOCropView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {
    BOOL _cropBoxResizeEnabled;
    BOOL _canBeReset;
    BOOL _simpleRenderMode;
    BOOL _internalLayoutDisabled;
    BOOL _aspectRatioLockEnabled;
    BOOL _aspectRatioLockDimensionSwapEnabled;
    BOOL _resetAspectRatioEnabled;
    BOOL _croppingViewsHidden;
    BOOL _gridOverlayHidden;
    BOOL _applyInitialCroppedImageFrame;
    BOOL _editing;
    BOOL _disableForgroundMatching;
    BOOL _rotateAnimationInProgress;
    BOOL _dynamicBlurEffect;
    BOOL _initialSetupPerformed;
    BOOL _hasMoved;
    UIImage *_image;
    long long _croppingStyle;
    TOCropOverlayView *_gridOverlayView;
    UIView *_foregroundContainerView;
    id<TOCropViewDelegate> _delegate;
    long long _angle;
    double _cropViewPadding;
    double _cropAdjustingDelay;
    double _minimumAspectRatio;
    double _maximumZoomScale;
    UIImageView *_backgroundImageView;
    UIView *_backgroundContainerView;
    UIImageView *_foregroundImageView;
    TOCropScrollView *_scrollView;
    UIView *_overlayView;
    UIView *_translucencyView;
    id _translucencyEffect;
    CAShapeLayer *_circularMaskLayer;
    UIPanGestureRecognizer *_gridPanGestureRecognizer;
    long long _tappedEdge;
    NSTimer *_resetTimer;
    long long _cropBoxLastEditedAngle;
    double _cropBoxLastEditedZoomScale;
    double _cropBoxLastEditedMinZoomScale;
    long long _restoreAngle;
    UIImageView *_coverMaskView;
    UIView *_coverBlackView;
    UIView *_coverEffectView;
    struct CGSize { double width; double height; } _aspectRatio;
    struct CGPoint { double x; double y; } _panOriginPoint;
    struct CGPoint { double x; double y; } _rotationContentOffset;
    struct CGSize { double width; double height; } _rotationContentSize;
    struct CGSize { double width; double height; } _cropBoxLastEditedSize;
    struct CGSize { double width; double height; } _originalCropBoxSize;
    struct CGPoint { double x; double y; } _originalContentOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropBoxFrame;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _cropRegionInsets;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropOriginFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rotationBoundFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _restoreImageCropFrame;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long croppingStyle;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *backgroundContainerView;
@property (retain, nonatomic) UIView *foregroundContainerView;
@property (retain, nonatomic) UIImageView *foregroundImageView;
@property (retain, nonatomic) TOCropScrollView *scrollView;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIView *translucencyView;
@property (retain, nonatomic) id translucencyEffect;
@property (retain, nonatomic) TOCropOverlayView *gridOverlayView;
@property (retain, nonatomic) CAShapeLayer *circularMaskLayer;
@property (retain, nonatomic) UIPanGestureRecognizer *gridPanGestureRecognizer;
@property (nonatomic) BOOL applyInitialCroppedImageFrame;
@property (nonatomic) long long tappedEdge;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropOriginFrame;
@property (nonatomic) struct CGPoint { double x; double y; } panOriginPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropBoxFrame;
@property (retain, nonatomic) NSTimer *resetTimer;
@property (nonatomic) BOOL editing;
@property (nonatomic) BOOL disableForgroundMatching;
@property (nonatomic) struct CGPoint { double x; double y; } rotationContentOffset;
@property (nonatomic) struct CGSize { double width; double height; } rotationContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rotationBoundFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) BOOL hasAspectRatio;
@property (nonatomic) struct CGSize { double width; double height; } cropBoxLastEditedSize;
@property (nonatomic) long long cropBoxLastEditedAngle;
@property (nonatomic) double cropBoxLastEditedZoomScale;
@property (nonatomic) double cropBoxLastEditedMinZoomScale;
@property (nonatomic) BOOL rotateAnimationInProgress;
@property (nonatomic) struct CGSize { double width; double height; } originalCropBoxSize;
@property (nonatomic) struct CGPoint { double x; double y; } originalContentOffset;
@property (nonatomic) BOOL canBeReset;
@property (nonatomic) BOOL dynamicBlurEffect;
@property (nonatomic) long long restoreAngle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } restoreImageCropFrame;
@property (nonatomic) BOOL initialSetupPerformed;
@property (retain, nonatomic) UIImageView *coverMaskView;
@property (retain, nonatomic) UIView *coverBlackView;
@property (retain, nonatomic) UIView *coverEffectView;
@property (nonatomic) BOOL hasMoved;
@property (weak, nonatomic) id<TOCropViewDelegate> delegate;
@property (nonatomic) BOOL cropBoxResizeEnabled;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageViewFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cropRegionInsets;
@property (nonatomic) BOOL simpleRenderMode;
@property (nonatomic) BOOL internalLayoutDisabled;
@property (nonatomic) struct CGSize { double width; double height; } aspectRatio;
@property (nonatomic) BOOL aspectRatioLockEnabled;
@property (nonatomic) BOOL aspectRatioLockDimensionSwapEnabled;
@property (nonatomic) BOOL resetAspectRatioEnabled;
@property (readonly, nonatomic) BOOL cropBoxAspectRatioIsPortrait;
@property (nonatomic) long long angle;
@property (nonatomic) BOOL croppingViewsHidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageCropFrame;
@property (nonatomic) BOOL gridOverlayHidden;
@property (nonatomic) double cropViewPadding;
@property (nonatomic) double cropAdjustingDelay;
@property (nonatomic) double minimumAspectRatio;
@property (nonatomic) double maximumZoomScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCoverMaskImage:(id)arg0;
- (id)initWithCroppingStyle:(long long)arg0 image:(id)arg1;
- (void)setResetAspectRatioEnabled:(BOOL)arg0;
- (void)setAspectRatioLockEnabled:(BOOL)arg0;
- (long long)croppingStyle;
- (void)setCropBoxFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setApplyInitialCroppedImageFrame:(BOOL)arg0;
- (void)setCropBoxResizeEnabled:(BOOL)arg0;
- (void)setRestoreImageCropFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setRestoreAngle:(long long)arg0;
- (void)setCropAdjustingDelay:(double)arg0;
- (void)setCropViewPadding:(double)arg0;
- (void)setDynamicBlurEffect:(BOOL)arg0;
- (void)startResetTimer;
- (void)setTranslucencyView:(id)arg0;
- (id)translucencyView;
- (void)setForegroundImageView:(id)arg0;
- (id)foregroundImageView;
- (void)setCircularMaskLayer:(id)arg0;
- (id)circularMaskLayer;
- (void)setCoverMaskView:(id)arg0;
- (id)coverMaskView;
- (void)setCoverBlackView:(id)arg0;
- (id)coverBlackView;
- (id)translucencyEffect;
- (void)setCoverEffectView:(id)arg0;
- (id)coverEffectView;
- (void)gridPanGestureRecognized:(id)arg0;
- (void)setGridPanGestureRecognizer:(id)arg0;
- (id)gridPanGestureRecognizer;
- (BOOL)initialSetupPerformed;
- (void)setInitialSetupPerformed:(BOOL)arg0;
- (void)layoutInitialImage;
- (long long)restoreAngle;
- (void)setCropBoxLastEditedAngle:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })restoreImageCropFrame;
- (void)setImageCropFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)captureStateForImageRotation;
- (void)checkForCanReset;
- (BOOL)hasAspectRatio;
- (BOOL)resetAspectRatioEnabled;
- (void)setOriginalCropBoxSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setOriginalContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)matchForegroundToBackground;
- (void)setRotationContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)setRotationContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setRotationBoundFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropBoxFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rotationBoundFrame;
- (struct CGPoint { double x0; double x1; })rotationContentOffset;
- (struct CGSize { double x0; double x1; })rotationContentSize;
- (BOOL)disableForgroundMatching;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropOriginFrame;
- (double)cropViewPadding;
- (struct CGPoint { double x0; double x1; })panOriginPoint;
- (long long)tappedEdge;
- (BOOL)aspectRatioLockEnabled;
- (void)cancelResetTimer;
- (void)setEditing:(BOOL)arg0 resetCropBox:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSimpleRenderMode:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setPanOriginPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setCropOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)cropEdgeForPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setTappedEdge:(long long)arg0;
- (void)updateCropBoxFrameWithGesturePoint:(struct CGPoint { double x0; double x1; })arg0;
- (double)cropAdjustingDelay;
- (void)setResetTimer:(id)arg0;
- (void)setCanBeReset:(BOOL)arg0;
- (void)setCropBoxLastEditedZoomScale:(double)arg0;
- (void)setCropBoxLastEditedMinZoomScale:(double)arg0;
- (void)updateToImageCropFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCroppingViewsHidden:(BOOL)arg0 animated:(BOOL)arg1;
- (void)toggleTranslucencyViewVisible:(BOOL)arg0;
- (void)setGridOverlayHidden:(BOOL)arg0 animated:(BOOL)arg1;
- (void)rotateImageNinetyDegreesAnimated:(BOOL)arg0 clockwise:(BOOL)arg1;
- (void)isEditing:(BOOL)arg0 resetCropBox:(BOOL)arg1 animated:(BOOL)arg2;
- (void)moveCroppedContentToCenterAnimated:(BOOL)arg0;
- (BOOL)internalLayoutDisabled;
- (void)setDisableForgroundMatching:(BOOL)arg0;
- (void)setAspectRatio:(struct CGSize { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (void)setCropBoxLastEditedSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)rotateAnimationInProgress;
- (long long)cropBoxLastEditedAngle;
- (struct CGSize { double x0; double x1; })cropBoxLastEditedSize;
- (double)cropBoxLastEditedMinZoomScale;
- (double)cropBoxLastEditedZoomScale;
- (void)setRotateAnimationInProgress:(BOOL)arg0;
- (BOOL)aspectRatioLockDimensionSwapEnabled;
- (struct CGSize { double x0; double x1; })originalCropBoxSize;
- (struct CGPoint { double x0; double x1; })originalContentOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cropRegionInsets;
- (void)prepareforRotation;
- (void)performRelayoutForRotation;
- (void)resetLayoutToDefaultAnimated:(BOOL)arg0;
- (void)setSimpleRenderMode:(BOOL)arg0;
- (BOOL)cropBoxAspectRatioIsPortrait;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageCropFrame;
- (void)setCroppingViewsHidden:(BOOL)arg0;
- (void)setBackgroundImageViewHidden:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setGridOverlayHidden:(BOOL)arg0;
- (void)showCoverMaskFirstTime;
- (void)rotateImageNinetyDegreesAnimated:(BOOL)arg0;
- (void)setCroppingStyle:(long long)arg0;
- (BOOL)cropBoxResizeEnabled;
- (BOOL)canBeReset;
- (void)setCropRegionInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (BOOL)simpleRenderMode;
- (void)setInternalLayoutDisabled:(BOOL)arg0;
- (void)setAspectRatioLockDimensionSwapEnabled:(BOOL)arg0;
- (BOOL)croppingViewsHidden;
- (BOOL)gridOverlayHidden;
- (void)setTranslucencyEffect:(id)arg0;
- (BOOL)applyInitialCroppedImageFrame;
- (BOOL)dynamicBlurEffect;
- (BOOL)hasMoved;
- (void)setHasMoved:(BOOL)arg0;
- (void)setOverlayView:(id)arg0;
- (id)overlayView;
- (void)setAspectRatio:(struct CGSize { double x0; double x1; })arg0;
- (void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1;
- (void)setScrollView:(id)arg0;
- (BOOL)editing;
- (void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(double)arg2;
- (void)setMaximumZoomScale:(double)arg0;
- (id)resetTimer;
- (void)performInitialSetup;
- (struct CGSize { double x0; double x1; })imageSize;
- (id)viewForZoomingInScrollView:(id)arg0;
- (id)initWithImage:(id)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)image;
- (id)backgroundImageView;
- (void)setup;
- (void)setEditing:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (struct CGSize { double x0; double x1; })aspectRatio;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setImage:(id)arg0;
- (void)scrollViewDidZoom:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (long long)angle;
- (double)maximumZoomScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)scrollView;
- (void)setAngle:(long long)arg0;
- (id)backgroundContainerView;
- (void)setBackgroundContainerView:(id)arg0;
- (id)foregroundContainerView;
- (void)setForegroundContainerView:(id)arg0;
- (void)setBackgroundImageView:(id)arg0;
- (void)longPressGestureRecognized:(id)arg0;
- (void)setMinimumAspectRatio:(double)arg0;
- (double)minimumAspectRatio;
- (void)startEditing;
- (void)timerTriggered;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageViewFrame;
- (id)gridOverlayView;
- (void)setGridOverlayView:(id)arg0;

@end