//
//     Generated by private class-dump
//

@interface ASSCommonUtils : NSObject

+ (id)stringFromSortedDictionary:(id)arg0;
+ (id)sha1FromString:(id)arg0;
+ (id)md5FromString:(id)arg0;
+ (id)decryptStringWithBASE64andAES:(id)arg0;
+ (id)encryptWithAESandBASE64:(id)arg0;
+ (id)getValueFromProperty:(id)arg0;
+ (BOOL)isBlankString:(id)arg0;
+ (id)formatDataForServer:(id)arg0;
+ (id)encodeBase64Data:(id)arg0;
+ (id)getValueFromDictionary:(id)arg0 withKey:(id)arg1 defaultValue:(id)arg2;
+ (id)gzipAndBase64String:(id)arg0;
+ (id)gzipData:(id)arg0;
+ (id)encodeBase64:(id)arg0;

@end
