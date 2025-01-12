//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol AWEStudioPOIScanActivityInfo;

@protocol AWEStudioPOIInfoModelProtocol <NSObject>

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *typeCode;
@property (copy, nonatomic) NSString *distance;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL recommendFromMedia;
@property (nonatomic) long long withRecommendTag;
@property (nonatomic) long long guessExpect;
@property (copy, nonatomic) NSString *cpsDetailLynxUrl;
@property (retain, nonatomic) id<AWEStudioPOIScanActivityInfo> scanActivityInfo;
@property (copy, nonatomic) NSArray *styleEffectIds;

- (id)poiName;
- (id)poiID;
- (id)poiBackendType;
- (void)setPoiName:(id)arg0;
- (void)setPoiID:(id)arg0;
- (id)backendType;
- (BOOL)recommendFromMedia;
- (void)setRecommendFromMedia:(BOOL)arg0;
- (long long)guessExpect;
- (void)setGuessExpect:(long long)arg0;
- (long long)withRecommendTag;
- (void)setWithRecommendTag:(long long)arg0;
- (id)scanActivityInfo;
- (void)setScanActivityInfo:(id)arg0;
- (id)cpsDetailLynxUrl;
- (void)setCpsDetailLynxUrl:(id)arg0;
- (id)styleEffectIds;
- (void)setStyleEffectIds:(id)arg0;
- (id)distance;
- (void)setLongitude:(double)arg0;
- (void)setDistance:(id)arg0;
- (double)longitude;
- (double)latitude;
- (void)setLatitude:(double)arg0;
- (id)typeCode;
- (id)addressInfo;
- (void)setTypeCode:(id)arg0;

@end
