//
//     Generated by private class-dump
//

@class ShareStructV2, NSString, UrlStructV2, AddressStructV2, PoiCardStructV2, NSMutableArray, PoiBackendTypeStructV2;

@interface PoiStructV2 : GPBMessage

@property (copy, nonatomic) NSString *poiId;
@property (nonatomic) BOOL hasPoiId;
@property (copy, nonatomic) NSString *poiName;
@property (nonatomic) BOOL hasPoiName;
@property (copy, nonatomic) NSString *typeCode;
@property (nonatomic) BOOL hasTypeCode;
@property (nonatomic) int userCount;
@property (nonatomic) BOOL hasUserCount;
@property (nonatomic) int itemCount;
@property (nonatomic) BOOL hasItemCount;
@property (retain, nonatomic) ShareStructV2 *shareInfo;
@property (nonatomic) BOOL hasShareInfo;
@property (retain, nonatomic) UrlStructV2 *coverHd;
@property (nonatomic) BOOL hasCoverHd;
@property (retain, nonatomic) UrlStructV2 *coverLarge;
@property (nonatomic) BOOL hasCoverLarge;
@property (retain, nonatomic) UrlStructV2 *coverMedium;
@property (nonatomic) BOOL hasCoverMedium;
@property (retain, nonatomic) UrlStructV2 *coverThumb;
@property (nonatomic) BOOL hasCoverThumb;
@property (copy, nonatomic) NSString *distance;
@property (nonatomic) BOOL hasDistance;
@property (retain, nonatomic) AddressStructV2 *addressInfo;
@property (nonatomic) BOOL hasAddressInfo;
@property (nonatomic) int iconType;
@property (nonatomic) BOOL hasIconType;
@property (nonatomic) int collectStat;
@property (nonatomic) BOOL hasCollectStat;
@property (nonatomic) double poiLongitude;
@property (nonatomic) BOOL hasPoiLongitude;
@property (nonatomic) double poiLatitude;
@property (nonatomic) BOOL hasPoiLatitude;
@property (nonatomic) int expandType;
@property (nonatomic) BOOL hasExpandType;
@property (retain, nonatomic) UrlStructV2 *iconOnMap;
@property (nonatomic) BOOL hasIconOnMap;
@property (retain, nonatomic) UrlStructV2 *iconOnEntry;
@property (nonatomic) BOOL hasIconOnEntry;
@property (retain, nonatomic) UrlStructV2 *iconOnInfo;
@property (nonatomic) BOOL hasIconOnInfo;
@property (nonatomic) int poiType;
@property (nonatomic) BOOL hasPoiType;
@property (copy, nonatomic) NSString *poiVoucher;
@property (nonatomic) BOOL hasPoiVoucher;
@property (nonatomic) double rating;
@property (nonatomic) BOOL hasRating;
@property (nonatomic) double cost;
@property (nonatomic) BOOL hasCost;
@property (copy, nonatomic) NSString *poiRankDesc;
@property (nonatomic) BOOL hasPoiRankDesc;
@property (copy, nonatomic) NSString *businessAreaName;
@property (nonatomic) BOOL hasBusinessAreaName;
@property (nonatomic) BOOL isLocalCity;
@property (nonatomic) BOOL hasIsLocalCity;
@property (copy, nonatomic) NSString *optionName;
@property (nonatomic) BOOL hasOptionName;
@property (copy, nonatomic) NSString *poiSubtitle;
@property (nonatomic) BOOL hasPoiSubtitle;
@property (copy, nonatomic) NSString *spSource;
@property (nonatomic) BOOL hasSpSource;
@property (nonatomic) int showType;
@property (nonatomic) BOOL hasShowType;
@property (nonatomic) BOOL isCandidate;
@property (nonatomic) BOOL hasIsCandidate;
@property (retain, nonatomic) PoiCardStructV2 *poiCard;
@property (nonatomic) BOOL hasPoiCard;
@property (nonatomic) int poiSubtitleType;
@property (nonatomic) BOOL hasPoiSubtitleType;
@property (retain, nonatomic) NSMutableArray *voucherReleaseAreasArray;
@property (readonly, nonatomic) unsigned long long voucherReleaseAreasArray_Count;
@property (nonatomic) int isShowHalfcard;
@property (nonatomic) BOOL hasIsShowHalfcard;
@property (retain, nonatomic) NSMutableArray *poiFrontendTypeArray;
@property (readonly, nonatomic) unsigned long long poiFrontendTypeArray_Count;
@property (retain, nonatomic) PoiBackendTypeStructV2 *poiBackendType;
@property (nonatomic) BOOL hasPoiBackendType;
@property (retain, nonatomic) UrlStructV2 *coverItem;
@property (nonatomic) BOOL hasCoverItem;
@property (nonatomic) BOOL isTopRecommend;
@property (nonatomic) BOOL hasIsTopRecommend;
@property (nonatomic) BOOL isAdminArea;
@property (nonatomic) BOOL hasIsAdminArea;
@property (copy, nonatomic) NSString *collectedCount;
@property (nonatomic) BOOL hasCollectedCount;
@property (copy, nonatomic) NSString *viewCount;
@property (nonatomic) BOOL hasViewCount;
@property (nonatomic) BOOL withinGeoFence;
@property (nonatomic) BOOL hasWithinGeoFence;
@property (copy, nonatomic) NSString *extJson;
@property (nonatomic) BOOL hasExtJson;
@property (nonatomic) BOOL isFoodGroupBuy;
@property (nonatomic) BOOL hasIsFoodGroupBuy;
@property (nonatomic) BOOL isAtCallBackCollect;
@property (nonatomic) BOOL hasIsAtCallBackCollect;

+ (id)descriptor;

- (BOOL)isAtCallBackCollect;
- (BOOL)isFoodGroupBuy;
- (id)extJson;
- (id)viewCount;
- (BOOL)isAdminArea;
- (id)poiBackendType;
- (int)poiSubtitleType;
- (id)poiCard;
- (int)showType;
- (id)poiSubtitle;
- (id)iconOnInfo;
- (id)iconOnEntry;
- (id)iconOnMap;
- (int)expandType;
- (double)poiLatitude;
- (double)poiLongitude;
- (int)collectStat;
- (int)iconType;
- (id)addressInfo;
- (id)distance;
- (id)coverThumb;
- (id)coverMedium;
- (id)coverLarge;
- (id)coverHd;
- (id)shareInfo;
- (int)itemCount;
- (int)userCount;
- (id)typeCode;
- (id)poiName;
- (id)poiId;

@end
