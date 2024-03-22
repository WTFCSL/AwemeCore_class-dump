//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface ASSStaticInfoCollector : NSObject {
    NSMutableDictionary *_environmentInfo;
    NSMutableDictionary *_deviceInfo;
    NSMutableDictionary *_appInfo;
    NSMutableDictionary *_customInfo;
    NSMutableDictionary *_dynamicInfo;
}

@property (retain, nonatomic) NSMutableDictionary *environmentInfo;
@property (retain, nonatomic) NSMutableDictionary *deviceInfo;
@property (retain, nonatomic) NSMutableDictionary *appInfo;
@property (retain, nonatomic) NSMutableDictionary *customInfo;
@property (retain, nonatomic) NSMutableDictionary *dynamicInfo;

- (id)environmentInfo;
- (void)setDynamicInfo:(id)arg0;
- (void)setEnvironmentInfo:(id)arg0;
- (void)generateDeviceInfo:(id)arg0;
- (void)generateCustomInfo:(id)arg0;
- (id)generateHashForSensors;
- (id)checkJB;
- (void)reportJBError:(id)arg0;
- (id)collectAllStaticData;
- (id)verifyStringNotNil:(id)arg0;
- (void)generateStaticInfo:(id)arg0;
- (void)updateIC4:(id)arg0;
- (id)getCurrentStaticInfoHash;
- (void)updateUserID:(id)arg0;
- (void)updateDynamicInfo;
- (void)generateEnvironmentInfo;
- (void)generateApplicationInfo;
- (id)getIE41;
- (id)deviceInfo;
- (void)setDeviceInfo:(id)arg0;
- (id)customInfo;
- (void).cxx_destruct;
- (id)dynamicInfo;
- (id)appInfo;
- (void)setCustomInfo:(id)arg0;
- (void)setAppInfo:(id)arg0;

@end