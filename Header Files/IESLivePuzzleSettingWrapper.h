//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveSettings;

@interface IESLivePuzzleSettingWrapper : NSObject <PuzzleSettingsService, PuzzleUGStaticSettingsService> {
    id<IESLiveSettings> _settings;
}

@property (retain, nonatomic) id<IESLiveSettings> settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueForKey:(id)arg0 defaultValue:(id)arg1;
- (void)getUGDynamicSettingsWithKeys:(id)arg0 completion:(id /* block */)arg1 waitInit:(BOOL)arg2;
- (void)getUGSettingsWithKeys:(id)arg0 completion:(id /* block */)arg1 waitInit:(BOOL)arg2;
- (BOOL)getUGSettingsBoolForKey:(id)arg0;
- (id)getUGSettingsWithKeys:(id)arg0;
- (id)arrayForKey:(id)arg0 defaultValue:(id)arg1;
- (id)dictionaryForKey:(id)arg0 defaultValue:(id)arg1;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (id)stringForKey:(id)arg0 defaultValue:(id)arg1;
- (id)settings;
- (id)numberForKey:(id)arg0 defaultValue:(id)arg1;

@end
