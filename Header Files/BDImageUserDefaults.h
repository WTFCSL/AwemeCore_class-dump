//
//     Generated by private class-dump
//

@interface BDImageUserDefaults : NSObject {
    struct __CFString { } *_appNameRef;
    BOOL _isPreferenceFileExcluded;
}

@property (readonly) struct __CFString { } *appNameRef;
@property BOOL isPreferenceFileExcluded;

+ (id)standardUserDefaults;

- (void)scheduleSynchronize;
- (id)filePathForPreferencesName:(id)arg0;
- (void)removePreferenceFileWithSuiteName:(id)arg0;
- (struct __CFString { } *)appNameRef;
- (BOOL)isPreferenceFileExcluded;
- (void)setIsPreferenceFileExcluded:(BOOL)arg0;
- (long long)integerForKey:(id)arg0;
- (double)doubleForKey:(id)arg0;
- (id)arrayForKey:(id)arg0;
- (void)setBool:(BOOL)arg0 forKey:(id)arg1;
- (void)setDouble:(double)arg0 forKey:(id)arg1;
- (id)init;
- (id)stringForKey:(id)arg0;
- (id)dictionaryForKey:(id)arg0;
- (void)setInteger:(long long)arg0 forKey:(id)arg1;
- (void)synchronize;
- (BOOL)boolForKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (float)floatForKey:(id)arg0;
- (id)initWithSuiteName:(id)arg0;
- (void)removeObjectForKey:(id)arg0;
- (void)setFloat:(float)arg0 forKey:(id)arg1;
- (id)objectForKey:(id)arg0;
- (void)dealloc;

@end