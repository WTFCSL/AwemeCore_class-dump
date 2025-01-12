//
//     Generated by private class-dump
//

@class NSString, NSUserDefaults;

@interface IESPrefetchDefaultCacheStorage : NSObject <IESPrefetchCacheStorageProtocol> {
    NSUserDefaults *_userDefaults;
}

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchObjectForKey:(id)arg0;
- (id)fetchAllKeys;
- (id)initWithSuite:(id)arg0;
- (void)setUserDefaults:(id)arg0;
- (void).cxx_destruct;
- (id)userDefaults;
- (void)removeObjectForKey:(id)arg0;
- (void)saveObject:(id)arg0 forKey:(id)arg1;

@end
