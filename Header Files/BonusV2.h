//
//     Generated by private class-dump
//

@class BonusAuthorV2, NSString, BonusCommerceV2;

@interface BonusV2 : GPBMessage

@property (nonatomic) int bonusType;
@property (nonatomic) BOOL hasBonusType;
@property (retain, nonatomic) BonusAuthorV2 *author;
@property (nonatomic) BOOL hasAuthor;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *style;
@property (nonatomic) BOOL hasStyle;
@property (retain, nonatomic) BonusCommerceV2 *commerceInfo;
@property (nonatomic) BOOL hasCommerceInfo;
@property (copy, nonatomic) NSString *openURL;
@property (nonatomic) BOOL hasOpenURL;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL hasToken;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) long long sceneId;
@property (nonatomic) BOOL hasSceneId;
@property (copy, nonatomic) NSString *diggText;
@property (nonatomic) BOOL hasDiggText;
@property (copy, nonatomic) NSString *diggToast;
@property (nonatomic) BOOL hasDiggToast;
@property (nonatomic) BOOL maybeCarp;
@property (nonatomic) BOOL hasMaybeCarp;

+ (id)descriptor;

@end