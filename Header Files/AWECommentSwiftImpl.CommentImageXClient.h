//
//     Generated by private class-dump
//

@interface AWECommentSwiftImpl.CommentImageXClient : NSObject <BDImageXUploadClientDelegate> {
    void /* unknown type, empty encoding */ imageXUploadClient;
    void /* unknown type, empty encoding */ progressBlock;
    void /* unknown type, empty encoding */ mediaUploadCompletionBlock;
    void /* unknown type, empty encoding */ uploadBusinessAuthParams;
    void /* unknown type, empty encoding */ imageList;
    void /* unknown type, empty encoding */ imageSourceList;
    void /* unknown type, empty encoding */ imageUploadProgress;
    void /* unknown type, empty encoding */ uploadImageProcessUpdateCount;
    void /* unknown type, empty encoding */ isImageUploading;
    void /* unknown type, empty encoding */ imageInfoDict;
    void /* unknown type, empty encoding */ imageAspectRatio;
    void /* unknown type, empty encoding */ imageUris;
    void /* unknown type, empty encoding */ imageWidths;
    void /* unknown type, empty encoding */ imageHeights;
    void /* unknown type, empty encoding */ imageFormats;
    void /* unknown type, empty encoding */ imageSource;
}

- (void)imageXUpload:(id)arg0 fileIndex:(long long)arg1 singleImage:(id)arg2 error:(id)arg3;
- (void)imageXUpload:(id)arg0 fileIndex:(long long)arg1 progressDidUpdate:(long long)arg2;
- (void)imageXUploadDidFinish:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end