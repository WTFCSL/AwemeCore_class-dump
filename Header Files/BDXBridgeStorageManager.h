//
//     Generated by private class-dump
//

@class NSString, NSUserDefaults;

@interface BDXBridgeStorageManager : NSObject {
    NSUserDefaults *_userDefaults;
    NSString *_currentDomain;
}

@property (class, readonly, nonatomic) BDXBridgeStorageManager *sharedManager;

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (copy, nonatomic) NSString *currentDomain;

+ (id)sharedManager;

- (void)setCurrentDomain:(id)arg0;
- (void).cxx_destruct;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (id)userDefaults;
- (id)allKeys;
- (void)removeObjectForKey:(id)arg0;
- (id)objectForKey:(id)arg0;
- (id)initWithDomain:(id)arg0;
- (id)currentDomain;

@end