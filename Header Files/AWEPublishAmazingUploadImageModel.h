//
//     Generated by private class-dump
//

@class NSURL, NSString, NSError;

@interface AWEPublishAmazingUploadImageModel : MTLModel <MTLJSONSerializing> {
    NSURL *_fileURL;
    NSString *_uploadUri;
    long long _originIndex;
    long long _progress;
    id _userInfo;
    NSError *_error;
    struct CGSize { double width; double height; } _imageSize;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *uploadUri;
@property (nonatomic) long long originIndex;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) long long progress;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)originIndex;
- (void)setOriginIndex:(long long)arg0;
- (id)uploadUri;
- (void)setUploadUri:(id)arg0;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (void)setFileURL:(id)arg0;
- (id)fileURL;
- (id)userInfo;
- (long long)progress;
- (void)setError:(id)arg0;
- (void)setProgress:(long long)arg0;
- (id)error;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;

@end
