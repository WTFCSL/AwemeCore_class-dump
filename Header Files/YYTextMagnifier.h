//
//     Generated by private class-dump
//

@class UIImage, UIView;

@interface YYTextMagnifier : UIView {
    BOOL _hostVerticalForm;
    BOOL _captureDisabled;
    BOOL _captureFadeAnimation;
    long long _type;
    UIImage *_snapshot;
    UIView *_hostView;
    struct CGSize { double width; double height; } _fitSize;
    struct CGSize { double width; double height; } _snapshotSize;
    struct CGPoint { double x; double y; } _hostCaptureCenter;
    struct CGPoint { double x; double y; } _hostPopoverCenter;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fitSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } snapshotSize;
@property (retain, nonatomic) UIImage *snapshot;
@property (weak, nonatomic) UIView *hostView;
@property (nonatomic) struct CGPoint { double x; double y; } hostCaptureCenter;
@property (nonatomic) struct CGPoint { double x; double y; } hostPopoverCenter;
@property (nonatomic) BOOL hostVerticalForm;
@property (nonatomic) BOOL captureDisabled;
@property (nonatomic) BOOL captureFadeAnimation;

+ (id)magnifierWithType:(long long)arg0;

- (struct CGSize { double x0; double x1; })fitSize;
- (struct CGPoint { double x0; double x1; })hostCaptureCenter;
- (BOOL)captureDisabled;
- (void)setCaptureFadeAnimation:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })hostPopoverCenter;
- (BOOL)captureFadeAnimation;
- (void)setHostCaptureCenter:(struct CGPoint { double x0; double x1; })arg0;
- (void)setHostPopoverCenter:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)hostVerticalForm;
- (void)setHostVerticalForm:(BOOL)arg0;
- (void)setCaptureDisabled:(BOOL)arg0;
- (id)hostView;
- (void)setHostView:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSnapshot:(id)arg0;
- (id)snapshot;
- (struct CGSize { double x0; double x1; })snapshotSize;

@end
