//
//     Generated by private class-dump
//

@interface AWECommentSwiftImpl.CommentLivePhotoUploader : NSObject <AWECommentMediaUploaderProtocol> {
    void /* unknown type, empty encoding */ mediaType;
    void /* unknown type, empty encoding */ progressBlock;
    void /* unknown type, empty encoding */ mediaUploadCompletionBlock;
    void /* unknown type, empty encoding */ liveVideoClient;
    void /* unknown type, empty encoding */ imageClient;
    void /* unknown type, empty encoding */ imageInfoDict;
    void /* unknown type, empty encoding */ vids;
}

@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, copy) id /* block */ mediaUploadCompletionBlock;

- (id /* block */)configUploadAuthCompletion;
- (void)setMediaUploadCompletionBlock:(id /* block */)arg0;
- (void)configUploader;
- (BOOL)startMediaUploadAuth:(id /* block */)arg0;
- (id)generateAuthParams;
- (void)startUpload;
- (id /* block */)mediaUploadCompletionBlock;
- (id)uploadBusinessAuthParams;
- (id)init;
- (void).cxx_destruct;
- (void)setProgressBlock:(id /* block */)arg0;
- (id /* block */)progressBlock;

@end
