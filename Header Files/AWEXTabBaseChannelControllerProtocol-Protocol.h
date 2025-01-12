//
//     Generated by private class-dump
//

@class NSDictionary, UIViewController;
@protocol AWEXTabChildViewControllerProtocol;

@protocol AWEXTabBaseChannelControllerProtocol <NSObject>

@property (nonatomic, retain) UIViewController<AWEXTabChildViewControllerProtocol> *childVC;
@property (nonatomic) BOOL singleChannelMode;
@property (nonatomic, readonly) BOOL isCurrentChannel;
@property (nonatomic, readonly) NSDictionary *routerParams;

- (id)childVC;
- (void)setChildVC:(id)arg0;
- (BOOL)singleChannelMode;
- (void)setSingleChannelMode:(BOOL)arg0;
- (BOOL)isCurrentChannel;
- (id)routerParams;
- (id)createChildViewController;
- (void)updateSkyLightStatus:(BOOL)arg0;
- (void)updateBackgroundColor:(id)arg0 alpha:(double)arg1;
- (void)changeModelFullScreenStatus:(BOOL)arg0;
- (BOOL)isXTabBarShowing;
- (void)scrollContentOffset:(struct CGPoint { double x0; double x1; })arg0;

@optional

- (BOOL)shouldLazyInitChildVC;
- (void)xtab_channelViewWillAppear:(BOOL)arg0;
- (void)xtab_channelViewDidAppear:(BOOL)arg0;
- (void)xtab_channelViewWillDisappear:(BOOL)arg0;
- (void)xtab_channelViewDidDisappear:(BOOL)arg0;
- (void)xtab_channelDidLoad;
- (void)xtab_channelTopTabContainerDidAppear;
- (void)xtab_channelTopTabContainerDidDisappear;
- (void)xtab_channelTopSegmentControllHidden:(BOOL)arg0;
- (BOOL)verticalPanGestureRecognizerShouldBegin:(id)arg0;
- (void)xtabDidAppear:(BOOL)arg0;
- (id)traceEnterXtabEventWithCustomInfo;
- (void)channelEnterWithModel:(id)arg0;
- (void)channelEnterWithModel:(id)arg0;
- (void)channelLeaveWithModel:(id)arg0;
- (void)channelLeaveWithModel:(id)arg0;
- (BOOL)shouldfillTabbarBackgroudView;
- (void)landingToChannel:(BOOL)arg0;
- (void)landingToChannel:(BOOL)arg0;
- (void)configWithRouterParams:(id)arg0;
- (void)configWithRouterParams:(id)arg0;
- (void)xtabbarDoubleClick;

@end
