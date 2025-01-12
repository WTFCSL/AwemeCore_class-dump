//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, NSArray, AWECommentAudioModel, AWEUserModel, AWEURLModel, AWEVSNoticeDetailModel, AWECommentModel, AWERelationDynamicLable, NSMutableAttributedString, AWEIMStickerModel;

@interface AWEAtNotificationModel : AWEBaseApiModel {
    BOOL _commentUnvisible;
    NSString *_title;
    NSString *_content;
    NSString *_schemaURL;
    AWEAwemeModel *_aweme;
    AWEURLModel *_imageURL;
    AWEURLModel *_maskImageURL;
    long long _subType;
    AWEUserModel *_userInfo;
    AWECommentModel *_replyComment;
    AWECommentModel *_level1Comment;
    AWERelationDynamicLable *_relationLabel;
    long long _commentStatus;
    long long _itemStatus;
    NSString *_labelText;
    long long _labelType;
    long long _interestGroupID;
    NSArray *_commentVideoReplyStruct;
    AWEIMStickerModel *_sticker;
    NSArray *_imageList;
    NSString *_desc;
    NSString *_labelTrack;
    NSArray *_fansTagArray;
    NSArray *_propList;
    AWECommentAudioModel *_audioModel;
    NSString *_assemblyDeleteTipDesc;
    double _contentH;
    double _nameW;
    double _descAndTimeH;
    NSString *_descAndTime;
    AWEVSNoticeDetailModel *_vsNoticeDetail;
    struct CGSize { double width; double height; } _deleteInfoSize;
}

@property (readonly, nonatomic) NSMutableAttributedString *displayContent;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (retain, nonatomic) AWEURLModel *maskImageURL;
@property (nonatomic) long long subType;
@property (retain, nonatomic) AWEUserModel *userInfo;
@property (retain, nonatomic) AWECommentModel *replyComment;
@property (retain, nonatomic) AWECommentModel *level1Comment;
@property (retain, nonatomic) AWERelationDynamicLable *relationLabel;
@property (nonatomic) long long commentStatus;
@property (nonatomic) long long itemStatus;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) long long labelType;
@property (nonatomic) long long interestGroupID;
@property (retain, nonatomic) NSArray *commentVideoReplyStruct;
@property (retain, nonatomic) AWEIMStickerModel *sticker;
@property (retain, nonatomic) NSArray *imageList;
@property (nonatomic) BOOL commentUnvisible;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *labelTrack;
@property (copy, nonatomic) NSArray *fansTagArray;
@property (retain, nonatomic) NSArray *propList;
@property (retain, nonatomic) AWECommentAudioModel *audioModel;
@property (copy, nonatomic) NSString *assemblyDeleteTipDesc;
@property (nonatomic) double contentH;
@property (nonatomic) double nameW;
@property (nonatomic) double descAndTimeH;
@property (retain, nonatomic) NSString *descAndTime;
@property (nonatomic) struct CGSize { double width; double height; } deleteInfoSize;
@property (retain, nonatomic) AWEVSNoticeDetailModel *vsNoticeDetail;

+ (id)userInfoJSONTransformer;
+ (BOOL)shouldShowContent:(id)arg0;
+ (long long)messageStatusForModel:(id)arg0;
+ (id)imageListJSONTransformer;
+ (id)imageURLJSONTransformer;
+ (id)awemeJSONTransformer;
+ (id)audioModelJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)commentVideoReplyStructJSONTransformer;
+ (id)fansTagArrayJSONTransformer;
+ (id)stickerJSONTransformer;
+ (id)replyCommentJSONTransformer;
+ (id)vsNoticeDetailJSONTransformer;
+ (id)maskImageURLJSONTransformer;
+ (id)level1CommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)audioModel;
- (void)setAudioModel:(id)arg0;
- (id)aweme;
- (id)commentVideoReplyStruct;
- (void)setAweme:(id)arg0;
- (void)setImageList:(id)arg0;
- (void)setCommentVideoReplyStruct:(id)arg0;
- (long long)interestGroupID;
- (void)setInterestGroupID:(long long)arg0;
- (void)setReplyComment:(id)arg0;
- (id)replyComment;
- (id)relationLabel;
- (void)setRelationLabel:(id)arg0;
- (id)level1Comment;
- (void)setLabelTrack:(id)arg0;
- (BOOL)shouldEnterDetailPage;
- (BOOL)commentUnvisible;
- (id)vsNoticeDetail;
- (BOOL)shouldEnterMentionFeed;
- (id)schemaURL;
- (BOOL)shouldShowCover;
- (void)setNameW:(double)arg0;
- (id)labelTrack;
- (id)trackPropList;
- (BOOL)shouldShowComment;
- (id)assemblyDeleteTipDesc;
- (id)descAndTime;
- (long long)itemStatus;
- (void)setItemStatus:(long long)arg0;
- (void)setSchemaURL:(id)arg0;
- (id)fansTagArray;
- (void)setFansTagArray:(id)arg0;
- (id)maskImageURL;
- (void)setMaskImageURL:(id)arg0;
- (id)accessibilityContent;
- (id)targetCommentID;
- (void)setDescAndTime:(id)arg0;
- (void)setDeleteInfoSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setContentH:(double)arg0;
- (void)setDescAndTimeH:(double)arg0;
- (struct CGSize { double x0; double x1; })deleteInfoSize;
- (void)setAssemblyDeleteTipDesc:(id)arg0;
- (double)contentH;
- (id)propList;
- (long long)commentStatus;
- (void)setLevel1Comment:(id)arg0;
- (void)setCommentStatus:(long long)arg0;
- (void)setCommentUnvisible:(BOOL)arg0;
- (void)setPropList:(id)arg0;
- (double)nameW;
- (double)descAndTimeH;
- (void)setVsNoticeDetail:(id)arg0;
- (id)desc;
- (long long)labelType;
- (id)init;
- (void)setLabelText:(id)arg0;
- (void).cxx_destruct;
- (void)setSubType:(long long)arg0;
- (void)setUserInfo:(id)arg0;
- (void)setImageURL:(id)arg0;
- (long long)subType;
- (id)content;
- (id)labelText;
- (id)imageURL;
- (id)title;
- (void)setContent:(id)arg0;
- (id)userInfo;
- (void)setLabelType:(long long)arg0;
- (void)setDesc:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setSticker:(id)arg0;
- (id)sticker;
- (id)imageList;
- (id)displayContent;

@end
