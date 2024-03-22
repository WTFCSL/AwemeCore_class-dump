//
//     Generated by private class-dump
//

@interface UTDUtils : NSObject

+ (id)encodeURL:(id)arg0;
+ (char *)newBase64Encode:(const void *)arg0 :(unsigned long long)arg1 :(BOOL)arg2 :(unsigned int *)arg3;
+ (id)NSData2Base64:(id)arg0;
+ (id)responseData:(id)arg0;
+ (id)md5StrForData:(id)arg0;
+ (BOOL)isSuccessResponse:(id)arg0;
+ (id)md5StrForNSString:(id)arg0;
+ (id)convertUrlEncodeFormat:(id)arg0;
+ (id)sortNSArrayForNSString:(id)arg0 ascending:(BOOL)arg1;
+ (id)rc4:(id)arg0 length:(unsigned long long)arg1;
+ (id)getDictDescribe:(id)arg0 urlendcode:(BOOL)arg1;
+ (id)queryURLDictionaryUsingEncoding:(id)arg0 encodeing:(unsigned long long)arg1;
+ (long long)millseconds;
+ (long long)timestamp;
+ (id)md5ForData:(id)arg0;
+ (id)sha1ForString:(id)arg0;
+ (unsigned int)nextInt;
+ (BOOL)isEmpty:(id)arg0;

@end
