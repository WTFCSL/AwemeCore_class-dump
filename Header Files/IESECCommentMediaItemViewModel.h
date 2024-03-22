//
//     Generated by private class-dump
//

@class NSString, IESECCommentPhotoModel, NSNumber, IESECHeadVideoModel;

@interface IESECCommentMediaItemViewModel : NSObject {
    BOOL _liked;
    NSNumber *_commentID;
    NSString *_content;
    NSString *_skuDescription;
    NSString *_userName;
    NSNumber *_likesCount;
    long long _browserIndex;
    long long _commentIndex;
    IESECCommentPhotoModel *_photo;
    IESECHeadVideoModel *_video;
    long long _photoCount;
    long long _videoCount;
}

@property (retain, nonatomic) NSNumber *commentID;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *skuDescription;
@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) NSNumber *likesCount;
@property (nonatomic) BOOL liked;
@property (nonatomic) long long browserIndex;
@property (nonatomic) long long commentIndex;
@property (retain, nonatomic) IESECCommentPhotoModel *photo;
@property (retain, nonatomic) IESECHeadVideoModel *video;
@property (nonatomic) long long photoCount;
@property (nonatomic) long long videoCount;

- (id)commentID;
- (void)setCommentID:(id)arg0;
- (id)likesCount;
- (void)setLikesCount:(id)arg0;
- (id)skuDescription;
- (void)setSkuDescription:(id)arg0;
- (long long)browserIndex;
- (long long)commentIndex;
- (void)setBrowserIndex:(long long)arg0;
- (void)setCommentIndex:(long long)arg0;
- (id)userName;
- (void).cxx_destruct;
- (void)setUserName:(id)arg0;
- (id)content;
- (void)setVideo:(id)arg0;
- (void)setLiked:(BOOL)arg0;
- (void)setContent:(id)arg0;
- (id)video;
- (long long)photoCount;
- (id)photo;
- (void)setPhoto:(id)arg0;
- (BOOL)liked;
- (long long)videoCount;
- (void)setVideoCount:(long long)arg0;
- (void)setPhotoCount:(long long)arg0;

@end
