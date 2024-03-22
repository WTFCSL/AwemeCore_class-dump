//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoPlayBitrateControler : NSObject <AWEVideoDownloadDelegate, IESVideoBSControllerDelegate, IESVideoBSNetworkDelegate, IESVideoPreloadSpeedProtocol, AWESettingsComboRequestProtocol> {
    long long _IESVideoBSNetworkProfilerType;
}

@property (nonatomic) long long IESVideoBSNetworkProfilerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)arg0;
+ (void)setupWithoutRequest;
+ (void)updateSettingsWithDictionaryCore:(id)arg0;
+ (void)asynBitrateSettingJsonModel:(id)arg0;
+ (id)sharedInstance;
+ (void)setup;
+ (void)setEnabled:(BOOL)arg0;

- (void)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
- (long long)getIESVideoBSNetworkProfilerType;
- (void)videoDidDownloadDataLength:(unsigned long long)arg0 interval:(double)arg1;
- (void)localServerTestSpeedInfo:(double)arg0 size:(long long)arg1;
- (void)currentConfigDidNotChange:(id)arg0 networkSpeed:(unsigned long long)arg1;
- (void)currentConfigDidChangeFrom:(id)arg0 to:(id)arg1 networkSpeed:(unsigned long long)arg2;
- (void)setIESVideoBSNetworkProfilerType:(long long)arg0;
- (long long)IESVideoBSNetworkProfilerType;
- (void)updateBitrateConfiguration;
- (void)dealloc;

@end
