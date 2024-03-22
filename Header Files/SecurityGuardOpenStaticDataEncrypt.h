//
//     Generated by private class-dump
//

@class NSString;

@interface SecurityGuardOpenStaticDataEncrypt : NSObject <ISecurityGuardOpenStaticDataEncrypt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getMetaClass;
- (id)staticSafeEncrypt:(long long)arg0 forKey:(id)arg1 forNeedProcessValue:(id)arg2 authCode:(id)arg3;
- (id)staticSafeDecrypt:(long long)arg0 forKey:(id)arg1 forNeedProcessValue:(id)arg2 authCode:(id)arg3;
- (id)staticBinarySafeEncrypt:(long long)arg0 forKey:(id)arg1 forNeedProcessValue:(id)arg2 authCode:(id)arg3;
- (id)staticBinarySafeDecrypt:(long long)arg0 forKey:(id)arg1 forNeedProcessValue:(id)arg2 authCode:(id)arg3;
- (id)staticBinarySafeEncryptNoB64:(long long)arg0 forKey:(id)arg1 forNeedProcessValue:(id)arg2 authCode:(id)arg3;
- (id)staticBinarySafeDecryptNoB64:(long long)arg0 forKey:(id)arg1 forNeedProcessValue:(id)arg2 authCode:(id)arg3;
- (id)staticBinarySafeEncrypt:(long long)arg0 forKey:(id)arg1 forNeedProcessValue:(id)arg2 mask:(id)arg3 base64:(unsigned char)arg4;
- (id)staticBinarySafeDecrypt:(long long)arg0 forKey:(id)arg1 forNeedProcessValue:(id)arg2 mask:(id)arg3 base64:(unsigned char)arg4;

@end