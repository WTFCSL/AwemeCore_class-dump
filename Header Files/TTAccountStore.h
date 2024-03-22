//
//     Generated by private class-dump
//

@class NSString, TTAccountKeyChainStore;

@interface TTAccountStore : NSObject {
    NSString *_serviceName;
    NSString *_accessGroupName;
    TTAccountKeyChainStore *_keychainStore;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *accessGroupName;
@property (retain, nonatomic) TTAccountKeyChainStore *keychainStore;

+ (void)tt_setNumber:(id)arg0 forKey:(id)arg1;
+ (void)tt_setString:(id)arg0 forKey:(id)arg1;
+ (void)tt_setArray:(id)arg0 forKey:(id)arg1;
+ (void)tt_setDictionary:(id)arg0 forKey:(id)arg1;
+ (void)tt_setData:(id)arg0 forKey:(id)arg1;
+ (BOOL)tt_boolForKey:(id)arg0;
+ (id)tt_numberForKey:(id)arg0;
+ (id)tt_stringForKey:(id)arg0;
+ (id)tt_arrayForKey:(id)arg0;
+ (id)tt_dictionaryForKey:(id)arg0;
+ (id)tt_dataForKey:(id)arg0;
+ (void)tt_setNumber:(id)arg0 forKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (void)tt_setString:(id)arg0 forKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (id)storeWithServiceName:(id)arg0 accessGroup:(id)arg1;
+ (void)tt_setBool:(BOOL)arg0 forKey:(id)arg1;
+ (void)tt_setBool:(BOOL)arg0 forKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (void)tt_setArray:(id)arg0 forKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (void)tt_setDictionary:(id)arg0 forKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (void)tt_setData:(id)arg0 forKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (BOOL)tt_boolForKey:(id)arg0 service:(id)arg1 accessGroup:(id)arg2;
+ (id)tt_numberForKey:(id)arg0 service:(id)arg1 accessGroup:(id)arg2;
+ (id)tt_stringForKey:(id)arg0 service:(id)arg1 accessGroup:(id)arg2;
+ (id)tt_arrayForKey:(id)arg0 service:(id)arg1 accessGroup:(id)arg2;
+ (id)tt_dictionaryForKey:(id)arg0 service:(id)arg1 accessGroup:(id)arg2;
+ (id)tt_dataForKey:(id)arg0 service:(id)arg1 accessGroup:(id)arg2;
+ (id)sharedStore;

- (void)setAccessGroupName:(id)arg0;
- (id)accessGroupName;
- (void)tt_setString:(id)arg0 forKey:(id)arg1;
- (void)tt_setArray:(id)arg0 forKey:(id)arg1;
- (void)tt_setDictionary:(id)arg0 forKey:(id)arg1;
- (void)tt_setData:(id)arg0 forKey:(id)arg1;
- (BOOL)tt_boolForKey:(id)arg0;
- (id)tt_numberForKey:(id)arg0;
- (id)tt_stringForKey:(id)arg0;
- (id)tt_arrayForKey:(id)arg0;
- (id)tt_dictionaryForKey:(id)arg0;
- (id)tt_dataForKey:(id)arg0;
- (void)tt_setDictionary:(id)arg0 forKey:(id)arg1 error:(id *)arg2;
- (void)tt_setData:(id)arg0 forKey:(id)arg1 error:(id *)arg2;
- (id)tt_dictionaryForKey:(id)arg0 error:(id *)arg1;
- (id)tt_dataForKey:(id)arg0 error:(id *)arg1;
- (id)tt_allKeys;
- (id)tt_allItems;
- (BOOL)tt_removeAllItems;
- (BOOL)tt_removeItemForKey:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)keychainStore;
- (void)setObject:(id)arg0 forKeyedSubscript:(id)arg1;
- (id)serviceName;
- (void)setKeychainStore:(id)arg0;
- (void)setServiceName:(id)arg0;
- (id)initWithService:(id)arg0 accessGroup:(id)arg1;

@end
