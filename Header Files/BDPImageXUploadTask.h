//
//     Generated by private class-dump
//

@class BDImageXUploaderClient, NSString;

@interface BDPImageXUploadTask : NSObject <BDImageXUploadClientDelegate> {
    BDImageXUploaderClient *_clientTop;
    id /* block */ _uploadCompletion;
}

@property (retain, nonatomic) BDImageXUploaderClient *clientTop;
@property (copy, nonatomic) id /* block */ uploadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageXUpload:(id)arg0 fileIndex:(long long)arg1 singleImage:(id)arg2 error:(id)arg3;
- (void)imageXUpload:(id)arg0 fileIndex:(long long)arg1 progressDidUpdate:(long long)arg2;
- (void)imageXUploadDidFinish:(id)arg0;
- (long long)imageXUploadGetNetState:(id)arg0;
- (void)imageXUpload:(id)arg0 onLogInfo:(id)arg1;
- (id /* block */)uploadCompletion;
- (void)setUploadCompletion:(id /* block */)arg0;
- (void)setClientTop:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)clientTop;

@end