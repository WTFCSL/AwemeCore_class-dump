//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIUtils : NSObject <AWEPOIUtils>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cityInfo;
+ (BOOL)isInTheSameCityWithTargetCityCode:(id)arg0;
+ (id)distanceStringFromLocation:(id)arg0 toLocation:(id)arg1 unitFormat:(unsigned long long)arg2;
+ (id)distanceKmForAweme:(id)arg0;
+ (double)distanceFromCurrentLocation:(id)arg0 targetLocation:(id)arg1;
+ (id)currentLocationWithBDCert:(id)arg0;
+ (id)formattedPriceFrom:(id)arg0;
+ (id)entryDistanceDescriptionWithCurrentLocation:(id)arg0 targetCity:(id)arg1 targetLocation:(id)arg2;
+ (BOOL)isCurrentLocationShouldShowCouponWithReleaseAreas:(id)arg0;
+ (BOOL)isInTheSameCityWithCurrentLocation:(id)arg0 targetCityCode:(id)arg1;
+ (id)etaStringForTimeAtLeastOneMinute:(double)arg0;
+ (BOOL)isInTheSameCityWithCurrentLocation:(id)arg0 targetPOI:(id)arg1;
+ (void)goToMapWithPOIInfo:(id)arg0 isLocal:(BOOL)arg1 showNavi:(BOOL)arg2 trackInfo:(id)arg3 aroundHotPoiCount:(int)arg4 refer:(id)arg5 sessionID:(id)arg6;
+ (id)distanceStringFromCurrentLocation:(id)arg0 targetLatitude:(double)arg1 targetLongitude:(double)arg2 unitFormat:(unsigned long long)arg3;
+ (id)businessDaysDescriptionFromBusinessDays:(id)arg0;
+ (id)displayedCountForPOIInfo:(id)arg0 needTranslation:(BOOL)arg1;
+ (BOOL)hasValidVisitCountForPOIInfo:(id)arg0;
+ (id)entryDistanceDescriptionWithCurrentLocation:(id)arg0 poiInfo:(id)arg1;
+ (void)preloadMicroAppWithServiceModel:(id)arg0;
+ (BOOL)isInTheSameCityWithCurrentLocation:(id)arg0 targetCityCode:(id)arg1 targetLatitude:(double)arg2 targetLongitude:(double)arg3;
+ (BOOL)isInTheSameDistrictWithCurrentLocation:(id)arg0 targetCityCode:(id)arg1 targetDistrictCode:(id)arg2 targetLatitude:(double)arg3 targetLongitude:(double)arg4;
+ (id)displayedCountForPOIInfo:(id)arg0;
+ (id)distanceTagFromCurrentLocation:(id)arg0 targetLatitude:(double)arg1 targetLongitude:(double)arg2;
+ (unsigned long long)importantPOITypeForBackendType:(id)arg0;
+ (BOOL)isInTheSameDistrictWithCurrentLocation:(id)arg0 targetPOI:(id)arg1;
+ (BOOL)isCurrentLocation:(id)arg0 targetPOI:(id)arg1 WithinDistanceKm:(double)arg2;
+ (id)workDays;
+ (id)distanceTagFormatWithDistance:(double)arg0;
+ (void)judgeIsInTheSameCityWithCurrentLocation:(id)arg0 targetCityCode:(id)arg1 targetLongitude:(double)arg2 targetLatitude:(double)arg3 completion:(id /* block */)arg4;
+ (id)etaStringForTime:(double)arg0;
+ (BOOL)isInTheSameCityWithCurrentLocation:(id)arg0 targetCityCode:(id)arg1 targetLocation:(id)arg2;
+ (BOOL)shouldCheckPreconditionForSameCity;
+ (BOOL)preconditionResultForSameCity;
+ (id)displayedCountForPOIInfo:(id)arg0 needTranslation:(BOOL)arg1 shouldDistanceTextWithThere:(BOOL)arg2;
+ (void)preloadMicroAppWithUrl:(id)arg0;
+ (id)stringForImportantPOIType:(unsigned long long)arg0;
+ (double)distanceFromCurrentLocation:(id)arg0 targetLatitude:(double)arg1 targetLongitude:(double)arg2;
+ (id)commonDistanceFormatWithDistance:(double)arg0;
+ (void)judgeIsInTheSameCityWithCurrentLocation:(id)arg0 targetPOI:(id)arg1 completion:(id /* block */)arg2;
+ (id)currentLocationCityCodeWithBDCert:(id)arg0;
+ (void)saveCurrentCity:(id)arg0;
+ (void)enableForceInTheSameCity;
+ (void)disableForceInTheSameCity;
+ (BOOL)isForceInTheSameCity;
+ (void)transferToFormattedURLString:(id)arg0;
+ (id)importantTypeStringForPOIBackendType:(id)arg0;
+ (id)detailPreloadTaskKeyForAwemeID:(id)arg0 poiID:(id)arg1;

@end
