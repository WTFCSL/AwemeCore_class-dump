//
//     Generated by private class-dump
//

@class NSString;

@interface InstallAndDeviceIDService : HTSService <HTSService> {
    id /* block */ _configParamsBlock;
    NSString *_oldDeviceID;
    NSString *_oldInstallID;
}

@property (retain, nonatomic) NSString *oldDeviceID;
@property (retain, nonatomic) NSString *oldInstallID;
@property (copy, nonatomic) id /* block */ configParamsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clientDID;
- (void)setDidRegisterBlock:(id /* block */)arg0;
- (BOOL)isActived;
- (void)registerDeviceOnceWithCompletion:(id /* block */)arg0;
- (void)setConfigParamsBlock:(id /* block */)arg0;
- (id)klinkEgdi;
- (id /* block */)configParamsBlock;
- (void)setOldDeviceID:(id)arg0;
- (void)setOldInstallID:(id)arg0;
- (void)didRegister:(id)arg0;
- (id)oldDeviceID;
- (id)oldInstallID;
- (void).cxx_destruct;
- (id)deviceID;
- (id)installID;
- (void)setup;
- (void)activateDevice;

@end
