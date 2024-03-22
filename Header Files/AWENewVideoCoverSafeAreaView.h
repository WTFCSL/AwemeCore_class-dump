//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol ACCStickerContainerProtocol, ACCStickerEventFlowProtocol;

@interface AWENewVideoCoverSafeAreaView : UIView <ACCStickerSafeAreaProtocol> {
    BOOL _fastPanning;
    UIView<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> *_stickerContainer;
    double _previousScale;
    double _currentGestureScale;
    struct CGSize { double width; double height; } _mediaActualSize;
    struct CGPoint { double x; double y; } _previousCenter;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _previousTransform;
}

@property (nonatomic) BOOL fastPanning;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } previousTransform;
@property (nonatomic) struct CGPoint { double x; double y; } previousCenter;
@property (nonatomic) double previousScale;
@property (nonatomic) double currentGestureScale;
@property (nonatomic) struct CGSize { double width; double height; } mediaActualSize;
@property (weak, nonatomic) UIView<ACCStickerContainerProtocol, ACCStickerEventFlowProtocol> *stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPlugin;

- (id)stickerContainer;
- (void)setMediaActualSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setStickerContainer:(id)arg0;
- (BOOL)featureSupportSticker:(id)arg0;
- (void)playerFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)sticker:(id)arg0 willHandleGesture:(id)arg1;
- (void)sticker:(id)arg0 didHandleGesture:(id)arg1;
- (void)sticker:(id)arg0 didEndGesture:(id)arg1;
- (struct CGSize { double x0; double x1; })mediaActualSize;
- (struct CGPoint { double x0; double x1; })fixStickerView:(id)arg0 withWillChangeLocationWithCenter:(struct CGPoint { double x0; double x1; })arg1;
- (BOOL)shouldLimitStikerInMediaView:(id)arg0;
- (BOOL)fastPanning;
- (void)setFastPanning:(BOOL)arg0;
- (void)setPreviousTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)setPreviousCenter:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isStickerCenterOutMediaArea:(id)arg0;
- (void)setCurrentGestureScale:(double)arg0;
- (long long)implementedContainerFeature;
- (struct CGPoint { double x0; double x1; })fixOperatingStickerView:(id)arg0 withWillChangeLocationWithCenter:(struct CGPoint { double x0; double x1; })arg1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previousTransform;
- (struct CGPoint { double x0; double x1; })previousCenter;
- (double)currentGestureScale;
- (void)loadPlugin;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)pluginView;
- (double)previousScale;
- (void)setPreviousScale:(double)arg0;

@end