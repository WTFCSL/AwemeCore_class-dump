//
//     Generated by private class-dump
//

@class HTSLiveGiftStruct, HTSLiveText, HTSLiveSendTogether, NextSendParams, ComboHint, GPBInt64Array, HTSLiveGameGiftData, NSMutableArray, NSString, HTSLiveAnchorGiftData, ProfitCheckConfig, HTSLiveDSAlertInfo, HTSLiveExtraEffect, HTSLiveDSLimitCalmPeriod, HTSLiveFreeCellData;

@interface GiftSendResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSString *multiSendToMixUserId;
@property (retain, nonatomic) NSMutableArray *mixToUserIdsArray;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) long long fanTicketCount;
@property (copy, nonatomic) NSString *describe;
@property (nonatomic) long long giftId;
@property (nonatomic) long long groupCount;
@property (nonatomic) long long leftDiamond;
@property (nonatomic) long long repeatCount;
@property (nonatomic) long long comboCount;
@property (nonatomic) long long propDefId;
@property (nonatomic) long long propType;
@property (retain, nonatomic) NSMutableArray *propsArray;
@property (readonly, nonatomic) unsigned long long propsArray_Count;
@property (nonatomic) long long msgId;
@property (retain, nonatomic) HTSLiveFreeCellData *freeCell;
@property (nonatomic) BOOL hasFreeCell;
@property (retain, nonatomic) HTSLiveGameGiftData *gameGift;
@property (nonatomic) BOOL hasGameGift;
@property (retain, nonatomic) NSMutableArray *giftsArray;
@property (readonly, nonatomic) unsigned long long giftsArray_Count;
@property (nonatomic) long long roomFanTicketCount;
@property (nonatomic) long long groupId;
@property (retain, nonatomic) HTSLiveDSLimitCalmPeriod *calmPeriod;
@property (nonatomic) BOOL hasCalmPeriod;
@property (retain, nonatomic) ComboHint *comboHint;
@property (nonatomic) BOOL hasComboHint;
@property (copy, nonatomic) NSString *diyItemInfo;
@property (nonatomic) int multiSendSuccessCount;
@property (nonatomic) long long multiSendToUserId;
@property (retain, nonatomic) HTSLiveAnchorGiftData *anchorGift;
@property (nonatomic) BOOL hasAnchorGift;
@property (retain, nonatomic) GPBInt64Array *toUserIdsArray;
@property (readonly, nonatomic) unsigned long long toUserIdsArray_Count;
@property (nonatomic) long long sendTime;
@property (nonatomic) long long forceDisplayEffects;
@property (retain, nonatomic) HTSLiveGiftStruct *giftStruct;
@property (nonatomic) BOOL hasGiftStruct;
@property (nonatomic) int clientGiftSource;
@property (retain, nonatomic) HTSLiveSendTogether *sendTogether;
@property (nonatomic) BOOL hasSendTogether;
@property (retain, nonatomic) HTSLiveExtraEffect *extraEffect;
@property (nonatomic) BOOL hasExtraEffect;
@property (nonatomic) int multiSendEffectLevel;
@property (retain, nonatomic) ProfitCheckConfig *profitCheckConfig;
@property (nonatomic) BOOL hasProfitCheckConfig;
@property (copy, nonatomic) NSString *pluginInfo;
@property (copy, nonatomic) NSString *cardName;
@property (retain, nonatomic) NextSendParams *nextSendCtl;
@property (nonatomic) BOOL hasNextSendCtl;
@property (retain, nonatomic) NSMutableArray *seriesGiftDataArray;
@property (readonly, nonatomic) unsigned long long seriesGiftDataArray_Count;
@property (retain, nonatomic) HTSLiveDSAlertInfo *dsAlertInfo;
@property (nonatomic) BOOL hasDsAlertInfo;
@property (nonatomic) int repeatTimes;
@property (retain, nonatomic) GPBInt64Array *msgIdsArray;
@property (readonly, nonatomic) unsigned long long msgIdsArray_Count;

+ (id)descriptor;

- (id)multiSendToMixUserId;
- (void)setMultiSendToMixUserId:(id)arg0;
- (id)mixToUserIdsArray;
- (void)setMixToUserIdsArray:(id)arg0;

@end
