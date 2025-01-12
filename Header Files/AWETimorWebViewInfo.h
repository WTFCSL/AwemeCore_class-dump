//
//     Generated by private class-dump
//

@class NSString;

@interface AWETimorWebViewInfo : NSObject {
    NSString *_URLString;
    NSString *_appName;
    NSString *_channel;
    NSString *_deviceId;
    NSString *_aid;
    NSString *_userId;
    NSString *_sessionId;
    NSString *_appKey;
    NSString *_appVersion;
    NSString *_OSVersion;
    NSString *_deviceType;
    NSString *_updateVersionCode;
    NSString *_hostLoginCookie;
    NSString *_iid;
    NSString *_mpId;
    NSString *_openId;
    NSString *_nativeSdkVersion;
    NSString *_networkType;
    NSString *_os;
}

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *OSVersion;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSString *hostLoginCookie;
@property (copy, nonatomic) NSString *iid;
@property (copy, nonatomic) NSString *mpId;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *nativeSdkVersion;
@property (copy, nonatomic) NSString *networkType;
@property (copy, nonatomic) NSString *os;

- (void)setUpdateVersionCode:(id)arg0;
- (void)setAppKey:(id)arg0;
- (id)appKey;
- (id)updateVersionCode;
- (id)iid;
- (void)setIid:(id)arg0;
- (id)openId;
- (void)setOpenId:(id)arg0;
- (id)mpId;
- (void)setMpId:(id)arg0;
- (id)initWithAppID:(id)arg0 URLString:(id)arg1;
- (void)getInfoWithExtraParam:(id)arg0 callBack:(id /* block */)arg1;
- (id)getSettingsInfo;
- (id)getReportMetaInfoData;
- (id)hostLoginCookie;
- (id)nativeSdkVersion;
- (void)setHostLoginCookie:(id)arg0;
- (void)setNativeSdkVersion:(id)arg0;
- (void)getUserPluginData;
- (void)getApplicationPluginData;
- (id)getReportMetaInfoDataWithParam:(id)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (id)URLString;
- (id)channel;
- (id)deviceType;
- (void)setAppVersion:(id)arg0;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (id)deviceId;
- (void)setChannel:(id)arg0;
- (void)setNetworkType:(id)arg0;
- (id)sessionId;
- (id)os;
- (id)userId;
- (id)appVersion;
- (void)setDeviceType:(id)arg0;
- (void)getData;
- (id)OSVersion;
- (void)setDeviceId:(id)arg0;
- (id)networkType;
- (void)setUserId:(id)arg0;
- (void)setOs:(id)arg0;
- (void)setURLString:(id)arg0;
- (void)setAid:(id)arg0;
- (id)aid;
- (void)setOSVersion:(id)arg0;

@end
