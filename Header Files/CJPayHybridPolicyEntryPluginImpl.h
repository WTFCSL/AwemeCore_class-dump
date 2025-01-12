//
//     Generated by private class-dump
//

@class NSString, CJPayPolicyEntryPluginImpl;

@interface CJPayHybridPolicyEntryPluginImpl : NSObject <CJPayHybridPolicyEntryPlugin> {
    CJPayPolicyEntryPluginImpl *_basePluginImpl;
}

@property (retain, nonatomic) CJPayPolicyEntryPluginImpl *basePluginImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;

- (void)applicationOpenUrl:(id)arg0 withPolicy:(id)arg1 bridgeCommand:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)pickerControllerWithImagePickerPolicy:(id)arg0 bridgeCommand:(id)arg1;
- (void)requestAccessForMediaType:(id)arg0 withPolicy:(id)arg1 bridgeCommand:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestAlbumAddOnlyAuthorizationWithPolicy:(id)arg0 bridgeCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestAlbumAuthorizationWithPolicy:(id)arg0 bridgeCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openAlbumWithImagePickerPolicy:(id)arg0 phPickerPolicy:(id)arg1 bridgeCommand:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)pasteboardSetString:(id)arg0 bridgeCommand:(id)arg1 withPolicy:(id)arg2 error:(id *)arg3;
- (void)startRunningWithCaptureSession:(id)arg0 withPolicy:(id)arg1 bridgeCommand:(id)arg2 error:(id *)arg3;
- (void)stopRunningWithCaptureSession:(id)arg0 withPolicy:(id)arg1 bridgeCommand:(id)arg2 error:(id *)arg3;
- (void)evaluatePolicy:(long long)arg0 localizedReason:(id)arg1 withLAcontext:(id)arg2 withPolicy:(id)arg3 bridgeCommand:(id)arg4 reply:(id /* block */)arg5;
- (id)phPickerControllerWithPHPickerPolicy:(id)arg0 bridgeCommand:(id)arg1;
- (id)p_getTokenCert:(id)arg0 bridgeCommand:(id)arg1;
- (id)basePluginImpl;
- (void)setBasePluginImpl:(id)arg0;
- (void).cxx_destruct;

@end
