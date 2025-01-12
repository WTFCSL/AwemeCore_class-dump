//
//     Generated by private class-dump
//

@class EcomWindowRankGuideCardData, SubscribeCardInfo, EndingPageShopCardInfo, SafeCardInfo;

@interface EndingPageGuideCardInfo : IESLivePBBaseMessage

@property (nonatomic) int cardType;
@property (retain, nonatomic) EcomWindowRankGuideCardData *ecomWindowRankData;
@property (nonatomic) BOOL hasEcomWindowRankData;
@property (retain, nonatomic) EndingPageShopCardInfo *shopCardInfo;
@property (nonatomic) BOOL hasShopCardInfo;
@property (retain, nonatomic) SafeCardInfo *safeCardInfo;
@property (nonatomic) BOOL hasSafeCardInfo;
@property (retain, nonatomic) SubscribeCardInfo *subscribeCardInfo;
@property (nonatomic) BOOL hasSubscribeCardInfo;

+ (id)descriptor;

@end
