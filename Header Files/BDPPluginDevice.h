//
//     Generated by private class-dump
//

@class BDPScreenOnLock, BDPUniqueID, NSString;

@interface BDPPluginDevice : BDPBridgeInstancePlugin <MFMessageComposeViewControllerDelegate> {
    BDPUniqueID *_uniqueID;
    BDPScreenOnLock *_screenOnLock;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPScreenOnLock *screenOnLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getSystemInfoWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)privacyMaskingWithCommonParams:(id)arg0;
- (void)UIScreenCapturedDidChange:(id)arg0;
- (void)getSystemInfoSyncWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)vibrateShortWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)vibrateLongWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setKeepScreenOnWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getGeneralInfoWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)onUserScreenRecordWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)offUserScreenRecordWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setScreenOnLock:(id)arg0;
- (void)operateUserScreenRecord:(BOOL)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)makePhoneCallWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getGeneralInfoProcessWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2 clueForm:(BOOL)arg3;
- (void)sendSmsWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)disableUserScreenRecordWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)enableUserScreenRecordWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getDeviceInfoSyncWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getGeneralInfoForClueFormWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (id)screenOnLock;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)dealloc;
- (void)messageComposeViewController:(id)arg0 didFinishWithResult:(long long)arg1;

@end
