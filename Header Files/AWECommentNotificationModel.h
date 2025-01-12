//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, NSArray, AWEInteractModularizationTextModel, AWEUserModel, AWENoticeLiteCommentInspireInfoModel, AWEVSNoticeDetailModel, AWECommentModel, AWERelationDynamicLable;

@interface AWECommentNotificationModel : AWEBaseApiModel {
    BOOL _commentUnvisible;
    BOOL _isFromOwnPostedRequest;
    AWECommentModel *_comment;
    AWEAwemeModel *_aweme;
    NSString *_content;
    AWEInteractModularizationTextModel *_messageHint;
    long long _noticeType;
    AWECommentModel *_replyComment;
    AWECommentModel *_level1Comment;
    AWERelationDynamicLable *_relationLabel;
    NSString *_forWardID;
    NSString *_parentID;
    NSString *_labelText;
    long long _labelType;
    long long _interestGroupID;
    NSString *_title;
    NSString *_desc;
    NSString *_labelTrack;
    NSArray *_fromUser;
    AWEUserModel *_relatedUser;
    long long _mergeCount;
    NSString *_assemblyDeleteTipDesc;
    NSArray *_fansTagArray;
    NSString *_cooperationInfo;
    double _commentH;
    double _nameW;
    double _desAndTimeH;
    NSString *_descAndTime;
    AWEVSNoticeDetailModel *_vsNoticeDetail;
    AWENoticeLiteCommentInspireInfoModel *_liteCommentInspireInfoModel;
    NSString *_supplement;
    struct CGSize { double width; double height; } _deleteInfoSize;
}

@property (retain, nonatomic) AWECommentModel *comment;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEInteractModularizationTextModel *messageHint;
@property (nonatomic) long long noticeType;
@property (retain, nonatomic) AWECommentModel *replyComment;
@property (retain, nonatomic) AWECommentModel *level1Comment;
@property (retain, nonatomic) AWERelationDynamicLable *relationLabel;
@property (copy, nonatomic) NSString *forWardID;
@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) long long labelType;
@property (nonatomic) long long interestGroupID;
@property (nonatomic) BOOL commentUnvisible;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *labelTrack;
@property (nonatomic) BOOL isFromOwnPostedRequest;
@property (copy, nonatomic) NSArray *fromUser;
@property (retain, nonatomic) AWEUserModel *relatedUser;
@property (nonatomic) long long mergeCount;
@property (copy, nonatomic) NSString *assemblyDeleteTipDesc;
@property (copy, nonatomic) NSArray *fansTagArray;
@property (copy, nonatomic) NSString *cooperationInfo;
@property (nonatomic) double commentH;
@property (nonatomic) double nameW;
@property (nonatomic) double desAndTimeH;
@property (retain, nonatomic) NSString *descAndTime;
@property (nonatomic) struct CGSize { double width; double height; } deleteInfoSize;
@property (retain, nonatomic) AWEVSNoticeDetailModel *vsNoticeDetail;
@property (retain, nonatomic) AWENoticeLiteCommentInspireInfoModel *liteCommentInspireInfoModel;
@property (copy, nonatomic) NSString *supplement;

+ (id)awemeJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)fansTagArrayJSONTransformer;
+ (id)commentJSONTransformer;
+ (id)replyCommentJSONTransformer;
+ (id)vsNoticeDetailJSONTransformer;
+ (id)level1CommentJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)liteCommentInspireInfoModelJSONTransformer;
+ (id)relatedUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)aweme;
- (void)setAweme:(id)arg0;
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
- (long long)mergeCount;
- (id)forWardID;
- (BOOL)shouldShowCover;
- (void)setFromUser:(id)arg0;
- (void)setNameW:(double)arg0;
- (id)labelTrack;
- (BOOL)shouldShowComment;
- (id)assemblyDeleteTipDesc;
- (id)descAndTime;
- (id)liteCommentInspireInfoModel;
- (void)setNoticeType:(long long)arg0;
- (id)fansTagArray;
- (void)setFansTagArray:(id)arg0;
- (double)commentH;
- (void)setCommentH:(double)arg0;
- (id)cooperationInfo;
- (void)setCooperationInfo:(id)arg0;
- (void)setMergeCount:(long long)arg0;
- (BOOL)isCommentPolymericGroup;
- (BOOL)isCommentMultiItemPolymeric;
- (BOOL)isFromOwnPostedRequest;
- (BOOL)isContainAweme;
- (BOOL)isCommentPolymeric;
- (id)relatedUser;
- (BOOL)isHotspotCommentGroup;
- (void)setDescAndTime:(id)arg0;
- (void)setDesAndTimeH:(double)arg0;
- (void)setDeleteInfoSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })deleteInfoSize;
- (double)desAndTimeH;
- (void)setIsFromOwnPostedRequest:(BOOL)arg0;
- (void)setAssemblyDeleteTipDesc:(id)arg0;
- (id)messageHint;
- (void)setLevel1Comment:(id)arg0;
- (void)setCommentUnvisible:(BOOL)arg0;
- (double)nameW;
- (void)setVsNoticeDetail:(id)arg0;
- (void)setMessageHint:(id)arg0;
- (void)setForWardID:(id)arg0;
- (void)setRelatedUser:(id)arg0;
- (void)setLiteCommentInspireInfoModel:(id)arg0;
- (void)setSupplement:(id)arg0;
- (id)desc;
- (long long)labelType;
- (void)setLabelText:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (id)labelText;
- (void)setParentID:(id)arg0;
- (id)title;
- (void)setContent:(id)arg0;
- (id)comment;
- (id)supplement;
- (void)setLabelType:(long long)arg0;
- (id)parentID;
- (void)setDesc:(id)arg0;
- (void)setTitle:(id)arg0;
- (long long)noticeType;
- (void)setComment:(id)arg0;
- (id)fromUser;

@end
