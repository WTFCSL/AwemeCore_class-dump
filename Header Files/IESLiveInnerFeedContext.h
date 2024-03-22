//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSArray, TabItem, IESLiveVideoPlayerController, IESLiveInnerFeedTransferFooterView, IGListAdapter, IESLiveDI, IESLiveInnerFeedBaseItemModel, IESLiveEnterRoomAisle, UIViewController;
@protocol IESLivePlayerProtocol;

@interface IESLiveInnerFeedContext : NSObject <IESLiveInnerFeedContextProtocol> {
    BOOL _isClickRoom;
    BOOL _useLoadingStyleFooter;
    BOOL _scrollEnabled;
    BOOL _hasMore;
    BOOL _liveCoverNeedLoadMore;
    BOOL _needRecommendGuideEntrance;
    BOOL _isFromFollowRecommend;
    BOOL _isOrientating;
    BOOL _isAppear;
    BOOL _isMultiTab;
    BOOL _isDefaultTab;
    int _beginDragPosition;
    id<IESLivePlayerProtocol> _player;
    IESLiveVideoPlayerController *_videoPlayer;
    id /* block */ _afterDidLoad;
    NSString *_enterFromMerge;
    NSString *_enterMethod;
    IESLiveEnterRoomAisle *_originRoomAisle;
    IESLiveInnerFeedBaseItemModel *_currentShowItem;
    IESLiveInnerFeedBaseItemModel *_nextShowItem;
    IESLiveInnerFeedBaseItemModel *_lastShowItem;
    unsigned long long _scrollDirection;
    NSNumber *_maxTime;
    long long _recommendDragStyle;
    IESLiveInnerFeedTransferFooterView *_footerView;
    long long _footerStyleSection;
    UIViewController *_containerVC;
    UIViewController *_multiTabContainerVC;
    IGListAdapter *_adapter;
    IESLiveDI *_slideDI;
    long long _providerType;
    NSArray *_items;
    unsigned long long _leapfrogLandscapeCount;
    TabItem *_tabItem;
    NSString *_innerFeedUrl;
    NSString *_replacedFeedUrl;
    NSString *_sourceBtmToken;
}

@property (copy, nonatomic) id /* block */ afterDidLoad;
@property (retain, nonatomic) NSString *enterFromMerge;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) IESLiveEnterRoomAisle *originRoomAisle;
@property (nonatomic) BOOL isClickRoom;
@property (retain, nonatomic) IESLiveInnerFeedBaseItemModel *currentShowItem;
@property (retain, nonatomic) IESLiveInnerFeedBaseItemModel *nextShowItem;
@property (retain, nonatomic) IESLiveInnerFeedBaseItemModel *lastShowItem;
@property (nonatomic) unsigned long long scrollDirection;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) BOOL hasMore;
@property (weak, nonatomic) UIViewController *containerVC;
@property (weak, nonatomic) UIViewController *multiTabContainerVC;
@property (weak, nonatomic) IGListAdapter *adapter;
@property (weak, nonatomic) IESLiveDI *slideDI;
@property (nonatomic) long long providerType;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL isOrientating;
@property (nonatomic) BOOL isAppear;
@property (retain, nonatomic) TabItem *tabItem;
@property (nonatomic) unsigned long long leapfrogLandscapeCount;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) IESLiveVideoPlayerController *videoPlayer;
@property (nonatomic) BOOL useLoadingStyleFooter;
@property (nonatomic) BOOL liveCoverNeedLoadMore;
@property (nonatomic) BOOL needRecommendGuideEntrance;
@property (nonatomic) BOOL isFromFollowRecommend;
@property (retain, nonatomic) NSNumber *maxTime;
@property (nonatomic) long long recommendDragStyle;
@property (retain, nonatomic) IESLiveInnerFeedTransferFooterView *footerView;
@property (nonatomic) long long footerStyleSection;
@property (nonatomic) int beginDragPosition;
@property (nonatomic) BOOL isMultiTab;
@property (nonatomic) BOOL isDefaultTab;
@property (copy, nonatomic) NSString *innerFeedUrl;
@property (copy, nonatomic) NSString *replacedFeedUrl;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setContainerVC:(id)arg0;
- (id)containerVC;
- (void)didSetAttachingDIContext;
- (void)setSourceBtmToken:(id)arg0;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (id)enterFromMerge;
- (void)setEnterFromMerge:(id)arg0;
- (id)sourceBtmToken;
- (id)tabItem;
- (void)setTabItem:(id)arg0;
- (void)setIsMultiTab:(BOOL)arg0;
- (BOOL)isMultiTab;
- (id /* block */)afterDidLoad;
- (void)setAfterDidLoad:(id /* block */)arg0;
- (id)slideDI;
- (BOOL)isDefaultTab;
- (void)setIsDefaultTab:(BOOL)arg0;
- (id)currentShowItem;
- (BOOL)isClickRoom;
- (id)nextShowItem;
- (id)lastShowItem;
- (id)originRoomAisle;
- (void)setIsClickRoom:(BOOL)arg0;
- (long long)recommendDragStyle;
- (void)setRecommendDragStyle:(long long)arg0;
- (BOOL)needRecommendGuideEntrance;
- (long long)footerStyleSection;
- (BOOL)isOrientating;
- (BOOL)isFromFollowRecommend;
- (void)setOriginRoomAisle:(id)arg0;
- (void)setCurrentShowItem:(id)arg0;
- (void)setNextShowItem:(id)arg0;
- (void)setLastShowItem:(id)arg0;
- (BOOL)useLoadingStyleFooter;
- (void)setUseLoadingStyleFooter:(BOOL)arg0;
- (BOOL)liveCoverNeedLoadMore;
- (void)setLiveCoverNeedLoadMore:(BOOL)arg0;
- (void)setNeedRecommendGuideEntrance:(BOOL)arg0;
- (void)setIsFromFollowRecommend:(BOOL)arg0;
- (void)setFooterStyleSection:(long long)arg0;
- (id)multiTabContainerVC;
- (void)setMultiTabContainerVC:(id)arg0;
- (void)setSlideDI:(id)arg0;
- (void)setIsOrientating:(BOOL)arg0;
- (unsigned long long)leapfrogLandscapeCount;
- (void)setLeapfrogLandscapeCount:(unsigned long long)arg0;
- (int)beginDragPosition;
- (void)setBeginDragPosition:(int)arg0;
- (id)innerFeedUrl;
- (void)setInnerFeedUrl:(id)arg0;
- (id)replacedFeedUrl;
- (void)setReplacedFeedUrl:(id)arg0;
- (void)setVideoPlayer:(id)arg0;
- (id)videoPlayer;
- (unsigned long long)scrollDirection;
- (void)setScrollEnabled:(BOOL)arg0;
- (void)setItems:(id)arg0;
- (void)setMaxTime:(id)arg0;
- (id)footerView;
- (BOOL)scrollEnabled;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setScrollDirection:(unsigned long long)arg0;
- (long long)providerType;
- (void)setPlayer:(id)arg0;
- (void)setProviderType:(long long)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (id)maxTime;
- (id)adapter;
- (id)player;
- (void)setAdapter:(id)arg0;

@end