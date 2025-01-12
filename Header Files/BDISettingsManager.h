//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDISettingsManager : NSObject {
    long long _lastCheck;
    NSDictionary *_settings;
    NSDictionary *_vidInfo;
}

@property (nonatomic) long long lastCheck;
@property (retain) NSDictionary *settings;
@property (retain) NSDictionary *vidInfo;

+ (id)sharedInstance;

- (void)didStartUp;
- (id)s_stringValueForKey:(id)arg0;
- (BOOL)s_boolValueForKey:(id)arg0;
- (id)s_objectValueForKey:(id)arg0;
- (void)syncSettings:(BOOL)arg0;
- (void)addNotifyObserver;
- (void)setLastCheck:(long long)arg0;
- (void)handleResponse:(id)arg0 jsonObj:(id)arg1 error:(id)arg2;
- (void)setVidInfo:(id)arg0;
- (long long)s_integerValueForKey:(id)arg0;
- (id)vidInfo;
- (id)getVids;
- (long long)lastCheck;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (id)settings;
- (void)dealloc;

@end
