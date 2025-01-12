//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoShareInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_videoItemId;
    NSString *_authorId;
    NSString *_authorSecId;
    NSString *_authorName;
    NSString *_commentUserId;
    NSString *_commentUserSecId;
    NSString *_commentContent;
    NSString *_commentUserNickname;
    NSString *_commentId;
    NSString *_imageIndex;
    NSString *_shareFromKey;
    NSString *_shareFromType;
    NSString *_extra;
}

@property (retain, nonatomic) NSString *videoItemId;
@property (retain, nonatomic) NSString *authorId;
@property (retain, nonatomic) NSString *authorSecId;
@property (retain, nonatomic) NSString *authorName;
@property (retain, nonatomic) NSString *commentUserId;
@property (retain, nonatomic) NSString *commentUserSecId;
@property (retain, nonatomic) NSString *commentContent;
@property (retain, nonatomic) NSString *commentUserNickname;
@property (retain, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *imageIndex;
@property (copy, nonatomic) NSString *shareFromKey;
@property (copy, nonatomic) NSString *shareFromType;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void)setShareFromType:(id)arg0;
- (void)setShareFromKey:(id)arg0;
- (void)setCommentId:(id)arg0;
- (id)shareFromKey;
- (id)shareFromType;
- (id)commentContent;
- (void)setCommentContent:(id)arg0;
- (id)commentId;
- (id)commentUserId;
- (id)commentUserSecId;
- (id)commentUserNickname;
- (id)videoItemId;
- (id)authorSecId;
- (void)setAuthorSecId:(id)arg0;
- (void)setVideoItemId:(id)arg0;
- (void)setCommentUserId:(id)arg0;
- (void)setCommentUserSecId:(id)arg0;
- (void)setCommentUserNickname:(id)arg0;
- (long long)indexFromType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)extra;
- (id)authorName;
- (void)setAuthorName:(id)arg0;
- (void)setImageIndex:(id)arg0;
- (id)imageIndex;
- (id)authorId;
- (void)setAuthorId:(id)arg0;

@end
