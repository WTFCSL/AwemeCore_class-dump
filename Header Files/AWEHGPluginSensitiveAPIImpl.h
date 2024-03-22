//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHGPluginSensitiveAPIImpl : NSObject <HGSensitiveAPIPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)hg_requestAccessCameraWithType:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (BOOL)hg_startRunningWithCaptureSession:(id)arg0 type:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)hg_stopRunningWithCaptureSession:(id)arg0 type:(unsigned long long)arg1 error:(id *)arg2;
- (void)hg_requestAccessMicrophoneWithType:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (int)hg_startAudioOutputUnitWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)arg0 type:(unsigned long long)arg1 error:(id *)arg2;
- (int)hg_stopAudioOutputUnitWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)arg0 type:(unsigned long long)arg1 error:(id *)arg2;
- (void)hg_requestRecordPermissionWithType:(unsigned long long)arg0 audioSession:(id)arg1 completion:(id /* block */)arg2;
- (void)hg_getClipboardWithType:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (BOOL)hg_setClipboardWithType:(unsigned long long)arg0 content:(id)arg1 error:(id *)arg2;
- (void)hg_openURL:(id)arg0 type:(unsigned long long)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)hg_openURL:(id)arg0 type:(unsigned long long)arg1;
- (id)hg_initSKStoreWithType:(unsigned long long)arg0;
- (id)hg_calendarsForEntityType:(unsigned long long)arg0 type:(unsigned long long)arg1 eventStore:(id)arg2 error:(id *)arg3;
- (long long)hg_authorizationStatusForEntityType:(unsigned long long)arg0 type:(unsigned long long)arg1 error:(id *)arg2;
- (void)hg_requestAccessToEntityType:(unsigned long long)arg0 type:(unsigned long long)arg1 eventStore:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)hg_saveEvent:(id)arg0 type:(unsigned long long)arg1 span:(long long)arg2 eventStore:(id)arg3 error:(id *)arg4;
- (id)getCertWithType:(unsigned long long)arg0;

@end
