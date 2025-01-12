//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSMutableDictionary;
@protocol IESLiveInteractUserModel;

@protocol IESLivePaidLinkmicRouter <NSObject>

@property (nonatomic) long long paidCount;
@property (nonatomic) long long limitedTime;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long curLinkmicPaidCount;
@property (retain, nonatomic) NSNumber *discountAmount;
@property (readonly, nonatomic) long long toAddPriceValue;
@property (readonly, nonatomic) long long didAddPriceValue;
@property (readonly, nonatomic) long long totalAddPriceValue;
@property (readonly, nonatomic) long long totalPaidAmount;
@property (readonly, nonatomic) unsigned long long addPriceStatus;
@property (nonatomic) unsigned long long paidMode;
@property (readonly, nonatomic) BOOL hasPaidLinkmicOpenedAtLeastOnce;
@property (retain, nonatomic) id<IESLiveInteractUserModel> enlargeEndIncomeAnimationUser;
@property (copy, nonatomic) id /* block */ trackParamsCallback;
@property (nonatomic) BOOL addPriceQueueOpen;
@property (nonatomic) BOOL showPaidQueueSetting;
@property (retain, nonatomic) NSMutableDictionary *paidQueueTrackerParms;
@property (copy, nonatomic) NSString *paidQueueTrackerRequestPage;
@property (nonatomic) long long addQueuePayAmount;

- (void)setDiscountAmount:(id)arg0;
- (id)discountAmount;
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
- (id)source;
- (void)setSource:(id)arg0;
- (void)clean;

@end
