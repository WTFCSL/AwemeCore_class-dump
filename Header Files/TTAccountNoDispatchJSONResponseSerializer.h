//
//     Generated by private class-dump
//

@class NSSet, NSString;

@interface TTAccountNoDispatchJSONResponseSerializer : TTHTTPJSONResponseSerializerBase <TTJSONResponseSerializerProtocol>

@property (copy, nonatomic) NSSet *acceptableContentTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)normalizeError:(id *)arg0 withResponseResult:(id)arg1;
+ (void)error:(id *)arg0 addHTTPStatusCodeWithResponse:(id)arg1;
+ (void)handleResponseResult:(id)arg0 responseError:(id)arg1 resultError:(id *)arg2 originalURL:(id)arg3;
+ (id)dictionaryWithJSONData:(id)arg0 resultError:(id *)arg1;
+ (void)validateResponseResult:(id)arg0 resultError:(id *)arg1;
+ (void)normalParseResponseResult:(id)arg0 resultError:(id *)arg1 exceptionInfo:(id *)arg2 exceptionAsError:(BOOL)arg3 originalURL:(id)arg4;
+ (void)specialHandleResponseResult:(id)arg0 withError:(id)arg1 originalURL:(id)arg2;
+ (id)serializer;

- (id)responseObjectForResponse:(id)arg0 jsonObj:(id)arg1 responseError:(id)arg2 resultError:(id *)arg3;
- (id)init;

@end