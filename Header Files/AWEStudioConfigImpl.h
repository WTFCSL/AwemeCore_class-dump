//
//     Generated by private class-dump
//

@class ACCConfigImpl;

@interface AWEStudioConfigImpl : ACCConfigImpl {
    ACCConfigImpl *_config;
}

@property (retain, nonatomic) ACCConfigImpl *config;

- (BOOL)boolValueForKeyPath:(id)arg0 defaultValue:(BOOL)arg1;
- (id)dictionaryForKeyPath:(id)arg0 defaultValue:(id)arg1;
- (id)stringForKeyPath:(id)arg0 defaultValue:(id)arg1;
- (id)arrayForKeyPath:(id)arg0 defaultValue:(id)arg1;
- (long long)intValueForKeyPath:(id)arg0 defaultValue:(long long)arg1;
- (double)doubleValueForKeyPath:(id)arg0 defaultValue:(double)arg1;
- (id)_stringForKeyPath:(id)arg0 defaultValue:(id)arg1;
- (id)_arrayForKeyPath:(id)arg0 defaultValue:(id)arg1;
- (id)_dictionaryForKeyPath:(id)arg0 defaultValue:(id)arg1;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end
