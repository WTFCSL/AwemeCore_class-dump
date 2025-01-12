//
//     Generated by private class-dump
//

@class NSString, NSLock;

@interface FetchDidBlockHolder : NSObject {
    id /* block */ _fetchDidBlock;
    NSString *_appID;
    NSString *_deviceID;
    NSLock *_lock;
    id /* block */ _settingConfigBlock;
}

@property (copy, nonatomic) id /* block */ fetchDidBlock;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) id /* block */ settingConfigBlock;

+ (id)shareInstance;

- (void)setSettingConfigBlock:(id /* block */)arg0;
- (id /* block */)settingConfigBlock;
- (void)setFetchDidBlock:(id /* block */)arg0;
- (id /* block */)fetchDidBlock;
- (void)setBlock:(id /* block */)arg0 appID:(id)arg1;
- (void)setSettingBlock:(id /* block */)arg0;
- (id)fetchSettingConfig;
- (void)fetchDeviceID;
- (id)init;
- (void)setAppID:(id)arg0;
- (void)setDeviceID:(id)arg0;
- (void).cxx_destruct;
- (id)deviceID;
- (id)appID;
- (id)lock;
- (void)setLock:(id)arg0;

@end
