//
//     Generated by private class-dump
//

@class AWEStorage;

@interface IESFeatureStorage : NSObject {
    AWEStorage *_storage;
}

@property (retain, nonatomic) AWEStorage *storage;

+ (id)sharedInstance;

- (BOOL)setBool:(BOOL)arg0 forKey:(id)arg1 err:(id *)arg2;
- (BOOL)setDouble:(double)arg0 forKey:(id)arg1 err:(id *)arg2;
- (BOOL)setFloat:(float)arg0 forKey:(id)arg1 err:(id *)arg2;
- (BOOL)setInteger:(long long)arg0 forKey:(id)arg1 err:(id *)arg2;
- (BOOL)setObject:(id)arg0 forKey:(id)arg1 err:(id *)arg2;
- (BOOL)removeObjectForKey:(id)arg0 err:(id *)arg1;
- (long long)integerForKey:(id)arg0;
- (void)setStorage:(id)arg0;
- (double)doubleForKey:(id)arg0;
- (void)setBool:(BOOL)arg0 forKey:(id)arg1;
- (void)setDouble:(double)arg0 forKey:(id)arg1;
- (id)init;
- (void)setInteger:(long long)arg0 forKey:(id)arg1;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)arg0;
- (id)storage;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (float)floatForKey:(id)arg0;
- (void)removeObjectForKey:(id)arg0;
- (void)setFloat:(float)arg0 forKey:(id)arg1;
- (id)objectForKey:(id)arg0;

@end
