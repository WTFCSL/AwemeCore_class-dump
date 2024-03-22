//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStudioPOIServiceImpl : NSObject <AWEStudioPOIServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPOIPickerWithLocationInfos:(id)arg0 splitDomains:(BOOL)arg1 isOversea:(BOOL)arg2 entrance:(unsigned long long)arg3 moreParams:(id)arg4 shouldShowAddStore:(BOOL)arg5 completion:(id /* block */)arg6 cancelBlock:(id /* block */)arg7;
- (id)baseTrackerParamsForPOIInfo:(id)arg0 enterFrom:(id)arg1;
- (void)fetchRecommendPOIsWithZipURL:(id)arg0 recordLocation:(id)arg1 needSelfLocation:(BOOL)arg2 creationID:(id)arg3;
- (void)cleanAIRecommendPOIs;
- (id)poiTag;
- (void)trackBDUGConsumeWithType:(unsigned long long)arg0 POIInfo:(id)arg1 logPassback:(id)arg2;
- (void)showPOIPickerWithLocations:(id)arg0 splitDomains:(BOOL)arg1 isOversea:(BOOL)arg2 entrance:(unsigned long long)arg3 moreParams:(id)arg4 shouldShowAddStore:(BOOL)arg5 completion:(id /* block */)arg6 cancelBlock:(id /* block */)arg7;
- (id)createAWEStudioPOIShowPoiPickerMoreParamsModel;
- (void)showPOIPickerWithLocations:(id)arg0 splitDomains:(BOOL)arg1 isOversea:(BOOL)arg2 entrance:(unsigned long long)arg3 moreParams:(id)arg4 shouldShowAddStore:(BOOL)arg5 completion:(id /* block */)arg6;
- (id)getPOIEditViewControllerWithModel:(id)arg0;

@end
