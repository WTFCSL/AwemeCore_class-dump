//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayMerchantInfo : JSONModel {
    NSString *_merchantId;
    NSString *_merchantName;
    NSString *_merchantShortName;
    NSString *_merchantShortToCustomer;
    NSString *_appId;
    NSString *_intergratedMerchantId;
    NSString *_jhAppId;
}

@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *merchantShortName;
@property (copy, nonatomic) NSString *merchantShortToCustomer;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *intergratedMerchantId;
@property (copy, nonatomic) NSString *jhAppId;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)intergratedMerchantId;
- (id)jhAppId;
- (void)setJhAppId:(id)arg0;
- (id)merchantShortToCustomer;
- (id)merchantShortName;
- (void)setMerchantShortName:(id)arg0;
- (void)setMerchantShortToCustomer:(id)arg0;
- (void)setIntergratedMerchantId:(id)arg0;
- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (id)appId;
- (id)merchantId;
- (void)setMerchantId:(id)arg0;
- (id)merchantName;
- (void)setMerchantName:(id)arg0;

@end