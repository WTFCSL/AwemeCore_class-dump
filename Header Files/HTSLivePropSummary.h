//
//     Generated by private class-dump
//

@class NSString, HTSLiveBanner, HTSLiveImage, HTSLiveGiftStruct, NSMutableArray;

@interface HTSLivePropSummary : IESLivePBBaseMessage

@property (nonatomic) long long primaryEffectId;
@property (nonatomic) long long nextExpire;
@property (copy, nonatomic) NSString *description_p;
@property (nonatomic) long long propDefId;
@property (copy, nonatomic) NSString *manual;
@property (nonatomic) long long diamond;
@property (nonatomic) BOOL reddotTip;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) int count;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HTSLiveGiftStruct *gift;
@property (nonatomic) BOOL hasGift;
@property (retain, nonatomic) HTSLiveImage *labelIcon;
@property (nonatomic) BOOL hasLabelIcon;
@property (nonatomic) BOOL isFragment;
@property (nonatomic) long long fragmentsCompoundCount;
@property (nonatomic) long long isAwemeFreeGift;
@property (retain, nonatomic) HTSLiveImage *diamondIcon;
@property (nonatomic) BOOL hasDiamondIcon;
@property (retain, nonatomic) HTSLiveBanner *banner;
@property (nonatomic) BOOL hasBanner;
@property (nonatomic) long long propDefType;
@property (retain, nonatomic) NSMutableArray *giftsArray;
@property (readonly, nonatomic) unsigned long long giftsArray_Count;
@property (copy, nonatomic) NSString *schemeURL;
@property (nonatomic) BOOL isDisplayedOnPanel;
@property (nonatomic) long long propDefSubType;
@property (nonatomic) BOOL setGray;
@property (copy, nonatomic) NSString *propDescription;
@property (copy, nonatomic) NSString *expireDescription;
@property (copy, nonatomic) NSString *refId;

+ (id)descriptor;

- (BOOL)canCombo;
- (BOOL)isPKPropType;
- (BOOL)canGroup;
- (id)description;

@end