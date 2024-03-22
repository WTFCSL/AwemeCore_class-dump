//
//     Generated by private class-dump
//

@class NSString, UIViewController;
@protocol AWETeenPureModePageViewControllerProtocol;

@interface AWETeenPinchZoomTransitionHelper : NSObject <AWETeenPinchZoomTransitionHelperProtocol> {
    id _contextProvider;
    UIViewController<AWETeenPureModePageViewControllerProtocol> *_pureModePageVC;
}

@property (weak, nonatomic) id contextProvider;
@property (retain, nonatomic) UIViewController<AWETeenPureModePageViewControllerProtocol> *pureModePageVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInPureModePage;
+ (double)scaleThresholdForPatternType:(unsigned long long)arg0;
+ (BOOL)isPureModePageTransition;
+ (BOOL)shouldStartZoomInTranstionWithAwemeModel:(id)arg0;
+ (BOOL)onlyZoomInWithAwemeModel:(id)arg0;
+ (void)dismissPureModePageWhenResetIfNeeded;
+ (void)changeToAnchorPoint:(struct CGPoint { double x0; double x1; })arg0 withoutMovingForView:(id)arg1;
+ (id)tryToGetPureModePageVC;

- (id)pureModePageVC;
- (void)setPureModePageVC:(id)arg0;
- (void).cxx_destruct;
- (id)contextProvider;
- (void)setContextProvider:(id)arg0;

@end