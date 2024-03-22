//
//     Generated by private class-dump
//

@class NSString, AWEURLModel, AWEPOIInfoModel;

@interface AWEPOIIMShareModel : NSObject {
    AWEPOIInfoModel *_poiInfoModel;
    NSString *_poiID;
    NSString *_poiName;
    AWEURLModel *_imageThumb;
    NSString *_address;
    NSString *_formatedDistance;
    NSString *_subtype;
    NSString *_popularity;
    NSString *_cost;
    NSString *_highlightDesc;
    NSString *_rankDesc;
    double _latitude;
    double _longitude;
}

@property (retain, nonatomic) AWEPOIInfoModel *poiInfoModel;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;
@property (retain, nonatomic) AWEURLModel *imageThumb;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *formatedDistance;
@property (copy, nonatomic) NSString *subtype;
@property (copy, nonatomic) NSString *popularity;
@property (copy, nonatomic) NSString *cost;
@property (copy, nonatomic) NSString *highlightDesc;
@property (copy, nonatomic) NSString *rankDesc;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (readonly, copy, nonatomic) NSString *formatedCoordinate;

- (void)setPopularity:(id)arg0;
- (id)poiName;
- (id)poiID;
- (void)setPoiName:(id)arg0;
- (void)setPoiID:(id)arg0;
- (id)rankDesc;
- (void)setRankDesc:(id)arg0;
- (void)setPoiInfoModel:(id)arg0;
- (id)poiInfoModel;
- (id)imageThumb;
- (void)setImageThumb:(id)arg0;
- (id)highlightDesc;
- (void)setHighlightDesc:(id)arg0;
- (void)setFormatedDistance:(id)arg0;
- (id)formatedCoordinate;
- (id)formatedDistance;
- (void)setLongitude:(double)arg0;
- (id)subtype;
- (double)longitude;
- (double)latitude;
- (void)setLatitude:(double)arg0;
- (void).cxx_destruct;
- (void)setAddress:(id)arg0;
- (void)setSubtype:(id)arg0;
- (id)cost;
- (id)popularity;
- (id)address;
- (void)setCost:(id)arg0;

@end