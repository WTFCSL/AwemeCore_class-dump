//
//     Generated by private class-dump
//

@interface UAServiceGetPhone : UAService

+ (id)necessaryRequestHeadKeys;
+ (id)URLWithDomainConfig:(id)arg0;
+ (id)necessaryRequestBodyKeys;
+ (id)defendEOFKeys;
+ (id)decodeResultData:(id)arg0 withKey:(id)arg1 withFuncType:(id)arg2;
+ (id)phoneScripCacheKeys;
+ (id)URL;

- (void)accessServiceWithData:(id)arg0 results:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)shouldAccessServiceGateway;
- (id)serviceRequest;
- (void)serviceNetworkDisposedRedirectionResponse:(id)arg0;
- (void)finishServiceWithResult:(id)arg0;

@end