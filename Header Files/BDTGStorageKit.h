//
//     Generated by private class-dump
//

@interface BDTGStorageKit : BDTGDanceKit

+ (BOOL)getBoolForKey:(id)arg0 enableKeyChain:(BOOL)arg1;
+ (void)setYESForKey:(id)arg0 enableKeyChain:(BOOL)arg1;
+ (void)syncToKeychainIfNeeded:(id)arg0 key:(id)arg1;
+ (void)setYESForKey:(id)arg0;
+ (id)getStringForKey:(id)arg0 enableKeyChain:(BOOL)arg1;
+ (void)setString:(id)arg0 forKey:(id)arg1 enableKeyChain:(BOOL)arg2;
+ (id)getDataForKey:(id)arg0 enableKeyChain:(BOOL)arg1;
+ (void)setData:(id)arg0 forKey:(id)arg1 enableKeyChain:(BOOL)arg2;
+ (void)initializeStorage;
+ (void)syncToUserDefaultsIfNeeded:(id)arg0 key:(id)arg1;
+ (void)setData:(id)arg0 forKey:(id)arg1;
+ (void)setString:(id)arg0 forKey:(id)arg1;
+ (id)getDataForKey:(id)arg0;
+ (id)getStringForKey:(id)arg0;
+ (BOOL)getBoolForKey:(id)arg0;

@end
