//
//     Generated by private class-dump
//

@class NSString, NSDictionary;
@protocol BDUGCertProtocol;

@interface BDLGlobalConfig : NSObject {
    BOOL _isInitialized;
    NSString *_appID;
    NSString *_deviceID;
    NSString *_baseURLString;
    id /* block */ _restrictMode;
    id /* block */ _coldLaunchTimestamp;
    long long _launchType;
    long long _backgroundLaunchType;
    id /* block */ _removeRemoteLocationData;
    id<BDUGCertProtocol> _cert;
    NSDictionary *_certDict;
    long long _headingOrientation;
    id /* block */ _language;
    NSString *_countryView;
    double _initializeTime;
}

@property BOOL isInitialized;
@property (copy) NSString *appID;
@property (copy) NSString *deviceID;
@property (copy) NSString *baseURLString;
@property (copy) id /* block */ restrictMode;
@property (copy) id /* block */ coldLaunchTimestamp;
@property long long launchType;
@property long long backgroundLaunchType;
@property (copy) id /* block */ removeRemoteLocationData;
@property (retain) id<BDUGCertProtocol> cert;
@property (retain) NSDictionary *certDict;
@property long long headingOrientation;
@property (copy) id /* block */ language;
@property (copy) NSString *countryView;
@property double initializeTime;

+ (BOOL)isTeenMode;
+ (id)appChannel;
+ (id)sharedConfig;
+ (id)appVersion;
+ (id)sdkVersion;
+ (id)devicePlatform;

- (id /* block */)restrictMode;
- (void)setRestrictMode:(id /* block */)arg0;
- (id /* block */)coldLaunchTimestamp;
- (void)setColdLaunchTimestamp:(id /* block */)arg0;
- (long long)backgroundLaunchType;
- (void)setBackgroundLaunchType:(long long)arg0;
- (id /* block */)removeRemoteLocationData;
- (void)setRemoveRemoteLocationData:(id /* block */)arg0;
- (void)setCertDict:(id)arg0;
- (id)countryView;
- (void)setCountryView:(id)arg0;
- (double)initializeTime;
- (void)setInitializeTime:(double)arg0;
- (id)certDict;
- (BOOL)isInitialized;
- (id)init;
- (void)setAppID:(id)arg0;
- (void)setDeviceID:(id)arg0;
- (void).cxx_destruct;
- (id)deviceID;
- (id /* block */)language;
- (long long)launchType;
- (void)setHeadingOrientation:(long long)arg0;
- (void)setLaunchType:(long long)arg0;
- (long long)headingOrientation;
- (id)appID;
- (void)setLanguage:(id /* block */)arg0;
- (id)baseURLString;
- (void)setBaseURLString:(id)arg0;
- (void)setIsInitialized:(BOOL)arg0;
- (id)cert;
- (void)setCert:(id)arg0;

@end
