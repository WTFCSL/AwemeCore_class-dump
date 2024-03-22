//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveMemberMessage_EffectConfig, HTSLivePublicAreaCommon, NSMutableDictionary, HTSLiveCommon, HTSLiveUser, HTSLiveText;

@interface HTSLiveMemberMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long memberCount;
@property (retain, nonatomic) HTSLiveUser *operator_p;
@property (nonatomic) BOOL hasOperator_p;
@property (nonatomic) BOOL isSetToAdmin;
@property (nonatomic) BOOL isTopUser;
@property (nonatomic) long long rankScore;
@property (nonatomic) long long topUserNo;
@property (nonatomic) long long enterType;
@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *actionDescription;
@property (nonatomic) long long userId;
@property (retain, nonatomic) HTSLiveMemberMessage_EffectConfig *effectConfig;
@property (nonatomic) BOOL hasEffectConfig;
@property (copy, nonatomic) NSString *popStr;
@property (retain, nonatomic) HTSLiveMemberMessage_EffectConfig *enterEffectConfig;
@property (nonatomic) BOOL hasEnterEffectConfig;
@property (retain, nonatomic) HTSLiveImage *backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) HTSLiveImage *backgroundImageV2;
@property (nonatomic) BOOL hasBackgroundImageV2;
@property (retain, nonatomic) HTSLiveText *anchorDisplayText;
@property (nonatomic) BOOL hasAnchorDisplayText;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (nonatomic) long long userEnterTipType;
@property (nonatomic) long long anchorEnterTipType;
@property (retain, nonatomic) NSMutableDictionary *buriedPoint;
@property (readonly, nonatomic) unsigned long long buriedPoint_Count;
@property (retain, nonatomic) NSMutableDictionary *alternativeEffectConfig;
@property (readonly, nonatomic) unsigned long long alternativeEffectConfig_Count;

+ (id)descriptor;

@end