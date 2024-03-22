//
//     Generated by private class-dump
//

@class NSMutableIndexSet;

@interface BDUGLuckyJSONResponseSerializer : TTHTTPJSONResponseSerializerBase {
    NSMutableIndexSet *_acceptableStatusCodes;
    NSMutableIndexSet *_serverHangStatusCodes;
}

@property (retain, nonatomic) NSMutableIndexSet *acceptableStatusCodes;
@property (retain, nonatomic) NSMutableIndexSet *serverHangStatusCodes;

+ (void)registerResponseSerializerBlock:(id /* block */)arg0;
+ (void)removeResponseSerializerBlock:(id /* block */)arg0;
+ (id)serializer;

- (void)setAcceptableStatusCodes:(id)arg0;
- (id)acceptableStatusCodes;
- (id)responseObjectForResponse:(id)arg0 jsonObj:(id)arg1 responseError:(id)arg2 resultError:(id *)arg3;
- (id)p_getValueInDictionary:(id)arg0 withKey:(id)arg1;
- (void)setServerHangStatusCodes:(id)arg0;
- (long long)responseStatusWithCode:(long long)arg0;
- (id)responseModelWithJSonObj:(id)arg0 response:(id)arg1 responseStatus:(long long)arg2;
- (void)recordResponseServerInfoWithResponse:(id)arg0;
- (id)serverHangStatusCodes;
- (id)init;
- (void).cxx_destruct;

@end
