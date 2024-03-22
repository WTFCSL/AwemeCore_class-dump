//
//     Generated by private class-dump
//

@class NSString, UIImageView, BDPFloatingView_BDPSettingsManagerHg, UIVisualEffectView, BDPUniqueID;
@protocol BDPFloatingDelegate_HG;

@interface BDPFloatingView_HG : UIView <LOTAnimationDelegate, BDPContainerLifeCycleMessage> {
    BOOL _curPositionLeft;
    BOOL _isTouch;
    id<BDPFloatingDelegate_HG> _floatingDelegate;
    BDPFloatingView_BDPSettingsManagerHg *_settingsManager;
    double _radius;
    UIImageView *_icon;
    double _maxDistance;
    BDPUniqueID *_uniqueID;
    UIVisualEffectView *_effectView;
    struct CGPoint { double x; double y; } _safeAreaLeftTop;
    struct CGPoint { double x; double y; } _safeAreaRightBottom;
    struct CGPoint { double x; double y; } _touchBeganPoint;
    struct CGVector { double dx; double dy; } _delta;
}

@property (nonatomic) struct CGPoint { double x; double y; } safeAreaLeftTop;
@property (nonatomic) struct CGPoint { double x; double y; } safeAreaRightBottom;
@property (nonatomic) double radius;
@property (nonatomic) BOOL curPositionLeft;
@property (retain, nonatomic) UIImageView *icon;
@property (nonatomic) struct CGPoint { double x; double y; } touchBeganPoint;
@property (nonatomic) double maxDistance;
@property (nonatomic) BOOL isTouch;
@property (nonatomic) struct CGVector { double dx; double dy; } delta;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFloatingView_BDPSettingsManagerHg *settingsManager;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (readonly, nonatomic) BOOL atCloseZone;
@property (weak, nonatomic) id<BDPFloatingDelegate_HG> floatingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createFloatingViewIfNeededWithSafeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withUniqueID:(id)arg1 delegate:(id)arg2;

- (void)animationViewDidStart:(id)arg0;
- (void)applicationEnterForeGroundWithUniqueID:(id)arg0;
- (void)event:(id)arg0 param:(id)arg1;
- (void)showOn:(id)arg0;
- (id)floatingDelegate;
- (void)setFloatingDelegate:(id)arg0;
- (void)updateSafeArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupIcon;
- (void)setSafeAreaLeftTop:(struct CGPoint { double x0; double x1; })arg0;
- (void)setSafeAreaRightBottom:(struct CGPoint { double x0; double x1; })arg0;
- (void)setCurPositionLeft:(BOOL)arg0;
- (void)setupImageIcon;
- (void)setupLottieIcon;
- (void)setTouchBeganPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setIsTouch:(BOOL)arg0;
- (struct CGPoint { double x0; double x1; })touchBeganPoint;
- (BOOL)isTouch;
- (BOOL)curPositionLeft;
- (BOOL)atCloseZone;
- (void)touchesFinished;
- (struct CGPoint { double x0; double x1; })safeAreaLeftTop;
- (struct CGPoint { double x0; double x1; })safeAreaRightBottom;
- (id)icon;
- (id)init;
- (id)effectView;
- (void).cxx_destruct;
- (id)uniqueID;
- (double)maxDistance;
- (void)setUniqueID:(id)arg0;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)setDelta:(struct CGVector { double x0; double x1; })arg0;
- (double)radius;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)setEffectView:(id)arg0;
- (void)setSettingsManager:(id)arg0;
- (void)setIcon:(id)arg0;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)setRadius:(double)arg0;
- (id)settingsManager;
- (void)dealloc;
- (struct CGVector { double x0; double x1; })delta;
- (void)setMaxDistance:(double)arg0;

@end
