//
//     Generated by private class-dump
//

@class NSString;

@interface BDLNetwork : NSObject

@property (class, nonatomic) BOOL isDebug;
@property (class, copy, nonatomic) NSString *wifiMacAddress;
@property (class, copy, nonatomic) NSString *wifiName;

+ (void)_requestWithPath:(id)arg0 params:(id)arg1 method:(id)arg2 headerField:(id)arg3 requestSerializer:(Class)arg4 responseSerializer:(Class)arg5 success:(id /* block */)arg6 failure:(id /* block */)arg7;
+ (id)requestURLStringWithPath:(id)arg0;
+ (void)logReportLocationInfoDidFailureWithDictionary:(id)arg0;
+ (void)logReportLocationInfoDidSuccessWithDictionary:(id)arg0;
+ (void)differentiateFromPath:(id)arg0 objDict:(id)arg1 successCompletion:(id /* block */)arg2;
+ (void)logReportLocationDefinationErrWithString:(id)arg0;
+ (void)GETWithPath:(id)arg0 params:(id)arg1 headerField:(id)arg2 tagType:(unsigned long long)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
+ (void)POSTWithPath:(id)arg0 params:(id)arg1 headerField:(id)arg2 contentType:(long long)arg3 tagType:(unsigned long long)arg4 success:(id /* block */)arg5 failure:(id /* block */)arg6;
+ (void)DAQ_submitBeaconNowWithBeacons:(id)arg0 logID:(id)arg1;
+ (id)_DAQ_basicInfoWithMode:(BOOL)arg0;
+ (void)submitV2WithParams:(id)arg0 locationInfo:(id)arg1 dataLevel:(long long)arg2 tagType:(unsigned long long)arg3 contentType:(long long)arg4 completion:(id /* block */)arg5;
+ (void)_fetchWifiInfoWithCert:(id)arg0 completion:(id /* block */)arg1;
+ (id)daqConfig:(id)arg0;
+ (id)_getRegionParamsForRequest;
+ (id)_DAQ_dataServiceMCCMNC;
+ (id)_DAQ_primaryMCCMNC;
+ (id)_DAQ_secondMCCMNC;
+ (void)DAQ_reportRestrictedInfoWithCompletion:(id /* block */)arg0;
+ (void)_geocode_useGisToReverseLocation:(id)arg0 language:(id)arg1 worldView:(id)arg2 dataLevel:(long long)arg3 completion:(id /* block */)arg4;
+ (void)geocode_useGeocodeToReverseLocation:(id)arg0 networkTag:(unsigned long long)arg1 dataLevel:(long long)arg2 completion:(id /* block */)arg3;
+ (void)geocode_useGisToReverseLocation:(id)arg0 cert:(id)arg1 completion:(id /* block */)arg2;
+ (void)geocode_useGisToReverseLocation:(id)arg0 language:(id)arg1 worldView:(id)arg2 dataLevel:(long long)arg3 completion:(id /* block */)arg4;
+ (void)geocode_requestIPLocationWithCert:(id)arg0 completion:(id /* block */)arg1;
+ (void)geocode_useGeocodeToReverseLocation:(id)arg0 networkTag:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (void)DAQ_reportBasicInfoWithCompletion:(id /* block */)arg0;
+ (void)DAQ_reportBasicInfoAtScene:(id)arg0 withCompletion:(id /* block */)arg1;
+ (void)setWifiMacAddress:(id)arg0;
+ (void)DAQ_reportLocationInfo:(id)arg0 placemark:(id)arg1 uploadSource:(id)arg2 intelUploadInterval:(double)arg3 dataLevel:(long long)arg4 tagType:(unsigned long long)arg5 option:(id)arg6 cert:(id)arg7 completion:(id /* block */)arg8;
+ (double)lastUploadTimeStamp;
+ (void)_scan_refreshLocationInBiz:(id)arg0 extraInfo:(id)arg1 completion:(id /* block */)arg2;
+ (void)_scan_uploadLocationInBiz:(id)arg0 extraInfo:(id)arg1 locationInfo:(id)arg2 cert:(id)arg3 completion:(id /* block */)arg4;
+ (void)_scan_refreshUploadToServerParams:(id)arg0 locInfo:(id)arg1 completion:(id /* block */)arg2;
+ (void)_scan_uploadLocationToServerWithParams:(id)arg0 locInfo:(id)arg1 completion:(id /* block */)arg2;
+ (void)setLastUploadTimeStamp:(double)arg0;
+ (void)scan_uploadLocationInBiz:(id)arg0 extraInfo:(id)arg1 locationInfo:(id)arg2 cert:(id)arg3 completion:(id /* block */)arg4;
+ (id)tracerouteConfigWithDict:(id)arg0;
+ (id)jsonFromInfo:(id)arg0;
+ (void)trace_fetchConfigWithCompletion:(id /* block */)arg0;
+ (void)trace_uploadTracerouteResult:(id)arg0 completion:(id /* block */)arg1;
+ (id)timestamp;
+ (id)wifiMacAddress;
+ (BOOL)isDebug;
+ (void)setIsDebug:(BOOL)arg0;
+ (id)wifiName;
+ (void)setWifiName:(id)arg0;

@end
