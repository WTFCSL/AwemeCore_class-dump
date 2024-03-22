//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, NSNumber;

@interface CSJSDKPrivacy : NSObject {
    NSDictionary *_privacy;
    long long _ad_enable;
    long long _personalized_ad;
    long long _sladar_enable;
    long long _app_log_enable;
    long long _sec_enable;
    NSArray *_fields_allowed;
    NSDictionary *_capacityMethod;
    NSNumber *_longitude;
    NSNumber *_latitude;
    NSString *_customIdfaString;
    double _startDeviceTime;
}

@property (retain) NSDictionary *privacy;
@property long long ad_enable;
@property long long personalized_ad;
@property long long sladar_enable;
@property long long app_log_enable;
@property long long sec_enable;
@property (copy) NSArray *fields_allowed;
@property (retain) NSDictionary *capacityMethod;
@property (retain) NSNumber *longitude;
@property (retain) NSNumber *latitude;
@property (copy) NSString *customIdfaString;
@property double startDeviceTime;

+ (id)shareManager;
+ (long long)bu_AdEnable;
+ (BOOL)isUnionBundleId;
+ (void)bu_setTestLongitude:(id)arg0;
+ (void)bu_setTestLatitude:(id)arg0;
+ (BOOL)bu_fields_allowed:(id)arg0;
+ (id)bu_getInformation:(id)arg0;
+ (id)bu_getOriginalIDFA;
+ (void)checkSettingsForEnable:(id *)arg0;
+ (id)_bu_getOriginalIDFA;
+ (id)md5String:(id)arg0;
+ (long long)bu_personalized_ad;
+ (long long)bu_sladar_enable;
+ (long long)bu_app_log_enable;
+ (long long)bu_sec_enable;
+ (id)bu_countryOrderNum;
+ (id)idfaString;
+ (id)systemUpdateTime;
+ (id)getCarrierMCC;
+ (id)getCarrierMNC;
+ (id)getCurrentIMSI;
+ (id)getPhoneName;
+ (void)bu_setCustomIDFA:(id)arg0;
+ (id)getDeviceStartTime;
+ (id)getDeviceRunTime;
+ (id)bu_skadNetwork_id_array;
+ (void)bu_setPrivacyInfo:(id)arg0;
+ (id)bu_fields_allowed_array;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)longitude;
+ (id)latitude;

- (void)setAd_enable:(long long)arg0;
- (void)setPersonalized_ad:(long long)arg0;
- (void)setSladar_enable:(long long)arg0;
- (void)setApp_log_enable:(long long)arg0;
- (void)setSec_enable:(long long)arg0;
- (void)setFields_allowed:(id)arg0;
- (void)setCapacityMethod:(id)arg0;
- (void)setPrivacy:(id)arg0;
- (long long)ad_enable;
- (long long)personalized_ad;
- (long long)sladar_enable;
- (long long)app_log_enable;
- (long long)sec_enable;
- (id)fields_allowed;
- (id)capacityMethod;
- (id)customIdfaString;
- (void)setCustomIdfaString:(id)arg0;
- (void)calculateDeviceStartTime;
- (double)startDeviceTime;
- (void)setStartDeviceTime:(double)arg0;
- (void)setLongitude:(id)arg0;
- (id)longitude;
- (id)latitude;
- (void)setLatitude:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)privacy;
- (id)telephonyNetworkInfo;

@end
