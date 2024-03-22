//
//     Generated by private class-dump
//

@class NSString;
@protocol EffectPlatformCacheService;

@interface EffectPlatformCache : NSObject <EffectPlatformCacheService> {
    NSString *_accessKey;
    id<EffectPlatformCacheService> _jsonCache;
}

@property (copy, nonatomic) NSString *accessKey;
@property (retain, nonatomic) id<EffectPlatformCacheService> jsonCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearMemory;
- (id)jsonCache;
- (void)setJsonCache:(id)arg0;
- (void)setJson:(id)arg0 object:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setJson:(id)arg0 newResponse:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (id)effectWithKey:(id)arg0;
- (id)newResponseWithKey:(id)arg0;
- (void)setEnableMemoryCache:(BOOL)arg0;
- (void)clearJsonAndObjectForKey:(id)arg0;
- (void)setJson:(id)arg0 object:(id)arg1 forKey:(id)arg2;
- (void)setJson:(id)arg0 newResponse:(id)arg1 forKey:(id)arg2;
- (void)setJson:(id)arg0 effect:(id)arg1 forKey:(id)arg2;
- (id)modelDictWithKey:(id)arg0;
- (void)setJson:(id)arg0 forKey:(id)arg1;
- (void)setJsonVersion:(id)arg0 withKey:(id)arg1;
- (id)getJsonVersionWithKey:(id)arg0;
- (void).cxx_destruct;
- (void)clear;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (id)initWithAccessKey:(id)arg0;
- (id)objectWithKey:(id)arg0;

@end