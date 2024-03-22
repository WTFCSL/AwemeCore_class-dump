//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface IESLiveWalletModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long userID;
@property (nonatomic) unsigned long long diamondNum;
@property (nonatomic) long long totalMoney;
@property (nonatomic) long long hostIncomePercent;
@property (nonatomic) unsigned long long watermelonNum;
@property (copy, nonatomic) NSString *couponInfo;
@property (retain, nonatomic) NSArray *couponDetail;
@property (nonatomic) unsigned long long missionCurrencyNum;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)couponDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithPBModel:(id)arg0;

@end