//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGBaseRequestParam : NSObject {
    NSString *_aId;
    NSString *_deviceId;
    NSString *_installId;
    NSString *_appName;
    NSString *_host;
}

@property (copy, nonatomic) NSString *aId;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *installId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *host;

+ (id)requestParam;

- (void)setInstallId:(id)arg0;
- (id)installId;
- (id)aId;
- (void)setAId:(id)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (id)deviceId;
- (id)host;
- (void)setDeviceId:(id)arg0;

@end
