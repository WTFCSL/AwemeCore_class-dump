//
//     Generated by private class-dump
//

@class RACCompoundDisposable, NSString, UIView;
@protocol IESLiveRecoder;

@interface IESLiveRecoderContainer : UIView <CAAnimationDelegate> {
    BOOL _isAnimating;
    UIView *_snapshotView;
    RACCompoundDisposable *_disposable;
    id<IESLiveRecoder> _camera;
    UIView *_previewView;
}

@property (retain, nonatomic) UIView *snapshotView;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (weak, nonatomic) id<IESLiveRecoder> camera;
@property (retain, nonatomic) UIView *previewView;
@property (nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cameraContainerFrameWithIsLandscape:(BOOL)arg0;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)_createSnapShot;
- (BOOL)_isIOS11;
- (id)imageFromViewByiOS7NewApi;
- (void)_createSnapShotView;
- (void)animateSwitchToPosition:(long long)arg0;
- (BOOL)isAnimating;
- (id)snapshotView;
- (id)camera;
- (void)setCamera:(id)arg0;
- (void).cxx_destruct;
- (void)setPreviewView:(id)arg0;
- (id)previewView;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setSnapshotView:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;

@end
