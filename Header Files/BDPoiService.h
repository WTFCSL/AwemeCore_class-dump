//
//     Generated by private class-dump
//

@class NSString;

@interface BDPoiService : NSObject {
    NSString *_appID;
    NSString *_hostURLString;
    NSString *_secretKey;
    NSString *_deviceID;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *hostURLString;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *deviceID;

+ (void)initialize;
+ (id)sharedService;

- (id)requestParamsWithRequest:(id)arg0;
- (id)hostURLString;
- (void)poiSearchWithRequest:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)setHostURLString:(id)arg0;
- (id)secretKey;
- (void)setAppID:(id)arg0;
- (void)setDeviceID:(id)arg0;
- (void).cxx_destruct;
- (id)deviceID;
- (void)setSecretKey:(id)arg0;
- (id)appID;

@end
