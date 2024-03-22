//
//     Generated by private class-dump
//

@class NSString;

@interface AWEImageCommentPublishVideoModel : AWEBaseApiModel {
    NSString *_imageCommentID;
    NSString *_imageCommentOriginalAwemeID;
    NSString *_imageCommentOriginalAwemeTitle;
    NSString *_imageCommentOriginalAwemeAuthorName;
    NSString *_imageCommentOriginalAwemeAuthorID;
    long long _imageCommentVersion;
}

@property (copy, nonatomic) NSString *imageCommentID;
@property (copy, nonatomic) NSString *imageCommentOriginalAwemeID;
@property (copy, nonatomic) NSString *imageCommentOriginalAwemeTitle;
@property (copy, nonatomic) NSString *imageCommentOriginalAwemeAuthorName;
@property (copy, nonatomic) NSString *imageCommentOriginalAwemeAuthorID;
@property (nonatomic) long long imageCommentVersion;

+ (id)JSONKeyPathsByPropertyKey;

- (id)imageCommentOriginalAwemeID;
- (void)setImageCommentVersion:(long long)arg0;
- (long long)imageCommentVersion;
- (id)imageCommentID;
- (void)setImageCommentID:(id)arg0;
- (void)setImageCommentOriginalAwemeID:(id)arg0;
- (id)imageCommentOriginalAwemeTitle;
- (void)setImageCommentOriginalAwemeTitle:(id)arg0;
- (id)imageCommentOriginalAwemeAuthorName;
- (void)setImageCommentOriginalAwemeAuthorName:(id)arg0;
- (id)imageCommentOriginalAwemeAuthorID;
- (void)setImageCommentOriginalAwemeAuthorID:(id)arg0;
- (void).cxx_destruct;

@end
