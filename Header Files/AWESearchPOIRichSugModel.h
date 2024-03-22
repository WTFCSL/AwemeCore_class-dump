//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchPOIRichSugModel : AWEBaseApiModel {
    NSString *_avgPriceText;
    NSString *_locationText;
    NSString *_poiName;
    NSString *_poiType;
    NSString *_distanceText;
    NSString *_poiID;
    NSString *_poiImageURL;
    double _avgPrice;
    double _distance;
}

@property (copy, nonatomic) NSString *avgPriceText;
@property (copy, nonatomic) NSString *locationText;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiType;
@property (copy, nonatomic) NSString *distanceText;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiImageURL;
@property (nonatomic) double avgPrice;
@property (nonatomic) double distance;

+ (id)JSONKeyPathsByPropertyKey;

- (id)poiName;
- (id)poiID;
- (void)setPoiName:(id)arg0;
- (void)setPoiID:(id)arg0;
- (double)avgPrice;
- (void)setAvgPrice:(double)arg0;
- (id)distanceText;
- (void)setDistanceText:(id)arg0;
- (id)avgPriceText;
- (void)setAvgPriceText:(id)arg0;
- (void)setPoiType:(id)arg0;
- (id)poiImageURL;
- (void)setPoiImageURL:(id)arg0;
- (double)distance;
- (void)setDistance:(double)arg0;
- (void).cxx_destruct;
- (id)poiType;
- (id)locationText;
- (void)setLocationText:(id)arg0;

@end