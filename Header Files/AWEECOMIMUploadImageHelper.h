//
//     Generated by private class-dump
//

@class NSArray, NSString, NSMutableArray, BDImageXUploaderClient;
@protocol AWEECOMIMUploadImageHelperDelegate;

@interface AWEECOMIMUploadImageHelper : NSObject <BDImageXUploadClientDelegate> {
    BDImageXUploaderClient *_uploadClient;
    id /* block */ _callback;
    NSArray *_progresses;
    NSArray *_fileDatas;
    NSMutableArray *_URIs;
    NSMutableArray *_widths;
    NSMutableArray *_heights;
    id<AWEECOMIMUploadImageHelperDelegate> _delegate;
}

@property (retain, nonatomic) BDImageXUploaderClient *uploadClient;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) NSArray *progresses;
@property (copy, nonatomic) NSArray *fileDatas;
@property (retain, nonatomic) NSMutableArray *URIs;
@property (retain, nonatomic) NSMutableArray *widths;
@property (retain, nonatomic) NSMutableArray *heights;
@property (weak, nonatomic) id<AWEECOMIMUploadImageHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageXUpload:(id)arg0 fileIndex:(long long)arg1 singleImage:(id)arg2 error:(id)arg3;
- (void)imageXUpload:(id)arg0 fileIndex:(long long)arg1 progressDidUpdate:(long long)arg2;
- (void)imageXUploadDidFinish:(id)arg0;
- (long long)imageXUploadGetNetState:(id)arg0;
- (void)imageXUpload:(id)arg0 onLogInfo:(id)arg1;
- (id)uploadClient;
- (void)setUploadClient:(id)arg0;
- (void)fetchUploadImageTokenWithPigeonBizType:(id)arg0 completion:(id /* block */)arg1;
- (void)setFileDatas:(id)arg0;
- (void)setWidths:(id)arg0;
- (void)setHeights:(id)arg0;
- (void)uploadImageWithPigeonBizType:(id)arg0 fileDatas:(id)arg1 progresses:(id)arg2 completion:(id /* block */)arg3;
- (void)setProgresses:(id)arg0;
- (id)fileDatas;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id /* block */)callback;
- (id)delegate;
- (id)progresses;
- (id)URIs;
- (void)setDelegate:(id)arg0;
- (void)setURIs:(id)arg0;
- (id)widths;
- (id)heights;

@end
