//
//     Generated by private class-dump
//

@interface CSJNetworkSecurity : NSObject

@property (class, readonly, nonatomic) BOOL needEncrypt;

+ (id)encryptRequestModel:(id)arg0 adslot:(id)arg1;
+ (id)decryptRequestModel:(id)arg0 error:(id *)arg1;
+ (id)encryptRequestDictionary:(id)arg0;
+ (id)encryptRequestDictionaryWithOutSign:(id)arg0;
+ (id)encryptJSONObject:(id)arg0 key:(id)arg1 iv:(id)arg2;
+ (id)decryptAdMarkUp:(id)arg0 error:(id *)arg1;
+ (BOOL)needEncrypt;
+ (id)encryptString:(id)arg0 key:(id)arg1 iv:(id)arg2;
+ (long long)pbu_checkNetworkResultWithCypher:(long long)arg0 message:(id)arg1 resultProxy:(id *)arg2;
+ (void)pbu_errorCode:(long long)arg0 error:(id *)arg1;
+ (id)encryptData:(id)arg0 key:(id)arg1 iv:(id)arg2;
+ (id)encryptRequestArray:(id)arg0;
+ (id)decryptSettingModel:(id)arg0 error:(id *)arg1;
+ (id)encryptString:(id)arg0;

@end
