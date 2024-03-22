//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveOfficialCommentConfig, HTSLivePublicAreaCommon, HTSLiveCommentRoleConfig, HTSLiveCommon, NSMutableArray, HTSLiveUser, HTSLiveLandscapeAreaCommon, HTSLiveCommentMedal;

@interface HTSLiveShowChatMessage : IESLivePBBaseMessage

@property (nonatomic) BOOL isOfficalMessage;
@property (nonatomic) BOOL isStarComment;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long episodeId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long agreeMsgId;
@property (nonatomic) BOOL visibleToSender;
@property (nonatomic) int priorityLevel;
@property (nonatomic) int effectType;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (retain, nonatomic) HTSLiveLandscapeAreaCommon *landscapeAreaCommon;
@property (nonatomic) BOOL hasLandscapeAreaCommon;
@property (retain, nonatomic) HTSLiveImage *backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) NSMutableArray *fontColorValueArray;
@property (readonly, nonatomic) unsigned long long fontColorValueArray_Count;
@property (retain, nonatomic) HTSLiveImage *giftImage;
@property (nonatomic) BOOL hasGiftImage;
@property (retain, nonatomic) HTSLiveOfficialCommentConfig *officialCommentConfig;
@property (nonatomic) BOOL hasOfficialCommentConfig;
@property (retain, nonatomic) HTSLiveCommentRoleConfig *commentRole;
@property (nonatomic) BOOL hasCommentRole;
@property (retain, nonatomic) HTSLiveCommentMedal *medal;
@property (nonatomic) BOOL hasMedal;
@property (nonatomic) int vsMessageType;

+ (id)descriptor;

- (BOOL)isStarComment;
- (void)setIsFakeMessage:(BOOL)arg0;
- (BOOL)isFakeMessage;
- (BOOL)isOfficialMessage;

@end
