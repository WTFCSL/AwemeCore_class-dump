//
//     Generated by private class-dump
//

@class NSString, HTSLiveBonusAuthor, HTSLiveImage, HTSLiveBonusCommerce;

@interface HTSLiveBonus : IESLivePBBaseMessage

@property (nonatomic) long long bonusType;
@property (retain, nonatomic) HTSLiveBonusAuthor *author;
@property (nonatomic) BOOL hasAuthor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *style;
@property (retain, nonatomic) HTSLiveBonusCommerce *commerceInfo;
@property (nonatomic) BOOL hasCommerceInfo;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long source;
@property (retain, nonatomic) HTSLiveImage *label;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) long long sceneId;
@property (nonatomic) BOOL maybeCarp;
@property (nonatomic) long long countdownSecond;

+ (id)descriptor;

@end
