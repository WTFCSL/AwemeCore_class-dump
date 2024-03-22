//
//     Generated by private class-dump
//

@class IESLiveRichTextPiece, IESLiveNormalPaidLinkmicInfo, NSMutableDictionary, HTSLiveNormalPaidLinkmicDescContent, IESLiveLinkmicToolsIDInfoPanel, IESLiveLinkMicAudienceGetInfoBeforeAddPriceResponse, IESLivePaidLinkmicAPI, NSString, NSTimer, IESLivePopupItem, NSNumber, IESLivePaidLinkmicAddPriceAlert, IESLivePaidLinkMicFullLinkMonitor, IESLivePaidLinkmicExplainCardInfo;
@protocol IESLiveRoomService, IESLiveInteractUserModel;

@interface IESLiveInteractivePaidLinkMicSettingModel : NSObject <IESLivePaidLinkmicRouter> {
    BOOL _hasFetchPaidLinkmicBaseInfo;
    BOOL _explainCardOpen;
    BOOL _isAnchor;
    BOOL _addPriceQueueOpen;
    BOOL _showPaidQueueSetting;
    BOOL _hasPaidLinkmicOpenedAtLeastOnce;
    BOOL _isAddPriceAlertInfoLoading;
    BOOL _hasEndedShowDiscountAnimation;
    int _discountMode;
    id<IESLiveRoomService> _room;
    long long _toAddPriceTrackedValue;
    IESLiveNormalPaidLinkmicInfo *_addPriceInfo;
    long long _curLinkmicPaidCount;
    NSNumber *_discountAmount;
    id /* block */ _explainCardInfoShowCallback;
    id /* block */ _trackParamsCallback;
    id /* block */ _waitingUserLeaveCallback;
    id /* block */ _anchorDidChangePaidLinkmicStatusCallback;
    id /* block */ _anchorDidClosePaidLinkmicCallback;
    HTSLiveNormalPaidLinkmicDescContent *_descContent;
    long long _paidCount;
    long long _limitedTime;
    unsigned long long _paidMode;
    NSString *_source;
    id<IESLiveInteractUserModel> _enlargeEndIncomeAnimationUser;
    NSMutableDictionary *_paidQueueTrackerParms;
    NSString *_paidQueueTrackerRequestPage;
    long long _addQueuePayAmount;
    long long _addPriceCount;
    IESLivePaidLinkmicExplainCardInfo *_cardInfo;
    long long _toAddPriceValue;
    long long _didAddPriceValue;
    long long _totalAddPriceValue;
    long long _totalPaidAmount;
    unsigned long long _addPriceStatus;
    IESLivePaidLinkmicAPI *_api;
    IESLivePaidLinkmicAddPriceAlert *_addPriceAlert;
    IESLivePopupItem *_addPriceAlertPopUpItem;
    IESLiveLinkMicAudienceGetInfoBeforeAddPriceResponse *_addPriceAlertInfo;
    IESLiveLinkMicAudienceGetInfoBeforeAddPriceResponse *_trackAddPriceAlertInfo;
    double _paidCloseTimeInterval;
    id /* block */ _addPriceCallback;
    NSTimer *_discountAnimationTimer;
    IESLiveRichTextPiece *_discountAnimationRTP;
    IESLivePaidLinkMicFullLinkMonitor *_paidFullLinkMonitor;
    IESLiveLinkmicToolsIDInfoPanel *_idInfoPanel;
}

