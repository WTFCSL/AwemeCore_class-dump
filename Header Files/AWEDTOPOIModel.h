//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEDTOPOIModel : MTLModel <MTLJSONSerializing> {
    NSString *_sourcePoiId;
    NSString *_sourcePoiName;
    NSString *_selectPoiId;
    NSString *_selectPoiName;
    NSString *_poiRatingId;
    NSString *_poiRatingDesc;
    long long _activityId;
    NSString *_activityTitle;
    NSString *_poiTag;
    NSString *_poiIndirect;
    double _poiLatitude;
    double _poiLongitude;
    NSString *_poiBackendType;
    NSString *_poiAddress;
    NSString *_poiCpsInfo;
    long long _poiTabId;
    NSString *_poiContentExtra;
    long long _poiRatingGrade;
    NSString *_poiListInfo;
    long long _poiVideoType;
    NSString *_searchRegionType;
    NSDictionary *_publishParams;
    NSDictionary *_poiSelectParams;
}

@property (copy, nonatomic) NSString *sourcePoiId;
@property (copy, nonatomic) NSString *sourcePoiName;
@property (copy, nonatomic) NSString *selectPoiId;
@property (copy, nonatomic) NSString *selectPoiName;
@property (copy, nonatomic) NSString *poiRatingId;
@property (copy, nonatomic) NSString *poiRatingDesc;
@property (nonatomic) long long activityId;
@property (copy, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *poiTag;
@property (copy, nonatomic) NSString *poiIndirect;
@property (nonatomic) double poiLatitude;
@property (nonatomic) double poiLongitude;
@property (copy, nonatomic) NSString *poiBackendType;
@property (copy, nonatomic) NSString *poiAddress;
@property (copy, nonatomic) NSString *poiCpsInfo;
@property (nonatomic) long long poiTabId;
@property (copy, nonatomic) NSString *poiContentExtra;
@property (nonatomic) long long poiRatingGrade;
@property (copy, nonatomic) NSString *poiListInfo;
@property (nonatomic) long long poiVideoType;
@property (copy, nonatomic) NSString *searchRegionType;
@property (copy, nonatomic) NSDictionary *publishParams;
@property (copy, nonatomic) NSDictionary *poiSelectParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)poiTag;
- (id)poiBackendType;
- (id)sourcePoiId;
- (void)setSourcePoiId:(id)arg0;
- (id)sourcePoiName;
- (void)setSourcePoiName:(id)arg0;
- (id)selectPoiId;
- (void)setSelectPoiId:(id)arg0;
- (id)selectPoiName;
- (void)setSelectPoiName:(id)arg0;
- (id)poiRatingId;
- (void)setPoiRatingId:(id)arg0;
- (id)poiRatingDesc;
- (void)setPoiRatingDesc:(id)arg0;
- (void)setPoiTag:(id)arg0;
- (id)poiIndirect;
- (void)setPoiIndirect:(id)arg0;
- (double)poiLatitude;
- (void)setPoiLatitude:(double)arg0;
- (double)poiLongitude;
- (void)setPoiLongitude:(double)arg0;
- (void)setPoiBackendType:(id)arg0;
- (id)poiAddress;
- (void)setPoiAddress:(id)arg0;
- (id)poiCpsInfo;
- (void)setPoiCpsInfo:(id)arg0;
- (long long)poiTabId;
- (void)setPoiTabId:(long long)arg0;
- (id)poiContentExtra;
- (void)setPoiContentExtra:(id)arg0;
- (long long)poiRatingGrade;
- (void)setPoiRatingGrade:(long long)arg0;
- (id)poiListInfo;
- (void)setPoiListInfo:(id)arg0;
- (long long)poiVideoType;
- (void)setPoiVideoType:(long long)arg0;
- (id)searchRegionType;
- (void)setSearchRegionType:(id)arg0;
- (id)publishParams;
- (void)setPublishParams:(id)arg0;
- (id)poiSelectParams;
- (void)setPoiSelectParams:(id)arg0;
- (void).cxx_destruct;
- (void)setActivityTitle:(id)arg0;
- (id)activityTitle;
- (long long)activityId;
- (void)setActivityId:(long long)arg0;

@end