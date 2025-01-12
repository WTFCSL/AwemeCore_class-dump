//
//     Generated by private class-dump
//

@class UIImage, NSString;

@interface AWEPOICommentVerifiedImageModel : NSObject {
    UIImage *_commentImage;
    NSString *_commentImageUri;
    NSString *_commentImageURL;
    NSString *_commentImageBase64String;
    unsigned long long _commentImageType;
}

@property (retain, nonatomic) UIImage *commentImage;
@property (copy, nonatomic) NSString *commentImageUri;
@property (copy, nonatomic) NSString *commentImageURL;
@property (copy, nonatomic) NSString *commentImageBase64String;
@property (nonatomic) unsigned long long commentImageType;

- (void)setCommentImage:(id)arg0;
- (id)commentImage;
- (unsigned long long)commentImageType;
- (void)setCommentImageBase64String:(id)arg0;
- (void)setCommentImageType:(unsigned long long)arg0;
- (void)setCommentImageUri:(id)arg0;
- (void)setCommentImageURL:(id)arg0;
- (id)commentImageUri;
- (id)commentImageURL;
- (id)commentImageBase64String;
- (void).cxx_destruct;

@end
