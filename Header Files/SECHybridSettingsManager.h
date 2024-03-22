//
//     Generated by private class-dump
//

@class SECHybridPiperMonitorSetting, SECHybridURLMonitorSetting, SECHybridUIContextSettings;

@interface SECHybridSettingsManager : NSObject {
    SECHybridURLMonitorSetting *_urlMonitorSettings;
    SECHybridUIContextSettings *_uiContextSettings;
    SECHybridPiperMonitorSetting *_piperMonitorSettings;
    unsigned long long _pluginPerfSample;
}

@property (retain, nonatomic) SECHybridURLMonitorSetting *urlMonitorSettings;
@property (retain, nonatomic) SECHybridUIContextSettings *uiContextSettings;
@property (retain, nonatomic) SECHybridPiperMonitorSetting *piperMonitorSettings;
@property unsigned long long pluginPerfSample;

+ (id)sharedManager;

- (id)urlMonitorSettings;
- (id)uiContextSettings;
- (id)piperMonitorSettings;
- (void)setUrlMonitorSettings:(id)arg0;
- (void)setUiContextSettings:(id)arg0;
- (void)setPiperMonitorSettings:(id)arg0;
- (unsigned long long)pluginPerfSample;
- (void)setPluginPerfSample:(unsigned long long)arg0;
- (void).cxx_destruct;

@end