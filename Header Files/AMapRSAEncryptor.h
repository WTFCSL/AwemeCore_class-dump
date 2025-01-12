//
//     Generated by private class-dump
//

@interface AMapRSAEncryptor : NSObject

+ (id)stripPublicKeyHeader:(id)arg0;
+ (struct __SecKey { } *)addPublicKey:(id)arg0;
+ (id)encryptString:(id)arg0 publicKey:(id)arg1;
+ (struct __SecKey { } *)getPublicKeyRefWithContentsOfFile:(id)arg0;
+ (id)encryptString:(id)arg0 publicKeyRef:(struct __SecKey { } *)arg1;
+ (id)encryptData:(id)arg0 withKeyRef:(struct __SecKey { } *)arg1;
+ (struct __SecKey { } *)getPrivateKeyRefWithContentsOfFile:(id)arg0 password:(id)arg1;
+ (id)decryptString:(id)arg0 privateKeyRef:(struct __SecKey { } *)arg1;
+ (id)decryptData:(id)arg0 withKeyRef:(struct __SecKey { } *)arg1;
+ (id)encryptData:(id)arg0 publicKey:(id)arg1;
+ (id)decryptData:(id)arg0 privateKey:(id)arg1;
+ (struct __SecKey { } *)addPrivateKey:(id)arg0;
+ (id)stripPrivateKeyHeader:(id)arg0;
+ (id)encryptString:(id)arg0 publicKeyWithContentsOfFile:(id)arg1;
+ (id)decryptString:(id)arg0 privateKeyWithContentsOfFile:(id)arg1 password:(id)arg2;
+ (id)decryptString:(id)arg0 privateKey:(id)arg1;

@end
