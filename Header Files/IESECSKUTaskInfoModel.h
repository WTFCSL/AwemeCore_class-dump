//
//     Generated by private class-dump
//

@class NSString, NSNumber, IESECBTMModel;

@interface IESECSKUTaskInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_curSKUID;
    NSString *_curSKUNum;
    NSString *_poiID;
    NSNumber *_installmentCount;
    NSString *_couponID;
    NSString *_orderURL;
    IESECBTMModel *_btmModel;
}

@property (retain, nonatomic) NSString *curSKUID;
@property (retain, nonatomic) NSString *curSKUNum;
@property (retain, nonatomic) NSString *poiID;
@property (retain, nonatomic) NSNumber *installmentCount;
@property (retain, nonatomic) NSString *couponID;
@property (retain, nonatomic) NSString *orderURL;
@property (retain, nonatomic) IESECBTMModel *btmModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)poiID;
- (void)setPoiID:(id)arg0;
- (id)couponID;
- (void)setCouponID:(id)arg0;
- (id)btmModel;
- (void)setBtmModel:(id)arg0;
- (id)curSKUID;
- (id)curSKUNum;
- (void)setCurSKUID:(id)arg0;
- (void)setCurSKUNum:(id)arg0;
- (void).cxx_destruct;
- (id)orderURL;
- (void)setOrderURL:(id)arg0;
- (id)installmentCount;
- (void)setInstallmentCount:(id)arg0;

@end