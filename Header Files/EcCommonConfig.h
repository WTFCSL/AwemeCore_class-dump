//
//     Generated by private class-dump
//

@class NSString, EcNetworkConfig;

@interface EcCommonConfig : NSObject {
    BOOL _isBackgroundUploadDisable;
    NSString *_dataFolder;
    NSString *_downloadFolder;
    NSString *_cacheFolder;
    NSString *_biz_uid;
    NSString *_biz_sec_uid;
    NSString *_token;
    long long _ep_uid;
    long long _sourceFrom;
    NSString *_deviceId;
    NSString *_installId;
    EcNetworkConfig *_network;
}

@property (copy, nonatomic) NSString *biz_uid;
@property (copy, nonatomic) NSString *biz_sec_uid;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long ep_uid;
@property (nonatomic) long long sourceFrom;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *installId;
@property (copy, nonatomic) NSString *dataFolder;
@property (copy, nonatomic) NSString *downloadFolder;
@property (copy, nonatomic) NSString *cacheFolder;
@property (nonatomic) BOOL isBackgroundUploadDisable;
@property (retain, nonatomic) EcNetworkConfig *network;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setInstallId:(id)arg0;
- (id)installId;
- (void)setIsBackgroundUploadDisable:(BOOL)arg0;
- (id)dataFolder;
- (void)setDataFolder:(id)arg0;
- (id)downloadFolder;
- (void)setDownloadFolder:(id)arg0;
- (void)setCacheFolder:(id)arg0;
- (id)biz_uid;
- (void)setBiz_uid:(id)arg0;
- (id)biz_sec_uid;
- (void)setBiz_sec_uid:(id)arg0;
- (long long)ep_uid;
- (void)setEp_uid:(long long)arg0;
- (long long)sourceFrom;
- (void)setSourceFrom:(long long)arg0;
- (BOOL)isBackgroundUploadDisable;
- (id)init;
- (void).cxx_destruct;
- (id)deviceId;
- (void)setToken:(id)arg0;
- (id)token;
- (void)setDeviceId:(id)arg0;
- (id)appendPathComponent:(id)arg0;
- (void)setNetwork:(id)arg0;
- (id)network;
- (id)cacheFolder;

@end
