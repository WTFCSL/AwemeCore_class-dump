//
//     Generated by private class-dump
//

@interface SAMKeychain : NSObject

+ (BOOL)setPasswordData:(id)arg0 forService:(id)arg1 account:(id)arg2;
+ (id)passwordDataForService:(id)arg0 account:(id)arg1 error:(id *)arg2;
+ (BOOL)setPasswordData:(id)arg0 forService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (id)allAccounts:(id *)arg0;
+ (id)accountsForService:(id)arg0 error:(id *)arg1;
+ (id)passwordDataForService:(id)arg0 account:(id)arg1;
+ (BOOL)cj_save:(id)arg0 forKey:(id)arg1;
+ (id)cj_stringForKey:(id)arg0;
+ (BOOL)cj_deleteForKey:(id)arg0;
+ (id)allAccounts;
+ (id)accountsForService:(id)arg0;
+ (id)passwordForService:(id)arg0 account:(id)arg1;
+ (id)passwordForService:(id)arg0 account:(id)arg1 error:(id *)arg2;
+ (BOOL)deletePasswordForService:(id)arg0 account:(id)arg1;
+ (BOOL)deletePasswordForService:(id)arg0 account:(id)arg1 error:(id *)arg2;
+ (BOOL)setPassword:(id)arg0 forService:(id)arg1 account:(id)arg2;
+ (BOOL)setPassword:(id)arg0 forService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (const void *)accessibilityType;
+ (void)setAccessibilityType:(void *)arg0;

@end
