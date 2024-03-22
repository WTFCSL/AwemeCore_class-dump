//
//     Generated by private class-dump
//

@interface ASSSecurityGTMBase64ZZZX : NSObject

+ (id)baseEncode:(const void *)arg0 length:(unsigned long long)arg1 charset:(const char *)arg2 padded:(BOOL)arg3;
+ (id)baseDecode:(const void *)arg0 length:(unsigned long long)arg1 charset:(const char *)arg2 requirePadding:(BOOL)arg3;
+ (id)decodeBytes:(const void *)arg0 length:(unsigned long long)arg1;
+ (id)stringByEncodingData:(id)arg0;
+ (id)stringByEncodingBytes:(const void *)arg0 length:(unsigned long long)arg1;
+ (id)webSafeEncodeData:(id)arg0 padded:(BOOL)arg1;
+ (id)webSafeDecodeData:(id)arg0;
+ (id)webSafeEncodeBytes:(const void *)arg0 length:(unsigned long long)arg1 padded:(BOOL)arg2;
+ (id)webSafeDecodeBytes:(const void *)arg0 length:(unsigned long long)arg1;
+ (id)stringByWebSafeEncodingData:(id)arg0 padded:(BOOL)arg1;
+ (id)stringByWebSafeEncodingBytes:(const void *)arg0 length:(unsigned long long)arg1 padded:(BOOL)arg2;
+ (id)webSafeDecodeString:(id)arg0;
+ (unsigned long long)baseEncode:(const char *)arg0 srcLen:(unsigned long long)arg1 destBytes:(char *)arg2 destLen:(unsigned long long)arg3 charset:(const char *)arg4 padded:(BOOL)arg5;
+ (unsigned long long)baseDecode:(const char *)arg0 srcLen:(unsigned long long)arg1 destBytes:(char *)arg2 destLen:(unsigned long long)arg3 charset:(const char *)arg4 requirePadding:(BOOL)arg5;
+ (id)encodeBytes:(const void *)arg0 length:(unsigned long long)arg1;
+ (id)decodeData:(id)arg0;
+ (id)encodeData:(id)arg0;
+ (id)decodeString:(id)arg0;

@end
