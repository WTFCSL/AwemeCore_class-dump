//
//     Generated by private class-dump
//

@class UIImage, NSString;

@interface AWEProtectEyesManager : NSObject <AWEIMSettingModelUpdateMessage> {
    BOOL _eyeProtectionOn;
    long long _protectEyesValue;
    UIImage *_lutImage;
    UIImage *_HDRlutImage;
}

@property (retain, nonatomic) UIImage *lutImage;
@property (retain, nonatomic) UIImage *HDRlutImage;
@property (nonatomic) BOOL eyeProtectionOn;
@property (nonatomic) long long protectEyesValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)didUpdateIMSetting:(BOOL)arg0 source:(id)arg1 currentModel:(id)arg2;
- (BOOL)eyeProtectionOn;
- (void)setEyeProtectionOn:(BOOL)arg0;
- (void)turnOffEyeProtectionModeIfNeeded;
- (void)turnOnEyeProtectionModeWhenAppStartIfNeeded;
- (BOOL)isABProtectEyes;
- (id)lutImage;
- (void)setProtectEyesValue:(long long)arg0;
- (long long)protectEyesValue;
- (void)syncProtectEyesValueToServerValue:(long long)arg0;
- (void)updateLiveWithMode:(long long)arg0;
- (void)turnOnEyeProtectionModeIfNeeded:(long long)arg0;
- (void)updatePreotectEyesModeFromIMSeting:(id)arg0;
- (void)updateProtectEyesModeFromStorage;
- (void)traceEyeCareModeInfo:(long long)arg0;
- (void)updateProtectEyesMode:(long long)arg0;
- (void)turnOnEyeProtectionModeUnSave:(long long)arg0;
- (void)turnOffEyeProtectionModeUnSave;
- (id)HDRlutImage;
- (void)setLutImage:(id)arg0;
- (void)setHDRlutImage:(id)arg0;
- (void).cxx_destruct;

@end
