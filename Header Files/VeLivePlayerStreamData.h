//
//     Generated by private class-dump
//

@class NSDictionary, NSArray;

@interface VeLivePlayerStreamData : NSObject {
    BOOL _enableABR;
    BOOL _enableMainBackupSwitch;
    long long _defaultResolution;
    long long _defaultFormat;
    long long _defaultProtocol;
    NSArray *_mainStream;
    NSArray *_backupStream;
    NSDictionary *_userSettings;
}

@property (copy, nonatomic) NSDictionary *userSettings;
@property (nonatomic) BOOL enableABR;
@property (nonatomic) BOOL enableMainBackupSwitch;
@property (nonatomic) long long defaultResolution;
@property (nonatomic) long long defaultFormat;
@property (nonatomic) long long defaultProtocol;
@property (copy, nonatomic) NSArray *mainStream;
@property (copy, nonatomic) NSArray *backupStream;

- (long long)defaultResolution;
- (id)getUserPropertyValue:(id)arg0;
- (id)generateSdkParams:(id)arg0;
- (id)mainStream;
- (id)generateNewDefaultFlvDegradeStreamIfNeed:(id)arg0;
- (id)addFormatList:(id)arg0 streamData:(id)arg1;
- (id)backupStream;
- (BOOL)hasFlvDegradeForRTMStream:(id)arg0 resolution:(long long)arg1;
- (void)setMainStream:(id)arg0;
- (void)setBackupStream:(id)arg0;
- (void)checkStreamDataValidity;
- (id)generateResolutionData:(id)arg0;
- (id)generatePlayerItemWithUserSettings:(id)arg0;
- (BOOL)enableABR;
- (void)setEnableABR:(BOOL)arg0;
- (BOOL)enableMainBackupSwitch;
- (void)setEnableMainBackupSwitch:(BOOL)arg0;
- (void)setDefaultResolution:(long long)arg0;
- (long long)defaultProtocol;
- (void)setDefaultProtocol:(long long)arg0;
- (id)userSettings;
- (id)init;
- (void).cxx_destruct;
- (long long)defaultFormat;
- (void)setDefaultFormat:(long long)arg0;
- (void)setUserSettings:(id)arg0;

@end
