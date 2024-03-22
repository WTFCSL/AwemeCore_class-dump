//
//     Generated by private class-dump
//

@class NSString;

@interface SecurityGuardOpenDynamicDataStore : NSObject <ISecurityGuardOpenDynamicDataStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)putString:(id)arg0 forKey:(id)arg1;
- (void)removeStringForKey:(id)arg0;
- (int)putData:(id)arg0 forKey:(id)arg1;
- (long long)getInteger:(id)arg0;
- (int)putInteger:(long long)arg0 forKey:(id)arg1;
- (void)removeIntegerForKey:(id)arg0;
- (float)getFloat:(id)arg0;
- (int)putFloat:(float)arg0 forKey:(id)arg1;
- (double)getDouble:(id)arg0;
- (int)putDouble:(double)arg0 forKey:(id)arg1;
- (int)putBool:(BOOL)arg0 forKey:(id)arg1;
- (id)getStringDDp:(id)arg0;
- (int)putStringDDp:(id)arg0 forKey:(id)arg1;
- (void)removeStringForKeyDDp:(id)arg0;
- (id)getDataDDp:(id)arg0;
- (int)putDataDDp:(id)arg0 forKey:(id)arg1;
- (void)removeDataForKeyDDp:(id)arg0;
- (id)getStringDDpEx:(id)arg0 flag:(int)arg1;
- (BOOL)putStringDDpEx:(id)arg0 forKey:(id)arg1 flag:(int)arg2;
- (void)removeStringDDpEx:(id)arg0 flag:(int)arg1;
- (id)getDataDDpEx:(id)arg0 flag:(int)arg1;
- (BOOL)putDataDDpEx:(id)arg0 forKey:(id)arg1 flag:(int)arg2;
- (void)removeDataDDpEx:(id)arg0 flag:(int)arg1;
- (Class)getMetaClass;
- (int)putValue:(id)arg0 withKey:(id)arg1 type:(id)arg2 isDDp:(unsigned char)arg3;
- (id)getValueWithKey:(id)arg0 type:(id)arg1 isDDp:(unsigned char)arg2;
- (void)removeValueWithKey:(id)arg0 type:(id)arg1 isDDp:(unsigned char)arg2;
- (id)DDpExOperation:(int)arg0 forKey:(id)arg1 needProcessData:(id)arg2 flag:(int)arg3;
- (void)removeDataForKey:(id)arg0;
- (BOOL)getBool:(id)arg0;
- (void)removeBoolForKey:(id)arg0;
- (void)removeFloatForKey:(id)arg0;
- (void)removeDoubleForKey:(id)arg0;
- (id)getData:(id)arg0;
- (id)getString:(id)arg0;

@end
