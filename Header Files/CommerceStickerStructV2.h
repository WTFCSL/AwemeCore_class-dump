//
//     Generated by private class-dump
//

@class NSString, UrlStructV2, CommerceStickerUnlockStructV2;

@interface CommerceStickerStructV2 : GPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) BOOL hasId_p;
@property (copy, nonatomic) NSString *adOwnerId;
@property (nonatomic) BOOL hasAdOwnerId;
@property (copy, nonatomic) NSString *adOwnerName;
@property (nonatomic) BOOL hasAdOwnerName;
@property (copy, nonatomic) NSString *detailDesc;
@property (nonatomic) BOOL hasDetailDesc;
@property (copy, nonatomic) NSString *detailLetters;
@property (nonatomic) BOOL hasDetailLetters;
@property (copy, nonatomic) NSString *detailOpenURL;
@property (nonatomic) BOOL hasDetailOpenURL;
@property (copy, nonatomic) NSString *detailWebURL;
@property (nonatomic) BOOL hasDetailWebURL;
@property (copy, nonatomic) NSString *detailWebURLTitle;
@property (nonatomic) BOOL hasDetailWebURLTitle;
@property (copy, nonatomic) NSString *screenDesc;
@property (nonatomic) BOOL hasScreenDesc;
@property (nonatomic) BOOL screenSwitch;
@property (nonatomic) BOOL hasScreenSwitch;
@property (retain, nonatomic) UrlStructV2 *publishIconURL;
@property (nonatomic) BOOL hasPublishIconURL;
@property (copy, nonatomic) NSString *publishLetters;
@property (nonatomic) BOOL hasPublishLetters;
@property (copy, nonatomic) NSString *publishOpenURL;
@property (nonatomic) BOOL hasPublishOpenURL;
@property (copy, nonatomic) NSString *publishWebURL;
@property (nonatomic) BOOL hasPublishWebURL;
@property (copy, nonatomic) NSString *publishWebURLTitle;
@property (nonatomic) BOOL hasPublishWebURLTitle;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) BOOL hasMusicId;
@property (copy, nonatomic) NSString *challengeId;
@property (nonatomic) BOOL hasChallengeId;
@property (retain, nonatomic) UrlStructV2 *screenIcon;
@property (nonatomic) BOOL hasScreenIcon;
@property (nonatomic) long long expireTime;
@property (nonatomic) BOOL hasExpireTime;
@property (retain, nonatomic) CommerceStickerUnlockStructV2 *unlockInfo;
@property (nonatomic) BOOL hasUnlockInfo;

+ (id)descriptor;

@end