@property (retain, nonatomic) IESLivePaidLinkmicExplainCardInfo *cardInfo;
@property (nonatomic) BOOL hasPaidLinkmicOpenedAtLeastOnce;
@property (nonatomic) long long toAddPriceValue;
@property (nonatomic) long long didAddPriceValue;
@property (nonatomic) long long totalAddPriceValue;
@property (nonatomic) long long totalPaidAmount;
@property (nonatomic) unsigned long long addPriceStatus;
@property (retain, nonatomic) IESLivePaidLinkmicAPI *api;
@property (weak, nonatomic) IESLivePaidLinkmicAddPriceAlert *addPriceAlert;
@property (retain, nonatomic) IESLivePopupItem *addPriceAlertPopUpItem;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetInfoBeforeAddPriceResponse *addPriceAlertInfo;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetInfoBeforeAddPriceResponse *trackAddPriceAlertInfo;
@property (nonatomic) BOOL isAddPriceAlertInfoLoading;
@property (nonatomic) double paidCloseTimeInterval;
@property (copy, nonatomic) id /* block */ addPriceCallback;
@property (nonatomic) BOOL hasEndedShowDiscountAnimation;
@property (retain, nonatomic) NSTimer *discountAnimationTimer;
@property (retain, nonatomic) IESLiveRichTextPiece *discountAnimationRTP;
@property (retain, nonatomic) IESLivePaidLinkMicFullLinkMonitor *paidFullLinkMonitor;
@property (retain, nonatomic) IESLiveLinkmicToolsIDInfoPanel *idInfoPanel;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long toAddPriceTrackedValue;
@property (retain, nonatomic) IESLiveNormalPaidLinkmicInfo *addPriceInfo;
@property (nonatomic) int discountMode;
@property (nonatomic) long long curLinkmicPaidCount;
@property (retain, nonatomic) NSNumber *discountAmount;
@property (copy, nonatomic) id /* block */ explainCardInfoShowCallback;
@property (copy, nonatomic) id /* block */ trackParamsCallback;
@property (copy, nonatomic) id /* block */ waitingUserLeaveCallback;
@property (copy, nonatomic) id /* block */ anchorDidChangePaidLinkmicStatusCallback;
@property (copy, nonatomic) id /* block */ anchorDidClosePaidLinkmicCallback;
@property (nonatomic) BOOL hasFetchPaidLinkmicBaseInfo;
@property (retain, nonatomic) HTSLiveNormalPaidLinkmicDescContent *descContent;
@property (nonatomic) BOOL explainCardOpen;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) long long paidCount;
@property (nonatomic) long long limitedTime;
@property (nonatomic) unsigned long long paidMode;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) id<IESLiveInteractUserModel> enlargeEndIncomeAnimationUser;
@property (nonatomic) BOOL addPriceQueueOpen;
@property (nonatomic) BOOL showPaidQueueSetting;
@property (retain, nonatomic) NSMutableDictionary *paidQueueTrackerParms;
@property (copy, nonatomic) NSString *paidQueueTrackerRequestPage;
@property (nonatomic) long long addQueuePayAmount;
@property (nonatomic) long long addPriceCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsAnchor:(BOOL)arg0;
- (void)didSetAttachingDIContext;
- (void)setDiscountAmount:(id)arg0;
- (id)discountAmount;
- (id)p_commonParams;
- (id)descContent;
- (long long)paidCount;
- (void)setPaidCount:(long long)arg0;
- (void)updateWithSettingService:(id)arg0;
- (void)showPaidOptimizeLinkmicViewWithSource:(id)arg0;
- (void)trackAnchorEndPaidLinkmicPlayMode;
- (BOOL)isExplainCardOpen;
- (BOOL)isIntroductionEnabled;
- (id)paidLinkMicTag;
- (id)paidLinkMicIntroduction;
- (id)paidLinkMicTrackCommonParams;
- (void)toAddPrice:(long long)arg0 paidAmount:(long long)arg1 rank:(long long)arg2 expectedRank:(long long)arg3 completion:(id /* block */)arg4;
- (BOOL)paidLinkmicOpen;
- (BOOL)allowPaidLinkmic;
- (void)showAddPriceAlertWithCurrentRank:(long long)arg0 addPriceCallback:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)isVIPRechargePrivilege;
- (id)paidLinkmicDiscountTypeString;
- (void)updateDidAddPriceValue:(long long)arg0 payAmount:(long long)arg1;
- (void)cleanPaidLinkmicOpenedAtLeastOnceStatus;
- (void)trackAddPriceBtnShowWithRank:(long long)arg0;
- (void)trackAddPriceDescShowWithRank:(long long)arg0 expectedRank:(long long)arg1;
- (void)trackClickAddPriceBtnWithRank:(long long)arg0;
- (void)trackAddPriceSuccessWithRank:(long long)arg0;
- (BOOL)enablePaidLinkmicAddPrice;
- (BOOL)enableMultiAddPrice;
- (void)updatePaidQueueSettingWithOpen:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)trackPaidQueueWithEvent:(id)arg0 extraParams:(id)arg1;
- (void)monitorWithEventName:(id)arg0 eventType:(unsigned long long)arg1 extra:(id)arg2 useRoomCommonParams:(BOOL)arg3;
- (void)showLinkmicToolIdInfoPanel;
- (void)hideLinkmicToolIdInfoPanel;
- (long long)limitedTime;
- (void)setLimitedTime:(long long)arg0;
- (long long)curLinkmicPaidCount;
- (void)setCurLinkmicPaidCount:(long long)arg0;
- (long long)toAddPriceValue;
- (long long)didAddPriceValue;
- (long long)totalAddPriceValue;
- (long long)totalPaidAmount;
- (unsigned long long)addPriceStatus;
- (unsigned long long)paidMode;
- (void)setPaidMode:(unsigned long long)arg0;
- (BOOL)hasPaidLinkmicOpenedAtLeastOnce;
- (id)enlargeEndIncomeAnimationUser;
- (void)setEnlargeEndIncomeAnimationUser:(id)arg0;
- (id /* block */)trackParamsCallback;
- (void)setTrackParamsCallback:(id /* block */)arg0;
- (BOOL)addPriceQueueOpen;
- (void)setAddPriceQueueOpen:(BOOL)arg0;
- (BOOL)showPaidQueueSetting;
- (void)setShowPaidQueueSetting:(BOOL)arg0;
- (id)paidQueueTrackerParms;
- (void)setPaidQueueTrackerParms:(id)arg0;
- (id)paidQueueTrackerRequestPage;
- (void)setPaidQueueTrackerRequestPage:(id)arg0;
- (long long)addQueuePayAmount;
- (void)setAddQueuePayAmount:(long long)arg0;
- (int)discountMode;
- (id)paidFullLinkMonitor;
- (void)setExplainCardOpen:(BOOL)arg0;
- (void)setDescContent:(id)arg0;
- (void)setHasPaidLinkmicOpenedAtLeastOnce:(BOOL)arg0;
- (void)setAddPriceInfo:(id)arg0;
- (void)setToAddPriceTrackedValue:(long long)arg0;
- (void)updatePaidCount:(long long)arg0 limitedTime:(long long)arg1 addPrice:(long long)arg2;
- (id /* block */)anchorDidChangePaidLinkmicStatusCallback;
- (void)setAddPriceAlertInfo:(id)arg0;
- (void)setTrackAddPriceAlertInfo:(id)arg0;
- (void)setAddPriceCount:(long long)arg0;
- (id)paidFullLinkMonitorCommonParamsWithExtra:(id)arg0;
- (void)updateAddPriceValue:(long long)arg0;
- (id /* block */)anchorDidClosePaidLinkmicCallback;
- (void)setPaidCloseTimeInterval:(double)arg0;
- (id /* block */)waitingUserLeaveCallback;
- (void)updatePaidCount:(long long)arg0 limitedTime:(long long)arg1 addPrice:(long long)arg2 track:(BOOL)arg3;
- (void)trackAnchorEndPaidLinkmicPlayModeWithPaidCount:(long long)arg0 limitedTime:(long long)arg1;
- (void)trackAnchorStartPaidLinkmicPlayModeWithIsChange:(BOOL)arg0;
- (void)updatePaidLinkMicMode:(unsigned long long)arg0 isClean:(BOOL)arg1;
- (id)currentPaidLinkmicAction;
- (void)switchDiscountAnimationTimerWithNormalPaidLinkMicOpen:(BOOL)arg0;
- (void)trackAudienceAuctionWatchWithIsChange:(BOOL)arg0;
- (void)trackLeaveAudienceAuction;
- (void)setToAddPriceValue:(long long)arg0;
- (void)p_paidLinkmicAddPriceStatusChanged;
- (void)setDidAddPriceValue:(long long)arg0;
- (void)setTotalAddPriceValue:(long long)arg0;
- (void)setTotalPaidAmount:(long long)arg0;
- (void)setAddPriceStatus:(unsigned long long)arg0;
- (id)addPriceAlert;
- (id)addPriceAlertInfo;
- (id /* block */)explainCardInfoShowCallback;
- (id)rechargeableLabelString;
- (id)rechargeableIntroString;
- (id)addPriceInfo;
- (void)setHasFetchPaidLinkmicBaseInfo:(BOOL)arg0;
- (void)startPlaymodeWithIsChange:(BOOL)arg0;
- (BOOL)explainCardOpen;
- (long long)toAddPriceTrackedValue;
- (void)p_trackAddPriceWithEvent:(id)arg0 rank:(long long)arg1 expectedRank:(long long)arg2 addPrice:(long long)arg3 extraParams:(id)arg4;
- (id)trackAddPriceAlertInfo;
- (long long)addPriceCount;
- (void)setAddPriceCallback:(id /* block */)arg0;
- (void)p_getPaidLinkmicAlertInfoAndRefreshUIWithParams:(id)arg0 currentRank:(long long)arg1 addPriceCallback:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)p_showAddPriceAlertWithCurrentRank:(long long)arg0 expectedRank:(long long)arg1 addPriceCallback:(id /* block */)arg2;
- (BOOL)isAddPriceAlertInfoLoading;
- (void)setIsAddPriceAlertInfoLoading:(BOOL)arg0;
- (id /* block */)addPriceCallback;
- (void)setAddPriceAlertPopUpItem:(id)arg0;
- (void)setAddPriceAlert:(id)arg0;
- (void)startDiscountAnimationTimerIfNeed;
- (void)stopDiscountAnimationTimerIfNeedWithIsEnd:(BOOL)arg0;
- (BOOL)hasEndedShowDiscountAnimation;
- (void)p_showDiscountAnimation;
- (void)setDiscountAnimationTimer:(id)arg0;
- (void)setHasEndedShowDiscountAnimation:(BOOL)arg0;
- (id)discountAnimationRTP;
- (void)trackDiscountAnimationShow;
- (void)setDiscountMode:(int)arg0;
- (BOOL)hasFetchPaidLinkmicBaseInfo;
- (id)idInfoPanel;
- (void)setIdInfoPanel:(id)arg0;
- (BOOL)isNormalPaidLinkmicMessage:(id)arg0;
- (void)updateWithLinkmicProfitMessage:(id)arg0;
- (void)updatePaidCount:(long long)arg0 limitedTime:(long long)arg1;
- (void)updatePaidLinkmicInfoWithApplyResponse:(id)arg0;
- (void)updateExplainCardInfo:(id)arg0;
- (BOOL)isPaidLinkmicInfoUpdateMessage:(id)arg0 isAddPriceLinkmic:(BOOL)arg1;
- (id)modelWithCurrentModel;
- (void)setExplainCardInfoShowCallback:(id /* block */)arg0;
- (void)setWaitingUserLeaveCallback:(id /* block */)arg0;
- (void)setAnchorDidChangePaidLinkmicStatusCallback:(id /* block */)arg0;
- (void)setAnchorDidClosePaidLinkmicCallback:(id /* block */)arg0;
- (id)addPriceAlertPopUpItem;
- (double)paidCloseTimeInterval;
- (id)discountAnimationTimer;
- (void)setDiscountAnimationRTP:(id)arg0;
- (void)setPaidFullLinkMonitor:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)setSource:(id)arg0;
- (void)dealloc;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)api;
- (id)cardInfo;
- (void)setCardInfo:(id)arg0;
- (void)clean;
- (void)setApi:(id)arg0;

@end