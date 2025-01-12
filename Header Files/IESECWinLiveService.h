//
//     Generated by private class-dump
//

@class FBKVOController, NSString, IESECServiceProxy, NSArray, IESECWinLiveInfoModel, IESECWinLiveGiftModel, IESECWinContext;
@protocol IESECWinDataService, IESECGoodsDetailLiveFloatOnTop, IESECWinOpportunityService, IESECLiveCardModuleInterface;

@interface IESECWinLiveService : NSObject <IESECWinOpportunityProtocol, IESECWinLiveService> {
    IESECWinContext *_context;
    BOOL _liveMuted;
    BOOL _liveRoomTransferring;
    BOOL _shouldTransferToLiveRoomLeaveFinger;
    BOOL _hasShowLivingSale;
    id /* block */ _clickToLiveRoomBlock;
    id /* block */ _clickAuthorToLiveRoomBlock;
    id /* block */ _clickToLiveRoomListBlock;
    id /* block */ _detachMiniWindowBlock;
    id /* block */ _disableMiniWindow;
    id /* block */ _isSmallWindowState;
    id<IESECLiveCardModuleInterface> _cardModule;
    NSString *_innerBtmID;
    IESECServiceProxy<IESECWinDataService> *_dataService;
    IESECServiceProxy<IESECWinDataService> *_dataServiceProxy;
    IESECServiceProxy<IESECWinOpportunityService> *_opportunityService;
    IESECWinLiveInfoModel *_liveInfo;
    id<IESECGoodsDetailLiveFloatOnTop> _liveMiniWindow;
    NSString *_liveTitle;
    NSString *_streamData;
    NSString *_roomID;
    NSString *_anchorID;
    NSArray *_liveCoverUrlList;
    IESECWinLiveGiftModel *_liveGiftModel;
    FBKVOController *_KVOController;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataServiceProxy;
@property (retain, nonatomic) IESECServiceProxy<IESECWinOpportunityService> *opportunityService;
@property (retain, nonatomic) IESECWinLiveInfoModel *liveInfo;
@property (retain, nonatomic) id<IESECGoodsDetailLiveFloatOnTop> liveMiniWindow;
@property (copy, nonatomic) NSString *liveTitle;
@property (copy, nonatomic) NSString *streamData;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSArray *liveCoverUrlList;
@property (retain, nonatomic) IESECWinLiveGiftModel *liveGiftModel;
@property (retain, nonatomic) id<IESECLiveCardModuleInterface> cardModule;
@property (retain, nonatomic) FBKVOController *KVOController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ clickToLiveRoomBlock;
@property (copy, nonatomic) id /* block */ clickAuthorToLiveRoomBlock;
@property (copy, nonatomic) id /* block */ clickToLiveRoomListBlock;
@property (copy, nonatomic) id /* block */ detachMiniWindowBlock;
@property (copy, nonatomic) id /* block */ disableMiniWindow;
@property (copy, nonatomic) id /* block */ isSmallWindowState;
@property (nonatomic) BOOL hasShowLivingSale;
@property (nonatomic, getter=isLiveRoomTransferring) BOOL liveRoomTransferring;
@property (nonatomic, getter=isLiveMuted) BOOL liveMuted;
@property (nonatomic) BOOL shouldTransferToLiveRoomLeaveFinger;
@property (copy, nonatomic) NSString *innerBtmID;

+ (BOOL)isLiveClickClose;

- (id)KVOController;
- (void)setKVOController:(id)arg0;
- (id)anchorID;
- (id)anchorId;
- (void)setAnchorID:(id)arg0;
- (void)setStreamData:(id)arg0;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg0;
- (id)liveTitle;
- (void)setLiveTitle:(id)arg0;
- (BOOL)isShowLive;
- (void)setLiveRoomTransferring:(BOOL)arg0;
- (void)trackLivesdkLiveShow;
- (id)dataService;
- (void)setDataService:(id)arg0;
- (id)cardModule;
- (void)setCardModule:(id)arg0;
- (void)setLiveMiniWindow:(id)arg0;
- (id)liveMiniWindow;
- (void)setLiveMuted:(BOOL)arg0;
- (BOOL)isLiveMuted;
- (double)p_liveMiniWindowTopOffset;
- (BOOL)recordMiniWindowSession;
- (id)currentActiveRoomID;
- (id /* block */)disableMiniWindow;
- (id /* block */)isSmallWindowState;
- (void)unsubscribeLiveCardMessages;
- (void)subscribeLiveCardMessages;
- (void)fetchCardIfNeeded;
- (id)liveCoverUrlList;
- (BOOL)isLiveRoomTransferring;
- (BOOL)shouldTransferToLiveRoomLeaveFinger;
- (void)setShouldTransferToLiveRoomLeaveFinger:(BOOL)arg0;
- (void)trackLivesdkLivecellClick:(unsigned long long)arg0;
- (void)trackLivesdkOpenAudio;
- (void)p_updateCardModuleWithContainerDelegate:(id)arg0 cardViewDelegate:(id)arg1;
- (id)liveCardTrackParams;
- (id)p_passThroughLogDataDict;
- (id)ecomLiveParamsJSONStrOnPreLive;
- (id)liveGiftMetaInfoDict;
- (id)liveGiftModel;
- (id /* block */)clickAuthorToLiveRoomBlock;
- (id /* block */)clickToLiveRoomBlock;
- (double)liveContentHeight;
- (double)liveVisibleHeight;
- (BOOL)isShowMiniWindow;
- (id)getRoomURLWithClickType:(unsigned long long)arg0;
- (void)setupLiveMiniWindowOn:(id)arg0 from:(id)arg1;
- (BOOL)attachLiveMiniWindowIfNeeded;
- (BOOL)detachLiveMiniWindowIfNeeded;
- (id)ecomLiveParamsOnEnterLiveWithClickType:(unsigned long long)arg0;
- (void)setClickToLiveRoomBlock:(id /* block */)arg0;
- (void)setClickAuthorToLiveRoomBlock:(id /* block */)arg0;
- (id /* block */)clickToLiveRoomListBlock;
- (void)setClickToLiveRoomListBlock:(id /* block */)arg0;
- (id /* block */)detachMiniWindowBlock;
- (void)setDetachMiniWindowBlock:(id /* block */)arg0;
- (void)setDisableMiniWindow:(id /* block */)arg0;
- (void)setIsSmallWindowState:(id /* block */)arg0;
- (BOOL)hasShowLivingSale;
- (void)setHasShowLivingSale:(BOOL)arg0;
- (id)innerBtmID;
- (void)setInnerBtmID:(id)arg0;
- (id)opportunityService;
- (void)container_viewDidDisappear:(BOOL)arg0;
- (void)setOpportunityService:(id)arg0;
- (id)dataServiceProxy;
- (BOOL)shouldReuseRoomPlayer;
- (void)p_setLiveMiniWindowActionBlock;
- (void)trackAdLivePlay;
- (void)setDataServiceProxy:(id)arg0;
- (void)setLiveCoverUrlList:(id)arg0;
- (void)setLiveGiftModel:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)dealloc;
- (void)messageReceived:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)streamData;
- (void)updateModel;

@end
