//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, HTSLiveImage;

@interface HTSLiveDiamond : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *iapId;
@property (nonatomic) int price;
@property (nonatomic) int exchangePrice;
@property (nonatomic) int diamondCount;
@property (nonatomic) int givingCount;
@property (copy, nonatomic) NSString *describe;
@property (retain, nonatomic) NSMutableArray *currencyPriceArray;
@property (readonly, nonatomic) unsigned long long currencyPriceArray_Count;
@property (copy, nonatomic) NSString *couponId;
@property (nonatomic) int discountPrice;
@property (nonatomic) BOOL hideGivingCount;
@property (nonatomic) BOOL isCustomizedDiamond;
@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (nonatomic) BOOL hasIconImage;

+ (id)descriptor;

@end