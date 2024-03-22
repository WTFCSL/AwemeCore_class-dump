//
//     Generated by private class-dump
//

@class NSString, TabResponse, IESLiveFeedDrawerViewControllerContext, HTSEventContext, NSDate, NSArray, UIViewController;
@protocol IESLiveDrawerFeedControllerProtocol, IESLiveFeedDrawerSectionControllerDelegate;

@interface IESLiveFeedSectionController : IGListSectionController <IGListDisplayDelegate, IESLiveDrawerFeedControllerDelegate, IESLiveFeedViewControllerDelegate, IGListDiffable> {
    BOOL _disableRefresh;
    BOOL _isClickToAppear;
    BOOL _isFirstLoad;
    BOOL _isAppear;
    id<IESLiveFeedDrawerSectionControllerDelegate> _delegate;
    IESLiveFeedDrawerViewControllerContext *_context;
    HTSEventContext *_trackContext;
    long long _targetIndex;
    double _targetIndexMaskHeight;
    NSArray *_allSectionControllers;
    TabResponse *_tabModel;
    UIViewController<IESLiveDrawerFeedControllerProtocol> *_feedViewController;
    NSDate *_beginRefreshDate;
    NSDate *_beginLoadMoreDate;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
}

@property (retain, nonatomic) TabResponse *tabModel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) UIViewController<IESLiveDrawerFeedControllerProtocol> *feedViewController;
@property (retain, nonatomic) NSDate *beginRefreshDate;
@property (retain, nonatomic) NSDate *beginLoadMoreDate;
@property (nonatomic) BOOL isFirstLoad;
@property (nonatomic) BOOL isAppear;
@property (weak, nonatomic) id<IESLiveFeedDrawerSectionControllerDelegate> delegate;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;
@property (nonatomic) BOOL disableRefresh;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL isClickToAppear;
@property (nonatomic) long long targetIndex;
@property (nonatomic) double targetIndexMaskHeight;
@property (weak, nonatomic) NSArray *allSectionControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)setIsFirstLoad:(BOOL)arg0;
- (void)didSetAttachingDIContext;
- (id)cellForItemAtIndex:(long long)arg0;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)setFeedViewController:(id)arg0;
- (void)refreshLayout:(BOOL)arg0;
- (void)setTabModel:(id)arg0;
- (id)tabModel;
- (void)trackAppear;
- (BOOL)canHideWithGesture;
- (void)updateRoomService:(id)arg0;
- (void)sendDidSelectedSection;
- (id)initWithTabModel:(id)arg0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1;
- (void)updateCurrentVerticalInfo:(id)arg0 roomId:(id)arg1;
- (BOOL)disableRefresh;
- (void)setDisableRefresh:(BOOL)arg0;
- (void)sendDidUnSelectedSection;
- (void)setAllSectionControllers:(id)arg0;
- (void)setIsClickToAppear:(BOOL)arg0;
- (void)liveFeedDidEndRefresh:(BOOL)arg0;
- (void)liveFeedDidEndLoadMore:(BOOL)arg0;
- (void)liveFeedWillBeginRefresh;
- (void)liveFeedWillBeginLoadMore;
- (void)liveFeedViewControllerDidScroll:(id)arg0;
- (void)liveFeedViewControllerDidScrollToTop:(id)arg0;
- (id)allSectionControllers;
- (void)setBeginRefreshDate:(id)arg0;
- (void)setBeginLoadMoreDate:(id)arg0;
- (id)beginRefreshDate;
- (void)trackFirstShow:(id)arg0;
- (void)trackRefresh;
- (id)beginLoadMoreDate;
- (void)trackLoadMore;
- (BOOL)isClickToAppear;
- (double)targetIndexMaskHeight;
- (void)setTargetIndexMaskHeight:(double)arg0;
- (void)refresh;
- (void)setInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setTargetIndex:(long long)arg0;
- (long long)targetIndex;
- (id)delegate;
- (id)context;
- (BOOL)hasData;
- (void)setDelegate:(id)arg0;
- (BOOL)isRefreshing;
- (BOOL)isFirstLoad;
- (id)feedViewController;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end