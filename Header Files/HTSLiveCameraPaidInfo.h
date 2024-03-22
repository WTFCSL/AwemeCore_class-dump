//
//     Generated by private class-dump
//

@class HTSLiveCameraPaidInfo_PriceInfo, HTSLivePaidLiveBaseInfo, HTSLiveCameraPaidInfo_PaidLiveBizExtra, HTSLiveAsyncAuthData;

@interface HTSLiveCameraPaidInfo : IESLivePBBaseMessage

@property (nonatomic, getter=isNeedDeliveryNotice) BOOL needDeliveryNotice;
@property (nonatomic) int maxDuration;
@property (nonatomic) long long duration;
@property (retain, nonatomic) HTSLiveCameraPaidInfo_PriceInfo *priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (retain, nonatomic) HTSLivePaidLiveBaseInfo *paidLiveBaseInfo;
@property (nonatomic) BOOL hasPaidLiveBaseInfo;
@property (retain, nonatomic) HTSLiveCameraPaidInfo_PaidLiveBizExtra *paidLiveBizExtra;
@property (nonatomic) BOOL hasPaidLiveBizExtra;
@property (retain, nonatomic) HTSLiveAsyncAuthData *asyncAuthData;
@property (nonatomic) BOOL hasAsyncAuthData;

+ (id)descriptor;

- (void)setNeedDeliveryNotice:(BOOL)arg0;
- (BOOL)isNeedDeliveryNotice;

@end
