//
//     Generated by private class-dump
//

@class NSString, NSDictionary;
@protocol BDUGCertProtocol;

@interface BDUGLocationInitConfig : NSObject {
    NSString *_appID;
    NSString *_deviceID;
    NSString *_baseURLString;
    id /* block */ _coldLaunchTimestamp;
    long long _launchType;
    long long _backgroundLaunchType;
    id /* block */ _restrictMode;
    id /* block */ _removeRemoteLocationData;
    id<BDUGCertProtocol> _cert;
    NSDictionary *_certDict;
    long long _headingOrientation;
    id /* block */ _language;
    NSString *_countryView;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *baseURLString;
@property (copy, nonatomic) id /* block */ coldLaunchTimestamp;
@property (nonatomic) long long launchType;
@property (nonatomic) long long backgroundLaunchType;
@property (copy, nonatomic) id /* block */ restrictMode;
@property (copy, nonatomic) id /* block */ removeRemoteLocationData;
@property (retain, nonatomic) id<BDUGCertProtocol> cert;
@property (retain, nonatomic) NSDictionary *certDict;
@property (nonatomic) long long headingOrientation;
@property (copy, nonatomic) id /* block */ language;
@property (copy, nonatomic) NSString *countryView;

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
- (id)certDict;
- (id)initWithAppID:(id)arg0 deviceID:(id)arg1 baseURLString:(id)arg2;
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
- (id)cert;
- (void)setCert:(id)arg0;

@end