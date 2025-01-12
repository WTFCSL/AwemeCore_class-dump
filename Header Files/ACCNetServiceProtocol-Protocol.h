//
//     Generated by private class-dump
//

@protocol ACCNetServiceProtocol <NSObject>

- (id)commonParameters;
- (id)defaultDomain;
- (id)requestWithModel:(id /* block */)arg0 completion:(id /* block */)arg1;
- (id)uploadWithModel:(id /* block */)arg0 progress:(id *)arg1 completion:(id /* block */)arg2;
- (id)GET:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)downloadFileWithURL:(id)arg0 destinationURL:(id)arg1 supportTempFile:(BOOL)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)invalidParameterError;
- (id)POST:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
- (id)useJSONrequestSerializerPOST:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)downloadWithModel:(id /* block */)arg0 progressBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)cancel:(id)arg0;

@optional

- (id)apiErrorDomain;
- (id)networkErrorDomain;
- (id)commonParametersForURLStr:(id)arg0;

@end
