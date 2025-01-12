//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWELifeShelfCardListItemCardDataTicket : MTLModel <MTLJSONSerializing> {
    BOOL _supportAutoCollect;
    NSString *_couponRule;
    NSString *_couponType;
    NSString *_ticketMerchantId;
    NSString *_postTicketPrice;
    unsigned long long _couponStatus;
    NSNumber *_launchID;
    NSString *_launchIDV2;
    NSNumber *_launchType;
    NSString *_benefitID;
    NSNumber *_benefitType;
    NSString *_xidempotentId;
    NSNumber *_assignRecordID;
    NSNumber *_couponTypeNumber;
}

@property (copy, nonatomic) NSString *couponRule;
@property (copy, nonatomic) NSString *couponType;
@property (copy, nonatomic) NSString *ticketMerchantId;
@property (copy, nonatomic) NSString *postTicketPrice;
@property (nonatomic) BOOL supportAutoCollect;
@property (nonatomic) unsigned long long couponStatus;
@property (copy, nonatomic) NSNumber *launchID;
@property (copy, nonatomic) NSString *launchIDV2;
@property (copy, nonatomic) NSNumber *launchType;
@property (copy, nonatomic) NSString *benefitID;
@property (copy, nonatomic) NSNumber *benefitType;
@property (copy, nonatomic) NSString *xidempotentId;
@property (copy, nonatomic) NSNumber *assignRecordID;
@property (copy, nonatomic) NSNumber *couponTypeNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setLaunchID:(id)arg0;
- (id)launchID;
- (id)couponType;
- (unsigned long long)couponStatus;
- (void)setCouponStatus:(unsigned long long)arg0;
- (void)setCouponType:(id)arg0;
- (id)transformCouponStatusFromNumberToString;
- (id)couponRule;
- (void)setCouponRule:(id)arg0;
- (id)postTicketPrice;
- (void)setPostTicketPrice:(id)arg0;
- (id)ticketMerchantId;
- (void)setTicketMerchantId:(id)arg0;
- (BOOL)supportAutoCollect;
- (void)setSupportAutoCollect:(BOOL)arg0;
- (id)launchIDV2;
- (void)setLaunchIDV2:(id)arg0;
- (id)benefitID;
- (void)setBenefitID:(id)arg0;
- (id)benefitType;
- (void)setBenefitType:(id)arg0;
- (id)xidempotentId;
- (void)setXidempotentId:(id)arg0;
- (id)assignRecordID;
- (void)setAssignRecordID:(id)arg0;
- (id)couponTypeNumber;
- (void)setCouponTypeNumber:(id)arg0;
- (void).cxx_destruct;
- (id)launchType;
- (void)setLaunchType:(id)arg0;

@end
