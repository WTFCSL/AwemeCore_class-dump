//
//     Generated by private class-dump
//

@class NSString, DIRSConcurrentCollection;

@interface DIRSCacheStore : NSObject <IRISStore> {
    DIRSConcurrentCollection *cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)setObject:(id)arg0 forKey:(id)arg1;
- (BOOL)removeObjectForKey:(id)arg0;
- (id)objectForKey:(id)arg0;

@end
