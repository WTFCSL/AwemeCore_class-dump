//
//     Generated by private class-dump
//

@class CJPay3DSVerifyModule;

@interface CJPayBridgePlugin_3DS : TTBridgePlugin {
    CJPay3DSVerifyModule *_dsVerifyModule;
}

@property (retain, nonatomic) CJPay3DSVerifyModule *dsVerifyModule;

+ (void)registerBridge;

- (id)dsVerifyModule;
- (void)ddcFor3DSWithParam:(id)arg0 callback:(id /* block */)arg1 engine:(id)arg2 controller:(id)arg3;
- (void)dmDeviceFingerprintWithParam:(id)arg0 callback:(id /* block */)arg1 engine:(id)arg2 controller:(id)arg3;
- (void)dsChallengeWithParam:(id)arg0 callback:(id /* block */)arg1 engine:(id)arg2 controller:(id)arg3;
- (void)setDsVerifyModule:(id)arg0;
- (void).cxx_destruct;

@end
