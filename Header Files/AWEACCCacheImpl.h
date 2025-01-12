//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCCacheImpl : NSObject <ACCCacheProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)integerForKey:(id)arg0;
- (double)doubleForKey:(id)arg0;
- (id)arrayForKey:(id)arg0;
- (void)setBool:(BOOL)arg0 forKey:(id)arg1;
- (void)setDouble:(double)arg0 forKey:(id)arg1;
- (id)stringForKey:(id)arg0;
- (id)dictionaryForKey:(id)arg0;
- (void)setInteger:(long long)arg0 forKey:(id)arg1;
- (void)setArray:(id)arg0 forKey:(id)arg1;
- (void)setDictionary:(id)arg0 forKey:(id)arg1;
- (id)dataForKey:(id)arg0;
- (BOOL)boolForKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (float)floatForKey:(id)arg0;
- (void)removeObjectForKey:(id)arg0;
- (void)setString:(id)arg0 forKey:(id)arg1;
- (void)setFloat:(float)arg0 forKey:(id)arg1;
- (id)objectForKey:(id)arg0;
- (void)removeAllObjects;

@end
