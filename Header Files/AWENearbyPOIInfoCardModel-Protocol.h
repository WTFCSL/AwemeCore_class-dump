//
//     Generated by private class-dump
//

@class AWENearbyPOIInfoModel;

@protocol AWENearbyPOIInfoCardModel <AWENearbyCardModel>

@property (retain, nonatomic) AWENearbyPOIInfoModel *poiInfoModel;

- (void)setPoiInfoModel:(id)arg0;
- (id)poiInfoModel;
- (BOOL)isEnhancedStyle;
- (void)recordHeadImgLoadedWithIndex:(long long)arg0;
- (long long)getLoadedHeadImgNum;
- (BOOL)headImgHasLoadWithIndex:(long long)arg0;

@end