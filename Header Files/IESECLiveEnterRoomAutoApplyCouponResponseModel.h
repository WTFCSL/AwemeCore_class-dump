//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECLiveEnterRoomAutoApplyCouponResponseModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_resultCode;
    NSString *_openCartToast;
    NSNumber *_couponID;
}

@property (retain, nonatomic) NSNumber *resultCode;
@property (retain, nonatomic) NSString *openCartToast;
@property (retain, nonatomic) NSNumber *couponID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)couponID;
- (void)setCouponID:(id)arg0;
- (id)openCartToast;
- (void)setOpenCartToast:(id)arg0;
- (void).cxx_destruct;
- (id)resultCode;
- (void)setResultCode:(id)arg0;

@end