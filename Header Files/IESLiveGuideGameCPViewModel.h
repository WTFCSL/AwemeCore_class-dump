//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, IESLiveGuideGameCPApi, RACSubject, IESLiveGuideModel, NSArray, IESLiveGuideGameCPBubbleModel, IESLiveGuideGameCPModel;

@interface IESLiveGuideGameCPViewModel : NSObject {
    BOOL _shouldShowPropsProtocol;
    BOOL _hasPromotingGames;
    BOOL _isShowIntroduce;
    BOOL _hasPropPermission;
    BOOL _isAgreePropProtocol;
    BOOL _promotingOptimizeEnable;
    BOOL _originalPromotingValue;
    BOOL _promotionPageUrlEnable;
    long long _anchorStatus;
    long long _containerType;
    NSString *_promotionPageUrl;
    RACSubject *_addGuideToolBarItemSubject;
    RACSubject *_updateGuideItemSubject;
    RACSubject *_jumpToNextPageSubject;
    RACSubject *_updatePromotingGamesSubject;
    RACSubject *_traceEventReportSubject;
    IESLiveGuideGameCPBubbleModel *_bubbleModel;
    HTSEventContext *_trackContext;
    IESLiveGuideModel *_room;
    IESLiveGuideGameCPApi *_api;
    IESLiveGuideGameCPModel *_guideModel;
    NSArray *_propsGameIDs;
}

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *room;
@property (retain, nonatomic) IESLiveGuideGameCPApi *api;
@property (retain, nonatomic) IESLiveGuideGameCPModel *guideModel;
@property (retain, nonatomic) NSArray *propsGameIDs;
@property (nonatomic) BOOL promotingOptimizeEnable;
@property (nonatomic) BOOL originalPromotingValue;
@property (nonatomic) BOOL promotionPageUrlEnable;
@property (copy, nonatomic) NSString *promotionPageUrl;
@property (nonatomic) long long containerType;
@property (nonatomic) BOOL shouldShowPropsProtocol;
@property (nonatomic) long long anchorStatus;
@property (nonatomic) BOOL hasPromotingGames;
@property (nonatomic) BOOL isShowIntroduce;
@property (nonatomic) BOOL hasPropPermission;
@property (nonatomic) BOOL isAgreePropProtocol;
@property (readonly, nonatomic) BOOL isPromotionGamesHasProps;
@property (retain, nonatomic) RACSubject *addGuideToolBarItemSubject;
@property (retain, nonatomic) RACSubject *updateGuideItemSubject;
@property (retain, nonatomic) RACSubject *jumpToNextPageSubject;
@property (retain, nonatomic) RACSubject *updatePromotingGamesSubject;
@property (retain, nonatomic) RACSubject *traceEventReportSubject;
@property (retain, nonatomic) IESLiveGuideGameCPBubbleModel *bubbleModel;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)guideModel;
- (void)setGuideModel:(id)arg0;
- (long long)anchorStatus;
- (void)setAnchorStatus:(long long)arg0;
- (void)setBubbleModel:(id)arg0;
- (id)bubbleModel;
- (BOOL)hasPropPermission;
- (BOOL)isAgreePropProtocol;
- (void)guideToolBarDidClicked;
- (void)anchorApplyAuthority2PromoteWithAnchorID:(id)arg0 status:(id)arg1;
- (id)initWithRoom:(id)arg0 trackContext:(id)arg1 diContext:(id)arg2;
- (void)updateAnchorPromoteWithModel:(id)arg0;
- (void)updateAnchorPromoteStatus:(BOOL)arg0;
- (id)addGuideToolBarItemSubject;
- (id)updateGuideItemSubject;
- (id)updatePromotingGamesSubject;
- (id)jumpToNextPageSubject;
- (id)traceEventReportSubject;
- (BOOL)hasPromotingGames;
- (void)trackGuideItemWithEventName:(id)arg0 source:(id)arg1;
- (void)trackGuideItemEventWithEventName:(id)arg0;
- (void)monitorGameCPWithStatus:(int)arg0 errorCode:(id)arg1 isServerApi:(BOOL)arg2;
- (void)bubbleDidShowed;
- (void)trackIntroPanelWithEventName:(id)arg0;
- (BOOL)isShowIntroduce;
- (void)setIsShowIntroduce:(BOOL)arg0;
- (id)fetchEnablePromotionPageUrl;
- (id)containerStyleSchemaParams;
- (void)updateAnchorPromoteWithParamModel:(id)arg0;
- (BOOL)originalPromotionStatus;
- (void)setHasPromotingGames:(BOOL)arg0;
- (id)promotionPageUrl;
- (void)setPromotionPageUrl:(id)arg0;
- (void)setHasPropPermission:(BOOL)arg0;
- (BOOL)promotingOptimizeEnable;
- (void)traceAnchorDidChangePromoteWithGames:(id)arg0 isSuccess:(BOOL)arg1;
- (void)updateAnchorPromoteStatusWithGameExtraInfo:(id)arg0;
- (void)fetchAnchorPromoteStatus:(BOOL)arg0;
- (void)setOriginalPromotingValue:(BOOL)arg0;
- (void)setIsAgreePropProtocol:(BOOL)arg0;
- (void)fetchPromotionGamesPropsInfo;
- (void)reportGamePromotionPageUrlFailTrack;
- (BOOL)isPromotionGamesHasProps;
- (id)propsGameIDs;
- (BOOL)originalPromotingValue;
- (void)fetchAnchorPromoteStatus:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setPropsGameIDs:(id)arg0;
- (void)fetchTalentEntrance;
- (BOOL)shouldShowPropsProtocol;
- (void)setShouldShowPropsProtocol:(BOOL)arg0;
- (void)setAddGuideToolBarItemSubject:(id)arg0;
- (void)setUpdateGuideItemSubject:(id)arg0;
- (void)setJumpToNextPageSubject:(id)arg0;
- (void)setUpdatePromotingGamesSubject:(id)arg0;
- (void)setTraceEventReportSubject:(id)arg0;
- (void)setPromotingOptimizeEnable:(BOOL)arg0;
- (BOOL)promotionPageUrlEnable;
- (void)setPromotionPageUrlEnable:(BOOL)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)containerType;
- (void)setContainerType:(long long)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
