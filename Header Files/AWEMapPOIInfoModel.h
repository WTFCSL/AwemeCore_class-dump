//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEMapPOIInfoModel : NSObject {
    BOOL _isLocal;
    NSString *_poiID;
    NSString *_poiName;
    NSString *_poiBackendType;
    NSString *_poiAddress;
    NSString *_cityCode;
    NSNumber *_longitudeGCJ;
    NSNumber *_latitudeGCJ;
}

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiBackendType;
@property (copy, nonatomic) NSString *poiAddress;
@property (copy, nonatomic) NSString *cityCode;
@property (retain, nonatomic) NSNumber *longitudeGCJ;
@property (retain, nonatomic) NSNumber *latitudeGCJ;
@property (nonatomic) BOOL isLocal;

- (id)poiName;
- (id)poiID;
- (id)poiBackendType;
- (void)setPoiBackendType:(id)arg0;
- (id)poiAddress;
- (void)setPoiAddress:(id)arg0;
- (void)setPoiName:(id)arg0;
- (void)setPoiID:(id)arg0;
- (id)latitudeGCJ;
- (void)setLatitudeGCJ:(id)arg0;
- (id)longitudeGCJ;
- (void)setLongitudeGCJ:(id)arg0;
- (void)setIsLocal:(BOOL)arg0;
- (BOOL)isLocal;
- (void).cxx_destruct;
- (id)cityCode;
- (void)setCityCode:(id)arg0;

@end
