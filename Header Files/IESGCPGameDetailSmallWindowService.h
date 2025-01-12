//
//     Generated by private class-dump
//

@class NSDictionary, UIViewController, NSString;

@interface IESGCPGameDetailSmallWindowService : NSObject <IESGCPDIContextSubscriber, IESGCPAudienceDetailActions, IESGCPAudienceDetailSmallWindowRouter> {
    BOOL _isFullScreen;
    BOOL _isManualClosed;
    UIViewController *_container;
    NSDictionary *_gamecpDetailFloatWindowResize;
}

@property (weak, nonatomic) UIViewController *container;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL isManualClosed;
@property (copy, nonatomic) NSDictionary *gamecpDetailFloatWindowResize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showLiveFloatWindow:(BOOL)arg0 extraParam:(id)arg1;
- (void)audienceDetailVCFullHalfScreenStatusDidChange:(BOOL)arg0;
- (void)gameDetailVC_viewDidAppear:(BOOL)arg0 gameDetailVC:(id)arg1;
- (void)gameDetailVC_viewWillDisAppear:(BOOL)arg0 gameDetailVC:(id)arg1;
- (void)willCloseGameDetailView;
- (void)didSetGameCPDIContext;
- (void)hideSmallWindow;
- (void)_unregisterGlobalSmallWindowServiceAllowList;
- (void)_registerGlobalSmallWindowServiceAllowList;
- (void)showSmallWindowWithParam:(id)arg0;
- (BOOL)canShowSmallWidow;
- (BOOL)isManualClosed;
- (id)preferOptions;
- (void)setIsManualClosed:(BOOL)arg0;
- (double)horizontalLiveMaxHeight;
- (id)gamecpDetailFloatWindowResize;
- (void)setGamecpDetailFloatWindowResize:(id)arg0;
- (id)container;
- (BOOL)isFullScreen;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)dealloc;
- (id)initWithContainer:(id)arg0;
- (double)ratio;
- (void)setIsFullScreen:(BOOL)arg0;
- (double)marginBottom;

@end
