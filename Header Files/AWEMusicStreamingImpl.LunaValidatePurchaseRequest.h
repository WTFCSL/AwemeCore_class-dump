//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicStreamingImpl.LunaValidatePurchaseRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* unknown type, empty encoding */ orderID;
    void /* unknown type, empty encoding */ paymentMethod;
    void /* unknown type, empty encoding */ isExternalSuccesss;
    void /* unknown type, empty encoding */ externalErrorInfo;
}

@property (nonatomic, copy) NSString *orderID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ paymentMethod;
@property (nonatomic) void /* unknown type, empty encoding */ isExternalSuccesss;
@property (nonatomic, copy) NSString *externalErrorInfo;

- (id)orderID;
- (Class)responseModelClass;
- (void)setOrderID:(id)arg0;
- (BOOL)isExternalSuccesss;
- (void)setIsExternalSuccesss:(BOOL)arg0;
- (id)externalErrorInfo;
- (void)setExternalErrorInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)path;
- (id)params;
- (long long)paymentMethod;

@end
