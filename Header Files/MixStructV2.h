//
//     Generated by private class-dump
//

@class MixChargeStructV2, NSString, UserStructV2, UrlStructV2, MixStatusStructV2, MixStatisStructV2, ShareStructV2, ChargeStrategyStructV2;

@interface MixStructV2 : GPBMessage

@property (copy, nonatomic) NSString *mixId;
@property (nonatomic) BOOL hasMixId;
@property (copy, nonatomic) NSString *mixName;
@property (nonatomic) BOOL hasMixName;
@property (retain, nonatomic) UrlStructV2 *coverURL;
@property (nonatomic) BOOL hasCoverURL;
@property (retain, nonatomic) UrlStructV2 *iconURL;
@property (nonatomic) BOOL hasIconURL;
@property (retain, nonatomic) MixStatusStructV2 *status;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) MixStatisStructV2 *statis;
@property (nonatomic) BOOL hasStatis;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (retain, nonatomic) UserStructV2 *author;
@property (nonatomic) BOOL hasAuthor;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (retain, nonatomic) ShareStructV2 *shareInfo;
@property (nonatomic) BOOL hasShareInfo;
@property (nonatomic) int isSerialMix;
@property (nonatomic) BOOL hasIsSerialMix;
@property (nonatomic) int mixPicType;
@property (nonatomic) BOOL hasMixPicType;
@property (nonatomic) int mixType;
@property (nonatomic) BOOL hasMixType;
@property (nonatomic) int enableAd;
@property (nonatomic) BOOL hasEnableAd;
@property (retain, nonatomic) ChargeStrategyStructV2 *chargeStrategy;
@property (nonatomic) BOOL hasChargeStrategy;
@property (retain, nonatomic) MixChargeStructV2 *chargeInfo;
@property (nonatomic) BOOL hasChargeInfo;

+ (id)descriptor;

- (int)enableAd;
- (int)mixType;
- (int)mixPicType;
- (int)isSerialMix;
- (id)shareInfo;
- (id)extra;
- (id)desc;
- (id)statis;
- (id)status;
- (id)coverURL;
- (id)mixName;
- (id)mixId;

@end
