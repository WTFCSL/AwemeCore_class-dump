//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveLocalLifeCardNearStoreModel : MTLModel <MTLJSONSerializing> {
    NSString *_distanceText;
    NSString *_poiTotalText;
    NSString *_poiName;
    NSString *_isShowDistantModule;
    NSString *_distantKm;
    NSString *_applicableStore;
    NSString *_isStoreNameShow;
    NSString *_deliveryTime;
    NSString *_distanceInfoType;
    NSString *_poiTotalType;
}

@property (copy, nonatomic) NSString *distanceText;
@property (copy, nonatomic) NSString *poiTotalText;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *isShowDistantModule;
@property (copy, nonatomic) NSString *distantKm;
@property (copy, nonatomic) NSString *applicableStore;
@property (copy, nonatomic) NSString *isStoreNameShow;
@property (copy, nonatomic) NSString *deliveryTime;
@property (copy, nonatomic) NSString *distanceInfoType;
@property (copy, nonatomic) NSString *poiTotalType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)poiName;
- (void)setPoiName:(id)arg0;
- (id)distanceText;
- (void)setDistanceText:(id)arg0;
- (id)poiTotalText;
- (void)setPoiTotalText:(id)arg0;
- (id)isShowDistantModule;
- (void)setIsShowDistantModule:(id)arg0;
- (id)distantKm;
- (void)setDistantKm:(id)arg0;
- (id)applicableStore;
- (void)setApplicableStore:(id)arg0;
- (id)isStoreNameShow;
- (void)setIsStoreNameShow:(id)arg0;
- (id)distanceInfoType;
- (void)setDistanceInfoType:(id)arg0;
- (id)poiTotalType;
- (void)setPoiTotalType:(id)arg0;
- (void).cxx_destruct;
- (void)setDeliveryTime:(id)arg0;
- (id)deliveryTime;

@end