//
//     Generated by private class-dump
//

@class AWEMainConcernLoginView, NSString, UIView, UIViewController;
@protocol AWEFollowEmptyHintViewControllerProtocol;

@interface AWEFeedLoginAndEmptyViewController : AWEBaseController <AWEFeedControllerProtocol, AWEUserMessage> {
    BOOL _shouldTrackEmptyLater;
    BOOL _shouldTrackEcommerceEmptyLater;
    BOOL _needRefreshRecommendData;
    AWEMainConcernLoginView *_loginView;
    UIViewController<AWEFollowEmptyHintViewControllerProtocol> *_emptyHintViewController;
    UIView *_nearbyEmptyView;
}

@property (retain, nonatomic) AWEMainConcernLoginView *loginView;
@property (retain, nonatomic) UIViewController<AWEFollowEmptyHintViewControllerProtocol> *emptyHintViewController;
@property (retain, nonatomic) UIView *nearbyEmptyView;
@property (nonatomic) BOOL shouldTrackEmptyLater;
@property (nonatomic) BOOL shouldTrackEcommerceEmptyLater;
@property (nonatomic) BOOL needRefreshRecommendData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (id)nearbyEmptyView;
- (id)emptyHintViewController;
- (void)willRefresh;
- (BOOL)emptyScrollViewHiddenState;
- (id)loginView;
- (void)setEmptyHintViewController:(id)arg0;
- (BOOL)shouldTrackEmptyLater;
- (void)trackConcernEmptyView;
- (void)setShouldTrackEmptyLater:(BOOL)arg0;
- (void)setNeedRefreshRecommendData:(BOOL)arg0;
- (BOOL)needRefreshRecommendData;
- (void)beginRefresh;
- (void)refreshCompletion:(id)arg0 error:(id)arg1 needAnimation:(BOOL)arg2;
- (void)onDataSourceReload;
- (void)viewDidLoadAfterTableviewSetup;
- (void)insertAwemeWithUploadSuccess:(id)arg0;
- (void)resetFeedCount;
- (void)addEmptyHintViewControllerToParentView;
- (void)__setupNearbyEmptyView;
- (void)setLoginView:(id)arg0;
- (BOOL)loginViewHiddenState;
- (BOOL)shouldTrackEcommerceEmptyLater;
- (void)trackEcommerceEmptyView;
- (void)setShouldTrackEcommerceEmptyLater:(BOOL)arg0;
- (void)removeEmptyHintViewController;
- (void)_showBadNetworkingState;
- (void)setNearbyEmptyView:(id)arg0;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)dealloc;
- (void)viewDidLoad;

@end
