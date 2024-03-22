//
//     Generated by private class-dump
//

@class NSString;

@interface ACCFlowerRedPacketInfo : MTLModel {
    NSString *_uniqueCreationID;
    NSString *_couponId;
    long long _couponCount;
    NSString *_couponOrderId;
    NSString *_cashRedPacketId;
    NSString *_cashPacketExtra;
    NSString *_cashOutOrderId;
}

@property (readonly, copy, nonatomic) NSString *uniqueCreationID;
@property (copy, nonatomic) NSString *couponId;
@property (nonatomic) long long couponCount;
@property (copy, nonatomic) NSString *couponOrderId;
@property (copy, nonatomic) NSString *cashRedPacketId;
@property (copy, nonatomic) NSString *cashPacketExtra;
@property (copy, nonatomic) NSString *cashOutOrderId;

- (void)setCouponId:(id)arg0;
- (id)couponId;
- (void)setCouponCount:(long long)arg0;
- (long long)couponCount;
- (id)outOrderId;
- (void)setCashRedPacketId:(id)arg0;
- (void)setCashOutOrderId:(id)arg0;
- (void)setCashPacketExtra:(id)arg0;
- (id)uniqueCreationID;
- (id)initWithCreationID:(id)arg0;
- (unsigned long long)currentAssetType;
- (id)couponOrderId;
- (id)cashRedPacketId;
- (id)cashPacketExtra;
- (id)cashOutOrderId;
- (void)setCouponOrderId:(id)arg0;
- (void)rebuildCreationID;
- (void).cxx_destruct;

@end
