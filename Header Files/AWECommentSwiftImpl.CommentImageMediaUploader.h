//
//     Generated by private class-dump
//

@interface AWECommentSwiftImpl.CommentImageMediaUploader : NSObject <AWECommentMediaUploaderProtocol> {
    void /* unknown type, empty encoding */ mediaType;
    void /* unknown type, empty encoding */ imageXUploadClient;
    void /* unknown type, empty encoding */ progressBlock;
    void /* unknown type, empty encoding */ mediaUploadCompletionBlock;
}

@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, copy) id /* block */ mediaUploadCompletionBlock;

- (void)startUpload;
- (id /* block */)configUploadAuthCompletion;
- (void)setMediaUploadCompletionBlock:(id /* block */)arg0;
- (void)configUploader;
- (BOOL)startMediaUploadAuth:(id /* block */)arg0;
- (id)generateAuthParams;
- (id /* block */)mediaUploadCompletionBlock;
- (id)uploadBusinessAuthParams;
- (id)init;
- (void).cxx_destruct;
- (void)setProgressBlock:(id /* block */)arg0;
- (id /* block */)progressBlock;

@end
