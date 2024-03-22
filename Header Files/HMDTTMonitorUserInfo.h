//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface HMDTTMonitorUserInfo : NSObject {
    BOOL _enableBackgroundUpload;
    NSString *_appID;
    NSString *_hostAppID;
    NSString *_deviceID;
    NSString *_userID;
    NSString *_channel;
    NSString *_sdkVersion;
    id /* block */ _transformBlock;
    id /* block */ _commonParamsBlock;
    NSDictionary *_commonParams;
    NSArray *_configHostArray;
    NSString *_performanceUploadHost;
    unsigned long long _flushCount;
    NSDictionary *_customHeader;
    NSString *_scopedDeviceID;
    NSString *_scopedUserID;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *hostAppID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) id /* block */ transformBlock;
@property (copy) id /* block */ commonParamsBlock;
@property (copy) NSDictionary *commonParams;
@property (copy, nonatomic) NSArray *configHostArray;
@property (copy, nonatomic) NSString *performanceUploadHost;
@property (nonatomic) unsigned long long flushCount;
@property (nonatomic) BOOL enableBackgroundUpload;
@property (copy, nonatomic) NSDictionary *customHeader;
@property (copy, nonatomic) NSString *scopedDeviceID;
@property (copy, nonatomic) NSString *scopedUserID;

- (void)setCommonParams:(id)arg0;
- (id)commonParams;
- (id /* block */)commonParamsBlock;
- (void)setCommonParamsBlock:(id /* block */)arg0;
- (id)initWithAppID:(id)arg0;
- (void)setHostAppID:(id)arg0;
- (void)setEnableBackgroundUpload:(BOOL)arg0;
- (id)performanceUploadHost;
- (unsigned long long)flushCount;
- (void)setFlushCount:(unsigned long long)arg0;
- (id)scopedDeviceID;
- (id)scopedUserID;
- (void)setPerformanceUploadHost:(id)arg0;
- (id)configHostArray;
- (void)setConfigHostArray:(id)arg0;
- (void)setScopedDeviceID:(id)arg0;
- (void)setScopedUserID:(id)arg0;
- (id)hostAppID;
- (BOOL)enableBackgroundUpload;
- (id)currentCommonParams;
- (id)userID;
- (id)channel;
- (void)setAppID:(id)arg0;
- (void)setDeviceID:(id)arg0;
- (void).cxx_destruct;
- (id)deviceID;
- (void)setChannel:(id)arg0;
- (void)setUserID:(id)arg0;
- (id)customHeader;
- (id)appID;
- (id)sdkVersion;
- (void)setCustomHeader:(id)arg0;
- (id /* block */)transformBlock;
- (void)setTransformBlock:(id /* block */)arg0;
- (void)setSdkVersion:(id)arg0;

@end
