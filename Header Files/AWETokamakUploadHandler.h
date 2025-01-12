//
//     Generated by private class-dump
//

@class NSString, BDObjectUploaderClient;

@interface AWETokamakUploadHandler : NSObject <BDObjectUploadClientDelegate> {
    BDObjectUploaderClient *_clientTop;
    id /* block */ _finishBlock;
    unsigned long long _requestNumber;
}

@property (retain, nonatomic) BDObjectUploaderClient *clientTop;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (nonatomic) unsigned long long requestNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)objectUploadDidFinish:(id)arg0;
- (void)objectUpload:(id)arg0 fileIndex:(long long)arg1 progressDidUpdate:(long long)arg2;
- (void)objectUpload:(id)arg0 onLogInfo:(id)arg1;
- (void)objectUpload:(id)arg0 fileIndex:(long long)arg1 singleObject:(id)arg2 error:(id)arg3;
- (long long)objectUploadGetNetState:(id)arg0;
- (void)setClientTop:(id)arg0;
- (void)logUploadInfo:(id)arg0;
- (void)upload:(id)arg0 uploadFlag:(id)arg1 callback:(id /* block */)arg2;
- (void).cxx_destruct;
- (unsigned long long)requestNumber;
- (void)setRequestNumber:(unsigned long long)arg0;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg0;
- (id)clientTop;

@end
