//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPOIAMapDirection : NSObject {
    NSString *_cityCode;
    long long _mapLoadingStatus;
    NSArray *_lastResults;
}

@property (nonatomic) long long mapLoadingStatus;
@property (copy, nonatomic) NSArray *lastResults;
@property (copy, nonatomic) NSString *cityCode;

- (long long)mapLoadingStatus;
- (void)setMapLoadingStatus:(long long)arg0;
- (void)requestWalkingDirectionFromLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg0 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg1 completion:(id /* block */)arg2;
- (void)requestDrivingDirectionLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg0 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg1 completion:(id /* block */)arg2;
- (void)requestBicycleDirectionLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg0 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg1 completion:(id /* block */)arg2;
- (void)requestTransitDirectionLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg0 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg1 completion:(id /* block */)arg2;
- (id)walkURLPath;
- (id)amapAPIKey;
- (id)poiDirectionItemWithAmapModel:(id)arg0;
- (id)drivingURLPath;
- (id)bicycleURLPath;
- (id)transitURLPath;
- (id)poiDirectionItemWithTransitModel:(id)arg0;
- (id)p_mergeOverlaysWith:(id)arg0;
- (void)setupRoutesFromLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg0 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })arg1 tranportTypes:(id)arg2 completion:(id /* block */)arg3;
- (void).cxx_destruct;
- (id)baseURL;
- (id)lastResults;
- (void)setLastResults:(id)arg0;
- (id)cityCode;
- (void)setCityCode:(id)arg0;

@end
