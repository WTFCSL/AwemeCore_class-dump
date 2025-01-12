//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@protocol AWERepoPOIModelProtocol <NSObject>

@property (copy, nonatomic) NSString *selectedPoiID;
@property (copy, nonatomic) NSString *selectedPoiName;
@property (copy, nonatomic) NSString *poiTag;
@property (copy, nonatomic) NSString *poiIndirectJson;
@property (copy, nonatomic) NSString *selectedPoiDesc;
@property (copy, nonatomic) NSArray *locationInfos;
@property (nonatomic) long long tabID;
@property (copy, nonatomic) NSString *cpsInfo;
@property (copy, nonatomic) NSString *poiContentExtra;
@property (copy, nonatomic) NSDictionary *poiListInfo;
@property (copy, nonatomic) NSString *addMethod;
@property (copy, nonatomic) NSString *userType;
@property (copy, nonatomic) NSDictionary *poiPublishParam;
@property (copy, nonatomic) NSDictionary *poiSelectParam;

- (id)poiTag;
- (id)poiBackendType;
- (void)setPoiTag:(id)arg0;
- (id)poiContentExtra;
- (void)setPoiContentExtra:(id)arg0;
- (id)poiListInfo;
- (void)setPoiListInfo:(id)arg0;
- (void)setTabID:(long long)arg0;
- (id)cpsInfo;
- (void)setCpsInfo:(id)arg0;
- (void)setSelectedPoiID:(id)arg0;
- (void)setSelectedPoiName:(id)arg0;
- (id)poiRatingID;
- (void)setLocationInfos:(id)arg0;
- (id)locationInfos;
- (id)selectedPoiID;
- (BOOL)isPoiEditDisabled;
- (id)poiRatingDescription;
- (id)locationISO6709;
- (void)fetchAndSavePOIInfo;
- (id)selectedPoiName;
- (id)poiIndirectJson;
- (void)setPoiIndirectJson:(id)arg0;
- (id)selectedPoiDesc;
- (void)setSelectedPoiDesc:(id)arg0;
- (id)addMethod;
- (void)setAddMethod:(id)arg0;
- (id)poiPublishParam;
- (void)setPoiPublishParam:(id)arg0;
- (id)poiSelectParam;
- (void)setPoiSelectParam:(id)arg0;
- (id)userType;
- (id)activityTitle;
- (long long)activityID;
- (long long)tabID;
- (void)setUserType:(id)arg0;

@end
