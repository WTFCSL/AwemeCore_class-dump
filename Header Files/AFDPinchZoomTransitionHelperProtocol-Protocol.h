//
//     Generated by private class-dump
//

@class UIViewController;
@protocol AFDPureModePageViewControllerProtocol;

@protocol AFDPinchZoomTransitionHelperProtocol <NSObject>

+ (BOOL)isInPureModePage;
+ (BOOL)isPureModePageTransition;
+ (void)triggerHaptic;
+ (BOOL)canEnterPinchViewForAwemeModel:(id)arg0;
+ (BOOL)canEnterPinchViewForAwemeModel:(id)arg0;
+ (BOOL)shouldStartZoomInTranstionWithAwemeModel:(id)arg0;
+ (BOOL)shouldStartZoomInTranstionWithAwemeModel:(id)arg0;
+ (BOOL)onlyZoomInWithAwemeModel:(id)arg0;
+ (BOOL)onlyZoomInWithAwemeModel:(id)arg0;
+ (BOOL)isPureModePageAtTop;
+ (void)dismissPureModePageWhenResetIfNeeded;
+ (void)layoutImageView:(id)arg0 inSuperview:(id)arg1;

@property (nonatomic, weak) id contextProvider;
@property (nonatomic, retain) UIViewController<AFDPureModePageViewControllerProtocol> *pureModePageVC;

- (id)pureModePageVC;
- (void)setPureModePageVC:(id)arg0;
- (id)contextProvider;
- (void)setContextProvider:(id)arg0;

@end
