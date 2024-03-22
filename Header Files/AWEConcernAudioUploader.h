//
//     Generated by private class-dump
//

@class NSString, NSDictionary, BDVideoUploaderClient;

@interface AWEConcernAudioUploader : NSObject <BDVideoUploadClientDelegate> {
    id /* block */ _completion;
    NSString *_filePath;
    NSDictionary *_authDict;
    BDVideoUploaderClient *_client;
}

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSDictionary *authDict;
@property (retain, nonatomic) BDVideoUploaderClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoUpload:(id)arg0 didFinish:(id)arg1 error:(id)arg2;
- (void)videoUpload:(id)arg0 progressDidUpdate:(long long)arg1;
- (id)authDict;
- (void)fetchTokenWithCompletion:(id /* block */)arg0;
- (void)setAuthDict:(id)arg0;
- (void)uploadAudioWithLocalUrl:(id)arg0 completion:(id /* block */)arg1;
- (id)filePath;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)setClient:(id)arg0;
- (void)setFilePath:(id)arg0;
- (id)client;
- (void)uploadFile;

@end