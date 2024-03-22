//
//     Generated by private class-dump
//

@class NSString, NSURL, UIView;
@protocol BDXContainerLifecycleProtocol, BDXKitViewProtocol;

@protocol BDXPopupContentProtocol <NSObject>

@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly, nonatomic) NSURL *originURL;
@property (nonatomic) long long bdxContentMode;
@property (readonly, nonatomic) long long viewType;
@property (weak, nonatomic) id<BDXContainerLifecycleProtocol> containerLifecycleDelegate;
@property (retain, nonatomic) id config;
@property (readonly, nonatomic) UIView<BDXKitViewProtocol> *kitView;

- (long long)bdxContentMode;
- (void)loadWithParam:(id)arg0 context:(id)arg1;
- (void)addLoadFailedView:(id)arg0;
- (void)addLoadingView:(id)arg0;
- (BOOL)shouldShowLoadFailedViewWithError:(id)arg0;
- (id)containerLifecycleDelegate;
- (void)handleViewDidAppear;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (void)setBdxContentMode:(long long)arg0;
- (void)setContainerLifecycleDelegate:(id)arg0;
- (id)containerID;
- (long long)viewType;
- (id)originURL;
- (void)reloadWithContext:(id)arg0;
- (void)handleViewDidDisappear;

@optional

- (void)removeLoadingView;
- (void)removeKitView;
- (void)resetKitView;
- (void)handleViewDidAppearOnlyPage;
- (void)handleViewDidDisappearOnlyPage;
- (id)kitView;
- (void)setConfig:(id)arg0;
- (id)config;

@end
