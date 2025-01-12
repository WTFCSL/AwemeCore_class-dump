//
//     Generated by private class-dump
//

@class NSString;

@interface ACCCouponRollbackResponseData : MTLModel <MTLJSONSerializing> {
    unsigned long long _rollbackResult;
    unsigned long long _couponStatus;
    NSString *_alertTip;
}

@property (nonatomic) unsigned long long rollbackResult;
@property (nonatomic) unsigned long long couponStatus;
@property (copy, nonatomic) NSString *alertTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)couponStatus;
- (void)setCouponStatus:(unsigned long long)arg0;
- (id)alertTip;
- (void)setAlertTip:(id)arg0;
- (unsigned long long)rollbackResult;
- (void)setRollbackResult:(unsigned long long)arg0;
- (void).cxx_destruct;

@end
