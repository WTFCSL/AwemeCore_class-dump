//
//     Generated by private class-dump
//

@class NSMutableDictionary, CADisplayLink, NSMutableSet, LynxRootUI, LynxGlobalObserver;

@interface LynxUIExposure : NSObject {
    int _frameRate;
    id /* block */ _callback;
    BOOL _flag;
    BOOL _enableCheckExposureOptimize;
    BOOL _isStopExposure;
    CADisplayLink *_displayLink;
    LynxRootUI *_rootUI;
    NSMutableDictionary *_exposedLynxUIMap;
    NSMutableSet *_uiInWindowMapNow;
    NSMutableSet *_uiInWindowMapBefore;
    NSMutableSet *_disappearSet;
    NSMutableSet *_appearSet;
    LynxGlobalObserver *_observer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lynxViewOldFrame;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (weak, nonatomic) LynxRootUI *rootUI;
@property (retain, nonatomic) NSMutableDictionary *exposedLynxUIMap;
@property (retain, nonatomic) NSMutableSet *uiInWindowMapNow;
@property (retain, nonatomic) NSMutableSet *uiInWindowMapBefore;
@property (retain, nonatomic) NSMutableSet *disappearSet;
@property (retain, nonatomic) NSMutableSet *appearSet;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lynxViewOldFrame;
@property (retain, nonatomic) LynxGlobalObserver *observer;
@property (nonatomic) BOOL flag;
@property (nonatomic) BOOL enableCheckExposureOptimize;
@property (nonatomic) BOOL isStopExposure;

- (id)rootUI;
- (void)stopExposure:(id)arg0;
- (void)resumeExposure;
- (void)setObserverFrameRate:(int)arg0;
- (void)setEnableCheckExposureOptimize:(BOOL)arg0;
- (BOOL)addLynxUI:(id)arg0 withUniqueIdentifier:(id)arg1 extraData:(id)arg2 useOptions:(id)arg3;
- (void)removeLynxUI:(id)arg0 withUniqueIdentifier:(id)arg1;
- (void)setRootUI:(id)arg0;
- (double)getIntersectionAreaRatio:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 otherRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfUIInWindow:(id)arg0;
- (BOOL)checkIntersect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 otherRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 ratio:(double)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderOfExposureScreen:(id)arg0;
- (BOOL)isLynxViewChanged;
- (void)didExposure;
- (BOOL)uiInWindow:(id)arg0;
- (void)sendEvent:(id)arg0 eventName:(id)arg1;
- (void)addExposureToRunLoop;
- (id)createParam:(id)arg0;
- (void)exposureHandler:(id)arg0;
- (void)destroyExposure;
- (id)exposedLynxUIMap;
- (void)setExposedLynxUIMap:(id)arg0;
- (id)uiInWindowMapNow;
- (void)setUiInWindowMapNow:(id)arg0;
- (id)uiInWindowMapBefore;
- (void)setUiInWindowMapBefore:(id)arg0;
- (id)disappearSet;
- (void)setDisappearSet:(id)arg0;
- (id)appearSet;
- (void)setAppearSet:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lynxViewOldFrame;
- (void)setLynxViewOldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)enableCheckExposureOptimize;
- (BOOL)isStopExposure;
- (void)setIsStopExposure:(BOOL)arg0;
- (id)initWithObserver:(id)arg0;
- (void)setFlag:(BOOL)arg0;
- (void)setDisplayLink:(id)arg0;
- (id)observer;
- (id)init;
- (void).cxx_destruct;
- (BOOL)flag;
- (void)setObserver:(id)arg0;
- (id)displayLink;
- (void)dealloc;
- (void)willMoveToWindow:(BOOL)arg0;
- (void)removeFromRunLoop;
- (void)didMoveToWindow:(BOOL)arg0;

@end
