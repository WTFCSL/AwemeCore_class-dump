//
//     Generated by private class-dump
//

@class IESLivePublicScreenView, HTSEventContext, NSString, IESLiveComponentContext, NSNumber, IESLivePublicScreenInfoModel;
@protocol HTSLiveMessageListScrollActions, IESLivePublicScreenAdapterUpdaterProtocol, IESLivePublicScreenNodeManagerProtocol, UITableViewDelegate, UITableViewDataSource, IESLiveRoomServiceAdapter;

@interface IESLivePublicScreenViewModel : NSObject <IESLivePublicScreenLifeCircleAction, IESLivePublicScreenNodeManagerDelegate, IESLiveMessageListCellViewDelegate, IESLiveTableViewScrollDelegate, IESLiveListViewEventDelegate, HTSLiveFeedScrollActions> {
    BOOL _feedGesScrolling;
    BOOL _messageListEnableSlide;
    BOOL _didStopRefresh;
    BOOL _enableUpdateDataSource;
    IESLivePublicScreenView *_publicScreen;
    id<IESLivePublicScreenAdapterUpdaterProtocol, UITableViewDelegate, UITableViewDataSource> _adapterUpdater;
    long long _unreadMessageCount;
    IESLivePublicScreenInfoModel *_publicScreenInfoModel;
    long long _audienceMessageListSlideInteractionCase;
    id<HTSLiveMessageListScrollActions> _scrollDispatcher;
    NSNumber *_userInteractionEnabledBeforeKeyboardHide;
    id<IESLiveRoomServiceAdapter> _room;
    HTSEventContext *_eventContext;
    IESLiveComponentContext *_componentContext;
    id<IESLivePublicScreenNodeManagerProtocol> _nodeManager;
}

@property (retain, nonatomic) id<IESLivePublicScreenAdapterUpdaterProtocol, UITableViewDelegate, UITableViewDataSource> adapterUpdater;
@property (retain, nonatomic) IESLivePublicScreenInfoModel *publicScreenInfoModel;
@property (nonatomic) long long audienceMessageListSlideInteractionCase;
@property (nonatomic) BOOL feedGesScrolling;
@property (nonatomic) BOOL messageListEnableSlide;
@property (retain, nonatomic) id<HTSLiveMessageListScrollActions> scrollDispatcher;
@property (retain, nonatomic) NSNumber *userInteractionEnabledBeforeKeyboardHide;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLivePublicScreenNodeManagerProtocol> nodeManager;
@property (nonatomic) BOOL didStopRefresh;
@property (nonatomic) BOOL enableUpdateDataSource;
@property (nonatomic) long long unreadMessageCount;
@property (weak, nonatomic) IESLivePublicScreenView *publicScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)feedCollectionViewWillBeginDragging:(id)arg0;
- (void)feedCollectionViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)feedCollectionViewDidEndDecelerating:(id)arg0;
- (void)feedCollectionViewScrollBack;
- (void)setEventContext:(id)arg0;
- (void)clearUnreadCount;
- (long long)audienceMessageListSlideInteractionCase;
- (void)willUnmount;
- (void)publicScreenWillAppearFromInfoModel:(id)arg0 toInfoModel:(id)arg1;
- (void)publicScreenWillAppearWithInfoModel:(id)arg0;
- (void)publicScreenWillActiveWithInfoModel:(id)arg0;
- (void)publicScreenWillActiveFromInfoModel:(id)arg0 toInfoModel:(id)arg1;
- (void)touchCellWithPoint:(struct CGPoint { double x0; double x1; })arg0 node:(id)arg1 cell:(id)arg2;
- (void)longPressCellView:(id)arg0 node:(id)arg1;
- (void)enableUpdateDataSource:(BOOL)arg0;
- (id)publicScreenInfoModel;
- (void)startRefresh;
- (id)publicScreen;
- (void)updateMessageListWidth:(double)arg0;
- (id)initWithInfoModel:(id)arg0 room:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
- (void)refreshUnreadTipView;
- (void)willOpenInLandscape;
- (void)willCloseInLandscape;
- (id)scrollDispatcher;
- (void)stopRefresh;
- (void)touchCellShowUserCardWithNode:(id)arg0;
- (void)nodeManager:(id)arg0 didCommitData:(id)arg1;
- (id)adapterUpdater;
- (void)willAppearFromInfoModel:(id)arg0;
- (void)willDisappearToInfoModel:(id)arg0;
- (void)setUnreadMessageCount:(long long)arg0;
- (id)nodeManager;
- (BOOL)didStopRefresh;
- (BOOL)enableUpdateDataSource;
- (BOOL)shouldEnableUpdateDataSourceWithCommitData:(id)arg0;
- (id)setupAdapterUpdater;
- (id)setupNodeManagerWithRefreshConfig:(id)arg0;
- (void)addSubscriberForMessages;
- (void)updateUnreadMessageCountWithCommitData:(id)arg0;
- (void)setPublicScreenInfoModel:(id)arg0;
- (void)setupPublicScreenViewModel;
- (void)setAdapterUpdater:(id)arg0;
- (void)setAudienceMessageListSlideInteractionCase:(long long)arg0;
- (void)setPublicScreen:(id)arg0;
- (BOOL)feedGesScrolling;
- (BOOL)messageListEnableSlide;
- (void)setMessageListEnableSlide:(BOOL)arg0;
- (void)makeInnserScrollViewScrollFirst:(id)arg0 top:(BOOL)arg1 bottom:(BOOL)arg2;
- (void)stopAutoUpdateList:(id)arg0;
- (void)touchListView:(id)arg0;
- (BOOL)shouldBeginPanGesture;
- (void)setScrollDispatcher:(id)arg0;
- (id)userInteractionEnabledBeforeKeyboardHide;
- (void)setUserInteractionEnabledBeforeKeyboardHide:(id)arg0;
- (BOOL)nodeManager:(id)arg0 reloadSingleNode:(id)arg1;
- (void)setDidStopRefresh:(BOOL)arg0;
- (void)setEnableUpdateDataSource:(BOOL)arg0;
- (void)setNodeManager:(id)arg0;
- (void)setFeedGesScrolling:(BOOL)arg0;
- (void)didBind;
- (id)setupDefaultRefreshConfig;
- (id)mergeOtherRefreshConfig:(id)arg0;
- (void)willDeactiveToInfoModel:(id)arg0;
- (void)willActiveFromInfoModel:(id)arg0;
- (void)handleTapUnreadViewAction;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)scrollViewDidScroll:(id)arg0;
- (id)eventContext;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (long long)unreadMessageCount;

@end
