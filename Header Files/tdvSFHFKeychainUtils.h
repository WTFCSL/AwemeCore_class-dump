//
//     Generated by private class-dump
//

@interface tdvSFHFKeychainUtils : NSObject

+ (id)getAllPasswordsForServiceName:(id)arg0 error:(id *)arg1;
+ (id)getPasswordForUsername:(id)arg0 andServiceName:(id)arg1 error:(id *)arg2;
+ (BOOL)storeUsername:(id)arg0 andPassword:(id)arg1 forServiceName:(id)arg2 updateExisting:(BOOL)arg3 error:(id *)arg4;
+ (BOOL)deleteItemForUsername:(id)arg0 andServiceName:(id)arg1 error:(id *)arg2;

@end
