//
//     Generated by private class-dump
//

@interface AWECFHalcyon : NSObject

+ (id)AESDecryptData:(id)arg0 keyString:(id)arg1 ivString:(id)arg2;
+ (id)MD5File:(id)arg0;
+ (id)randomKeyString;
+ (id)AESDecryptString:(id)arg0 keyString:(id)arg1 ivString:(id)arg2;
+ (id)AESEncryptString:(id)arg0 keyString:(id)arg1 ivString:(id)arg2;
+ (id)base64Encode:(id)arg0;
+ (id)base64Decode:(id)arg0;
+ (id)MD5Data:(id)arg0;
+ (id)randomDataOfNumberOfBytes:(unsigned long long)arg0;
+ (id)randomKeyData;
+ (id)paddedDataOfKey:(id)arg0 numberOfBytes:(unsigned long long)arg1;
+ (id)defaultSymmetricKeyData;
+ (id)AESEncryptData:(id)arg0 keyData:(id)arg1 ivData:(id)arg2;
+ (id)AESEncryptString:(id)arg0 keyData:(id)arg1 ivData:(id)arg2;
+ (id)AESDecryptData:(id)arg0 keyData:(id)arg1 ivData:(id)arg2;
+ (id)AESDecryptString:(id)arg0 keyData:(id)arg1 ivData:(id)arg2;
+ (id)randomIVData;
+ (id)AESEncryptData:(id)arg0 keyString:(id)arg1 ivString:(id)arg2;
+ (id)RSAEncryptData:(id)arg0 publicKey:(id)arg1;
+ (id)RSADecryptData:(id)arg0 publicKey:(id)arg1;
+ (id)RSAEncryptString:(id)arg0 publicKey:(id)arg1;
+ (id)RSADecryptString:(id)arg0 publicKey:(id)arg1;

@end