//
//     Generated by private class-dump
//

@interface AWEInTodayPhotoLibraryAggregateHelper : NSObject

+ (id)albumKeyForSpringFestival;
+ (void)pastMemoryAssetsFromPhotoLibraryWithDate:(id)arg0 completion:(id /* block */)arg1;
+ (void)pastMonthAssetsFromPhotoLibraryWithDate:(id)arg0 completion:(id /* block */)arg1;
+ (id)generateSpringFestivalAggregateConfigs:(id)arg0;
+ (id)pastYearTodayKeyWithDate:(id)arg0 prefix:(id)arg1;
+ (id)pastYearWeekKeyWithDate:(id)arg0 prefix:(id)arg1;
+ (id)pastYearMonthKeyWithDate:(id)arg0 prefix:(id)arg1;
+ (void)pastDayAssetsFromPhotoLibraryWithDate:(id)arg0 completion:(id /* block */)arg1;
+ (void)pastWeekAssetsFromPhotoLibraryWithDate:(id)arg0 completion:(id /* block */)arg1;
+ (void)pastRangeAssetsFromPhotoLibraryWithRangeList:(id)arg0 completion:(id /* block */)arg1;
+ (long long)dateValue:(id)arg0;
+ (void)pastYearAssetsWithFilter:(id /* block */)arg0 completion:(id /* block */)arg1;
+ (void)fetchAssetsWithConfig:(id)arg0 completion:(id /* block */)arg1;
+ (BOOL)assetFilterWithAsset:(id)arg0;
+ (id)weekFirstDayWithDate:(id)arg0;
+ (id)weekLastDayWithDate:(id)arg0;
+ (id)validRangeListWithConfig:(id)arg0;
+ (id)generateFetchOptionsPredicateWithRange:(id)arg0 isFetchImage:(BOOL)arg1 isFetchVideo:(BOOL)arg2;
+ (id)filterICloudAssets:(id)arg0;
+ (id)inTodayBDTokenCert;
+ (id)fetchAssetsWithAssetIds:(id)arg0 options:(id)arg1 error:(id)arg2;
+ (id)imSkylightConfigWithAlbum:(id)arg0;

@end
