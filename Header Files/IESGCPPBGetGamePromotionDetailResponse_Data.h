//
//     Generated by private class-dump
//

@class IESGCPPBAnchorMsgTip, NSString, IESGCPPBGameCouponSummary, IESGCPPBEvaluationSummary, IESGCPPBPromotionData, NSMutableDictionary, IESGCPPBCommentEntranceInfo, IESGCPPBAnchorConfirmMsgItem, NSMutableArray, IESGCPPBGameGiftInfoList, IESGCPPBGameCPInfo, IESGCPPBGamePropInfoList;

@interface IESGCPPBGetGamePromotionDetailResponse_Data : GPBMessage

@property (retain, nonatomic) IESGCPPBGameCPInfo *info;
@property (nonatomic) BOOL hasInfo;
@property (copy, nonatomic) NSString *upShareRatio;
@property (retain, nonatomic) NSMutableDictionary *shareIntroduce;
@property (readonly, nonatomic) unsigned long long shareIntroduce_Count;
@property (retain, nonatomic) NSMutableDictionary *promotionRule;
@property (readonly, nonatomic) unsigned long long promotionRule_Count;
@property (copy, nonatomic) NSString *anchorRecommend;
@property (copy, nonatomic) NSString *auditStatus;
@property (copy, nonatomic) NSString *promotionStatus;
@property (copy, nonatomic) NSString *downShareRatio;
@property (retain, nonatomic) IESGCPPBAnchorConfirmMsgItem *msgItem;
@property (nonatomic) BOOL hasMsgItem;
@property (retain, nonatomic) IESGCPPBGameGiftInfoList *giftInfos;
@property (nonatomic) BOOL hasGiftInfos;
@property (nonatomic) long long constractEndTime;
@property (retain, nonatomic) IESGCPPBGameCouponSummary *couponSummary;
@property (nonatomic) BOOL hasCouponSummary;
@property (retain, nonatomic) IESGCPPBGamePropInfoList *propInfos;
@property (nonatomic) BOOL hasPropInfos;
@property (nonatomic) long long gameUnionType;
@property (nonatomic) BOOL isPromotedPropGame;
@property (retain, nonatomic) IESGCPPBEvaluationSummary *evaluateSummary;
@property (nonatomic) BOOL hasEvaluateSummary;
@property (retain, nonatomic) NSMutableArray *evaluationDetailArray;
@property (readonly, nonatomic) unsigned long long evaluationDetailArray_Count;
@property (retain, nonatomic) NSMutableArray *fansGroupArray;
@property (readonly, nonatomic) unsigned long long fansGroupArray_Count;
@property (retain, nonatomic) NSMutableArray *officialAccountArray;
@property (readonly, nonatomic) unsigned long long officialAccountArray_Count;
@property (retain, nonatomic) IESGCPPBPromotionData *promotionData;
@property (nonatomic) BOOL hasPromotionData;
@property (nonatomic) long long promotionTaskType;
@property (copy, nonatomic) NSString *promotionTask;
@property (retain, nonatomic) IESGCPPBAnchorMsgTip *msgTip;
@property (nonatomic) BOOL hasMsgTip;
@property (copy, nonatomic) NSString *videoPoint;
@property (copy, nonatomic) NSString *videoPromotionTask;
@property (nonatomic) long long anchorPromoteScene;
@property (nonatomic) long long videoPromotionTaskType;
@property (nonatomic) int previewTaskState;
@property (nonatomic) int previewPromoterState;
@property (copy, nonatomic) NSString *toastOnEntering;
@property (retain, nonatomic) IESGCPPBCommentEntranceInfo *commentEntrance;
@property (nonatomic) BOOL hasCommentEntrance;
@property (retain, nonatomic) NSMutableArray *promotionTaskListArray;
@property (readonly, nonatomic) unsigned long long promotionTaskListArray_Count;
@property (nonatomic) BOOL showCreativeGuidance;
@property (nonatomic) long long promotionBizMode;
@property (retain, nonatomic) NSMutableArray *relativeGamesArray;
@property (readonly, nonatomic) unsigned long long relativeGamesArray_Count;
@property (copy, nonatomic) NSString *tracingData;

+ (id)descriptor;

@end
