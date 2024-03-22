//
//     Generated by private class-dump
//

@class AWECommentAdComponent, AWEUserModel, AWECommentIntentionComponentModel, AWECommentUserGuideInfoModel, NSMutableArray, NSString, AWEAwemeModel, UIImage, AWECommentAttitudeModel, NSArray, AWECommentCellLayoutInfo, AWECommentCellViewModel, AWEURLModel, AWECommentAudioModel, AWEIMConversationInfoModel, AWEIMStickerModel, AWECommentSurpriseEggModel, AWECommentQualityStampModel, AWECommentAnchorModel, AWECommentUserAvatarSchema, NSMutableAttributedString, AWECommentLiteInspireInfoModel, AWERelationDynamicLable, AWECommentExtraModel, AWECommentLynxEggModel, NSNumber;
@protocol AWECommentPublishVideoModelProtocol;

@interface AWECommentModel : AWEBaseApiModel <AWESearchHotSpotCommentModelDelegate, AWEHotSpotCommentModelDelegate> {
    BOOL _likedByCreator;
    BOOL _ignoreBottomTag;
    BOOL _isHot;
    BOOL _needShowChangeUserNameTips;
    BOOL _userDigged;
    BOOL _userBuried;
    BOOL _isCommentTreeHeader;
    BOOL _isPin;
    BOOL _isAdComment;
    BOOL _isVideoTitle;
    BOOL _disableAdTag;
    BOOL _isHaveThreeLevelReplyForSubComment;
    BOOL _isFirstVisitorCmt;
    BOOL _isOuterShown;
    BOOL _hasCreateItem;
    BOOL _isImagePublishing;
    BOOL _updateFromNotice;
    BOOL _commentMarked;
    BOOL _isUserTendToReply;
    BOOL _showCommentIntentionComponent;
    BOOL _isSubComment;
    BOOL _isNeedHighlightBGView;
    BOOL _useV2API;
    BOOL _isNoteComment;
    BOOL _canShare;
    BOOL _isItemNoticeDisable;
    BOOL _isDuplicate;
    BOOL _didTrackShowEvent;
    BOOL _isUnreadMentionReply;
    BOOL _isCheckBoxUnable;
    BOOL _checked;
    BOOL _isCommentManagerComment;
    BOOL _isCommentSecondLevelPageTreeTopComment;
    BOOL _isFakePostGuidance;
    BOOL _hasCoCreatorInfo;
    BOOL _coCreatorInInviting;
    BOOL _commentContentHidden;
    BOOL _hasQuotedModel;
    BOOL _isShowingCommentShareBtn;
    BOOL _isShowingCommentCapsule;
    BOOL _isShowingCommentCapsuleBeforeFoldComment;
    BOOL _isImagePreload;
    AWEAwemeModel *_replyVideoModel;
    AWEUserModel *_author;
    NSString *_commentID;
    NSString *_viewModelUniqueID;
    NSString *_content;
    NSString *_awemeID;
    NSNumber *_serviceID;
    NSNumber *_groupID;
    NSNumber *_createTime;
    NSNumber *_diggCount;
    long long _status;
    NSArray *_authorInteractionLabelArray;
    NSString *_replyID;
    NSString *_replySubCommentID;
    NSString *_replySubCommentAutherName;
    long long _tagType;
    NSString *_tagText;
    NSString *_tagColor;
    NSString *_tagTextColor;
    NSString *_tagURL;
    NSArray *_fansTagArray;
    NSArray *_replyComments;
    NSArray *_textExtras;
    AWECommentExtraModel *_commentExtras;
    AWECommentAdComponent *_adComponentExtra;
    NSArray *_commentVideoReplyStruct;
    NSString *_adLinkText;
    NSArray *_adLinkIcons;
    AWEAwemeModel *_model;
    AWERelationDynamicLable *_relationLabel;
    NSString *_repostId;
    NSNumber *_subCommentCount;
    NSNumber *_subReplyCommentCount;
    NSString *_subCommentRootCommentID;
    NSString *_replyUserId;
    NSString *_commentShowVV;
    AWEIMStickerModel *_sticker;
    NSArray *_imageList;
    NSArray *_musicInfos;
    NSNumber *_favoriteCommentIncrement;
    NSNumber *_favoriteCommentTimestamp;
    NSNumber *_userDiggTimestamp;
    AWEAwemeModel *_awemeModel;
    NSString *_rating;
    long long _defaultText;
    NSString *_sortTags;
    NSString *_parentSortTags;
    NSNumber *_companySubType;
    NSString *_adLinkTitle;
    NSNumber *_adLinkComponentID;
    UIImage *_sendingImage;
    NSString *_sendingImageSource;
    NSArray *_sendingImageList;
    id<AWECommentPublishVideoModelProtocol> _sendingVideoModel;
    AWEIMConversationInfoModel *_conversationInfo;
    UIImage *_previewImage;
    UIImage *_previewAvatarImage;
    AWECommentUserGuideInfoModel *_commentUserGuideInfo;
    AWECommentAudioModel *_audioModel;
    AWECommentAttitudeModel *_attitudeModel;
    long long _contentType;
    AWECommentIntentionComponentModel *_commentIntentionComponent;
    unsigned long long _commentIntentionComponentTriggerType;
    AWEAwemeModel *_noticeCoverModel;
    NSString *_itemUserID;
    long long _replyStyle;
    NSNumber *_showCollapseCount;
    NSString *_labelInfo;
    AWECommentSurpriseEggModel *_commentEasterEgg;
    AWECommentLynxEggModel *_commentLynxEgg;
    AWECommentLiteInspireInfoModel *_liteInspireInfo;
    NSString *_ipLabel;
    AWECommentQualityStampModel *_qualityCommentStampConfig;
    long long _retryCount;
    AWECommentUserAvatarSchema *_userAvatarSchema;
    NSString *_coCreatorTip;
    NSNumber *_customCommentLongPressPanelStyle;
    AWEUserModel *_commentAuthor;
}

@property (copy, nonatomic) NSString *commentCellIdentifier;
@property (nonatomic) long long commentDirection;
@property (nonatomic) long long isIndepentCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWECommentModel *mainComment;
@property (readonly, nonatomic) AWECommentModel *quotedComment;
@property (retain, nonatomic) NSMutableAttributedString *preProcessedAttributedString;
@property (copy, nonatomic) NSString *replyMethod;
@property (nonatomic) BOOL isQuotedMainComment;
@property (nonatomic) long long postState;
@property (copy, nonatomic) NSString *originContent;
@property (nonatomic) long long actionsState;
@property (readonly, nonatomic) NSMutableArray *actionQueue;
@property (retain, nonatomic) AWEURLModel *localURL;
@property (retain, nonatomic) AWECommentAnchorModel *musicAnchorModel;
@property (retain, nonatomic) AWECommentAnchorModel *extraAnchorModel;
@property (readonly, copy, nonatomic) NSString *parentCommentID;
@property (nonatomic) BOOL isDisplaySubCommentIndentationStyle;
@property (nonatomic) BOOL hadInitExpanded;
@property (nonatomic) BOOL moreMaxLine;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL forceExpand;
@property (nonatomic) unsigned long long visibleLength;
@property (retain, nonatomic) AWECommentCellLayoutInfo *layoutInfo;
@property (retain, nonatomic) AWECommentCellViewModel *contextInfo;
@property (nonatomic) long long adLinkType;
@property (nonatomic) BOOL isTrackShowed;
@property (nonatomic) BOOL hasAdCommentForm;
@property (nonatomic) BOOL adCommentFormShown;
@property (copy, nonatomic) NSString *commentCellIdentifier;
@property (nonatomic) long long commentDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *commentHeight;
@property (nonatomic) BOOL isRichAwemeDesc;
@property (readonly, nonatomic) NSMutableAttributedString *displayContent;
@property (retain, nonatomic) AWEUserModel *commentAuthor;
@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *viewModelUniqueID;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSNumber *serviceID;
@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSNumber *createTime;
@property (retain, nonatomic) NSNumber *diggCount;
@property (nonatomic) long long status;
@property (retain, nonatomic) AWEUserModel *author;
@property (readonly, copy, nonatomic) NSArray *authorInteractionLabelArray;
@property (nonatomic) BOOL likedByCreator;
@property (nonatomic) BOOL ignoreBottomTag;
@property (nonatomic) BOOL isHot;
@property (nonatomic) BOOL needShowChangeUserNameTips;
@property (copy, nonatomic) NSString *replyID;
@property (copy, nonatomic) NSString *replySubCommentID;
@property (copy, nonatomic) NSString *replySubCommentAutherName;
@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *tagColor;
@property (copy, nonatomic) NSString *tagTextColor;
@property (copy, nonatomic) NSString *tagURL;
@property (copy, nonatomic) NSArray *fansTagArray;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) BOOL userBuried;
@property (copy, nonatomic) NSArray *replyComments;
@property (copy, nonatomic) NSArray *textExtras;
@property (retain, nonatomic) AWECommentExtraModel *commentExtras;
@property (nonatomic) BOOL isCommentTreeHeader;
@property (retain, nonatomic) AWECommentAdComponent *adComponentExtra;
@property (nonatomic) BOOL isPin;
@property (retain, nonatomic) NSArray *commentVideoReplyStruct;
@property (nonatomic) BOOL isAdComment;
@property (nonatomic) BOOL isVideoTitle;
@property (nonatomic) BOOL disableAdTag;
@property (copy, nonatomic) NSString *adLinkText;
@property (copy, nonatomic) NSArray *adLinkIcons;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWERelationDynamicLable *relationLabel;
@property (copy, nonatomic) NSString *repostId;
@property (retain, nonatomic) NSNumber *subCommentCount;
@property (retain, nonatomic) NSNumber *subReplyCommentCount;
@property (copy, nonatomic) NSString *subCommentRootCommentID;
@property (nonatomic) BOOL isHaveThreeLevelReplyForSubComment;
@property (copy, nonatomic) NSString *replyUserId;
@property (copy, nonatomic) NSString *commentShowVV;
@property (retain, nonatomic) AWEIMStickerModel *sticker;
@property (retain, nonatomic) NSArray *imageList;
@property (retain, nonatomic) NSArray *musicInfos;
@property (retain, nonatomic) NSNumber *favoriteCommentIncrement;
@property (retain, nonatomic) NSNumber *favoriteCommentTimestamp;
@property (retain, nonatomic) NSNumber *userDiggTimestamp;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isFirstVisitorCmt;
@property (copy, nonatomic) NSString *rating;
@property (nonatomic) long long defaultText;
@property (copy, nonatomic) NSString *sortTags;
@property (copy, nonatomic) NSString *parentSortTags;
@property (nonatomic) BOOL isOuterShown;
@property (nonatomic) BOOL hasCreateItem;
@property (nonatomic) BOOL isImagePublishing;
@property (retain, nonatomic) NSNumber *companySubType;
@property (copy, nonatomic) NSString *adLinkTitle;
@property (retain, nonatomic) NSNumber *adLinkComponentID;
@property (nonatomic) BOOL updateFromNotice;
@property (retain, nonatomic) UIImage *sendingImage;
@property (retain, nonatomic) NSString *sendingImageSource;
@property (retain, nonatomic) NSArray *sendingImageList;
@property (retain, nonatomic) id<AWECommentPublishVideoModelProtocol> sendingVideoModel;
@property (retain, nonatomic) AWEIMConversationInfoModel *conversationInfo;
@property (nonatomic) BOOL commentMarked;
@property (weak, nonatomic) UIImage *previewImage;
@property (retain, nonatomic) UIImage *previewAvatarImage;
@property (retain, nonatomic) AWECommentUserGuideInfoModel *commentUserGuideInfo;
@property (retain, nonatomic) AWECommentAudioModel *audioModel;
@property (retain, nonatomic) AWECommentAttitudeModel *attitudeModel;
@property (nonatomic) BOOL isUserTendToReply;
@property (nonatomic) long long contentType;
@property (retain, nonatomic) AWECommentIntentionComponentModel *commentIntentionComponent;
@property (nonatomic) BOOL showCommentIntentionComponent;
@property (nonatomic) unsigned long long commentIntentionComponentTriggerType;
@property (readonly, nonatomic) BOOL isReplyWithVideo;
@property (retain, nonatomic) AWEAwemeModel *replyVideoModel;
@property (retain, nonatomic) AWEAwemeModel *noticeCoverModel;
@property (copy, nonatomic) NSString *itemUserID;
@property (nonatomic) long long replyStyle;
@property (nonatomic) BOOL isSubComment;
@property (nonatomic) BOOL isNeedHighlightBGView;
@property (nonatomic) BOOL useV2API;
@property (retain, nonatomic) NSNumber *showCollapseCount;
@property (copy, nonatomic) NSString *labelInfo;
@property (retain, nonatomic) AWECommentSurpriseEggModel *commentEasterEgg;
@property (retain, nonatomic) AWECommentLynxEggModel *commentLynxEgg;
@property (retain, nonatomic) AWECommentLiteInspireInfoModel *liteInspireInfo;
@property (nonatomic) BOOL isNoteComment;
@property (copy, nonatomic) NSString *ipLabel;
@property (nonatomic) BOOL canShare;
@property (nonatomic) BOOL isItemNoticeDisable;
@property (retain, nonatomic) AWECommentQualityStampModel *qualityCommentStampConfig;
@property (nonatomic) long long retryCount;
@property (nonatomic) BOOL isDuplicate;
@property (nonatomic) BOOL didTrackShowEvent;
@property (nonatomic) BOOL isUnreadMentionReply;
@property (retain, nonatomic) AWECommentUserAvatarSchema *userAvatarSchema;
@property (nonatomic) BOOL isCheckBoxUnable;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL isCommentManagerComment;
@property (nonatomic) BOOL isCommentSecondLevelPageTreeTopComment;
@property (nonatomic) BOOL isFakePostGuidance;
@property (nonatomic) BOOL hasCoCreatorInfo;
@property (nonatomic) BOOL coCreatorInInviting;
@property (copy, nonatomic) NSString *coCreatorTip;
@property (nonatomic) BOOL commentContentHidden;
@property (nonatomic) BOOL hasQuotedModel;
@property (nonatomic) BOOL isShowingCommentShareBtn;
@property (nonatomic) BOOL isShowingCommentCapsule;
@property (nonatomic) BOOL isShowingCommentCapsuleBeforeFoldComment;
@property (retain, nonatomic) NSNumber *customCommentLongPressPanelStyle;
@property (nonatomic) BOOL isImagePreload;
@property (readonly, nonatomic) BOOL isRichMediaComment;

+ (id)imageListJSONTransformer;
+ (id)audioModelJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)textExtrasJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)awemeModelJSONTransformer;
+ (id)commentExtrasJSONTransformer;
+ (id)commentVideoReplyStructJSONTransformer;
+ (id)attitudeModelJSONTransformer;
+ (id)qualityCommentStampConfigJSONTransformer;
+ (id)fansTagArrayJSONTransformer;
+ (id)musicInfosJSONTransformer;
+ (id)commentAuthorJSONTransformer;
+ (id)authorInteractionLabelArrayJSONTransformer;
+ (id)userDiggedJSONTransformer;
+ (id)replyCommentsJSONTransformer;
+ (id)stickerJSONTransformer;
+ (id)replyVideoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commentContent;
- (long long)diggedCount;
- (void)setDiggedCount:(long long)arg0;
- (void)setIsDigged:(BOOL)arg0;
- (BOOL)isDigged;
- (long long)commentDirection;
- (id)commentCellIdentifier;
- (id)avatarImageArray;
- (void)setCommentDirection:(long long)arg0;
- (void)setCommentCellIdentifier:(id)arg0;
- (long long)isIndepentCard;
- (void)setIsIndepentCard:(long long)arg0;
- (id)nickName;
- (id)awemeModel;
- (id)audioModel;
- (void)setAudioModel:(id)arg0;
- (id)conversationInfo;
- (void)setAwemeModel:(id)arg0;
- (void)setReplyUserId:(id)arg0;
- (void)setReplyID:(id)arg0;
- (id)replySubCommentID;
- (id)commentID;
- (id)replyComments;
- (id)diggCount;
- (BOOL)userDigged;
- (void)setDiggCount:(id)arg0;
- (BOOL)commentContentHidden;
- (BOOL)isRichMediaComment;
- (BOOL)isPin;
- (id)userAvatarSchema;
- (BOOL)likedByCreator;
- (id)firstAuthorInteractionLabel;
- (id)adComponentExtra;
- (BOOL)moreMaxLine;
- (BOOL)disableAdTag;
- (id)adLinkText;
- (id)adLinkIcons;
- (BOOL)isHot;
- (id)adLinkComponentID;
- (void)refreshActionsState;
- (void)setStateBuried:(BOOL)arg0;
- (void)setLikedByCreator:(BOOL)arg0;
- (id)quotedComment;
- (void)setHasQuotedModel:(BOOL)arg0;
- (BOOL)isUserTendToReply;
- (void)setStateDigged:(BOOL)arg0;
- (BOOL)showCommentIntentionComponent;
- (id)commentIntentionComponent;
- (void)setCommentIntentionComponent:(id)arg0;
- (void)setShowCommentIntentionComponent:(BOOL)arg0;
- (void)setCommentIntentionComponentTriggerType:(unsigned long long)arg0;
- (BOOL)hasQuotedModel;
- (void)setIsImagePublishing:(BOOL)arg0;
- (void)setPreviewAvatarImage:(id)arg0;
- (id)tagURL;
- (id)commentVideoReplyStruct;
- (BOOL)isCheckBoxUnable;
- (id)repostId;
- (void)setReplyMethod:(id)arg0;
- (BOOL)isDisplaySubCommentIndentationStyle;
- (id)replySubCommentAutherName;
- (BOOL)hasCreateItem;
- (BOOL)isImagePublishing;
- (BOOL)isNeedHighlightBGView;
- (void)setIsNeedHighlightBGView:(BOOL)arg0;
- (BOOL)isVideoTitle;
- (id)extraAnchorModel;
- (id)musicAnchorModel;
- (BOOL)isShowingCommentCapsule;
- (BOOL)forceExpand;
- (void)setMoreMaxLine:(BOOL)arg0;
- (id)ipLabel;
- (id)coCreatorTip;
- (BOOL)coCreatorInInviting;
- (id)viewModelUniqueID;
- (void)setViewModelUniqueID:(id)arg0;
- (id)commentUserGuideInfo;
- (BOOL)isOuterShown;
- (id)musicInfos;
- (void)setReplySubCommentID:(id)arg0;
- (void)setUseV2API:(BOOL)arg0;
- (void)setCommentMarked:(BOOL)arg0;
- (BOOL)commentMarked;
- (void)setIgnoreBottomTag:(BOOL)arg0;
- (void)setIsFirstVisitorCmt:(BOOL)arg0;
- (void)setCommentID:(id)arg0;
- (long long)postState;
- (id)commentEasterEgg;
- (id)commentLynxEgg;
- (BOOL)isAdComment;
- (id)previewAvatarImage;
- (id)subCommentCount;
- (void)setAwemeID:(id)arg0;
- (void)setImageList:(id)arg0;
- (id)sendingImage;
- (id)sendingImageList;
- (id)sendingImageSource;
- (id)awemeID;
- (void)setPostState:(long long)arg0;
- (id)replyUserId;
- (void)setHadInitExpanded:(BOOL)arg0;
- (void)setTagText:(id)arg0;
- (void)setForceExpand:(BOOL)arg0;
- (void)setReplyVideoModel:(id)arg0;
- (void)setCommentVideoReplyStruct:(id)arg0;
- (void)setTextExtras:(id)arg0;
- (void)setIsSubComment:(BOOL)arg0;
- (void)setReplyStyle:(long long)arg0;
- (void)setReplySubCommentAutherName:(id)arg0;
- (unsigned long long)commentIntentionComponentTriggerType;
- (id)liteInspireInfo;
- (void)setLiteInspireInfo:(id)arg0;
- (void)setAttitudeModel:(id)arg0;
- (id)attitudeModel;
- (BOOL)isSubComment;
- (BOOL)isQuotedMainComment;
- (id)customCommentLongPressPanelStyle;
- (id)contentWithoutGroupInfo;
- (id)parentSortTags;
- (id)textExtras;
- (BOOL)isCommentSecondLevelPageTreeTopComment;
- (id)parentCommentID;
- (long long)replyStyle;
- (BOOL)isStartWithGroup;
- (BOOL)isContainImage;
- (BOOL)isRichAwemeDesc;
- (BOOL)allowReplyWithStudio;
- (void)setOriginContent:(id)arg0;
- (void)setSendingImageList:(id)arg0;
- (void)setSendingVideoModel:(id)arg0;
- (void)setReplyComments:(id)arg0;
- (void)setConversationInfo:(id)arg0;
- (void)setParentSortTags:(id)arg0;
- (void)setUpdateFromNotice:(BOOL)arg0;
- (id)originContent;
- (void)setIsPin:(BOOL)arg0;
- (void)setIsCommentManagerComment:(BOOL)arg0;
- (void)setIsCheckBoxUnable:(BOOL)arg0;
- (id)sendingVideoModel;
- (id)tagText;
- (void)setTagTextColor:(id)arg0;
- (id)mainComment;
- (void)setSubCommentCount:(id)arg0;
- (void)setUserDigged:(BOOL)arg0;
- (id)replyVideoModel;
- (BOOL)isImagePreload;
- (void)setIsDisplaySubCommentIndentationStyle:(BOOL)arg0;
- (id)favoriteCommentTimestamp;
- (void)setFavoriteCommentTimestamp:(id)arg0;
- (void)setIsFakePostGuidance:(BOOL)arg0;
- (BOOL)isFakePostGuidance;
- (void)setSendingImage:(id)arg0;
- (void)setSendingImageSource:(id)arg0;
- (BOOL)hasAdCommentForm;
- (BOOL)adCommentFormShown;
- (void)setAdCommentFormShown:(BOOL)arg0;
- (BOOL)isTrackShowed;
- (void)setIsTrackShowed:(BOOL)arg0;
- (void)setMusicAnchorModel:(id)arg0;
- (BOOL)isHaveThreeLevelReplyForSubComment;
- (void)setIsVideoTitle:(BOOL)arg0;
- (void)setIsRichAwemeDesc:(BOOL)arg0;
- (void)setExtraAnchorModel:(id)arg0;
- (void)setHasCoCreatorInfo:(BOOL)arg0;
- (void)setCoCreatorInInviting:(BOOL)arg0;
- (void)setCoCreatorTip:(id)arg0;
- (void)setSubReplyCommentCount:(id)arg0;
- (id)relationLabel;
- (BOOL)isFirstVisitorCmt;
- (id)replyMethod;
- (BOOL)isNoteComment;
- (id)qualityCommentStampConfig;
- (id)sortTags;
- (id)subReplyCommentCount;
- (void)setIsCommentTreeHeader:(BOOL)arg0;
- (BOOL)isReplyWithVideo;
- (void)setIsShowingCommentCapsule:(BOOL)arg0;
- (void)setCommentContentHidden:(BOOL)arg0;
- (void)setIsCommentSecondLevelPageTreeTopComment:(BOOL)arg0;
- (BOOL)isShowingCommentCapsuleBeforeFoldComment;
- (void)setIsShowingCommentCapsuleBeforeFoldComment:(BOOL)arg0;
- (void)setHasCreateItem:(BOOL)arg0;
- (void)setIsAdComment:(BOOL)arg0;
- (void)setAdLinkText:(id)arg0;
- (void)setAdLinkIcons:(id)arg0;
- (void)setAdLinkType:(long long)arg0;
- (long long)adLinkType;
- (BOOL)userBuried;
- (void)setUserBuried:(BOOL)arg0;
- (id)companySubType;
- (void)setCompanySubType:(id)arg0;
- (void)setAdLinkTitle:(id)arg0;
- (void)setAdLinkComponentID:(id)arg0;
- (void)setRelationLabel:(id)arg0;
- (BOOL)isUnreadMentionReply;
- (void)setIsHot:(BOOL)arg0;
- (void)setCanShare:(BOOL)arg0;
- (id)commentContent;
- (id)authorInteractionLabelArray;
- (id)commentAuthor;
- (void)reconstructAvatarURLWithSchema:(id)arg0;
- (void)setUserAvatarSchema:(id)arg0;
- (id)firstReplyComment;
- (BOOL)ignoreBottomTag;
- (BOOL)needShowChangeUserNameTips;
- (void)setNeedShowChangeUserNameTips:(BOOL)arg0;
- (id)tagTextColor;
- (void)setTagURL:(id)arg0;
- (id)fansTagArray;
- (void)setFansTagArray:(id)arg0;
- (id)commentExtras;
- (void)setCommentExtras:(id)arg0;
- (BOOL)isCommentTreeHeader;
- (void)setAdComponentExtra:(id)arg0;
- (void)setDisableAdTag:(BOOL)arg0;
- (void)setRepostId:(id)arg0;
- (id)subCommentRootCommentID;
- (void)setSubCommentRootCommentID:(id)arg0;
- (void)setIsHaveThreeLevelReplyForSubComment:(BOOL)arg0;
- (id)commentShowVV;
- (void)setCommentShowVV:(id)arg0;
- (void)setMusicInfos:(id)arg0;
- (id)favoriteCommentIncrement;
- (void)setFavoriteCommentIncrement:(id)arg0;
- (id)userDiggTimestamp;
- (void)setUserDiggTimestamp:(id)arg0;
- (void)setSortTags:(id)arg0;
- (void)setIsOuterShown:(BOOL)arg0;
- (id)adLinkTitle;
- (BOOL)updateFromNotice;
- (void)setCommentUserGuideInfo:(id)arg0;
- (void)setIsUserTendToReply:(BOOL)arg0;
- (id)noticeCoverModel;
- (void)setNoticeCoverModel:(id)arg0;
- (id)itemUserID;
- (void)setItemUserID:(id)arg0;
- (BOOL)useV2API;
- (id)showCollapseCount;
- (void)setShowCollapseCount:(id)arg0;
- (void)setCommentEasterEgg:(id)arg0;
- (void)setCommentLynxEgg:(id)arg0;
- (void)setIsNoteComment:(BOOL)arg0;
- (void)setIpLabel:(id)arg0;
- (BOOL)isItemNoticeDisable;
- (void)setIsItemNoticeDisable:(BOOL)arg0;
- (void)setQualityCommentStampConfig:(id)arg0;
- (BOOL)didTrackShowEvent;
- (void)setDidTrackShowEvent:(BOOL)arg0;
- (void)setIsUnreadMentionReply:(BOOL)arg0;
- (BOOL)isCommentManagerComment;
- (BOOL)hasCoCreatorInfo;
- (BOOL)isShowingCommentShareBtn;
- (void)setIsShowingCommentShareBtn:(BOOL)arg0;
- (void)setCustomCommentLongPressPanelStyle:(id)arg0;
- (void)setIsImagePreload:(BOOL)arg0;
- (void)setCommentAuthor:(id)arg0;
- (long long)diggedCount;
- (void)setDiggedCount:(long long)arg0;
- (void)setVisibleLength:(unsigned long long)arg0;
- (BOOL)hadInitExpanded;
- (void)setHasAdCommentForm:(BOOL)arg0;
- (void)setIsQuotedMainComment:(BOOL)arg0;
- (id)preProcessedAttributedString;
- (void)setPreProcessedAttributedString:(id)arg0;
- (unsigned long long)visibleLength;
- (void)setIsDigged:(BOOL)arg0;
- (BOOL)isDigged;
- (long long)commentDirection;
- (id)commentCellIdentifier;
- (BOOL)awehotspot_commentHasShown;
- (id)avatarImageArray;
- (void)setCommentDirection:(long long)arg0;
- (void)setCommentCellIdentifier:(id)arg0;
- (void)setAwehotspot_commentHasShown:(BOOL)arg0;
- (id)commentHeight;
- (void)setCommentHeight:(id)arg0;
- (id)accessibilityContent;
- (void)setGroupID:(id)arg0;
- (void)setContentType:(long long)arg0;
- (void)setModel:(id)arg0;
- (BOOL)expanded;
- (long long)contentType;
- (id)init;
- (id)groupID;
- (BOOL)checked;
- (long long)tagType;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (id)layoutInfo;
- (void).cxx_destruct;
- (void)setRetryCount:(long long)arg0;
- (long long)status;
- (id)model;
- (void)setCreateTime:(id)arg0;
- (long long)retryCount;
- (id)content;
- (id)rating;
- (BOOL)isDuplicate;
- (id)author;
- (void)setServiceID:(id)arg0;
- (id)serviceID;
- (void)setExpanded:(BOOL)arg0;
- (void)setStatus:(long long)arg0;
- (void)setLayoutInfo:(id)arg0;
- (void)setAuthor:(id)arg0;
- (void)setContent:(id)arg0;
- (id)nickName;
- (id)createTime;
- (BOOL)isLivePhoto;
- (void)setChecked:(BOOL)arg0;
- (id)labelInfo;
- (void)setLabelInfo:(id)arg0;
- (long long)defaultText;
- (void)setDefaultText:(long long)arg0;
- (void)setRating:(id)arg0;
- (BOOL)canShare;
- (id)actionQueue;
- (id)contextInfo;
- (void)setContextInfo:(id)arg0;
- (void)setSticker:(id)arg0;
- (id)localURL;
- (void)setPreviewImage:(id)arg0;
- (id)previewImage;
- (void)setLocalURL:(id)arg0;
- (void)setIsDuplicate:(BOOL)arg0;
- (void)setTagType:(long long)arg0;
- (id)sticker;
- (long long)actionsState;
- (void)setActionsState:(long long)arg0;
- (id)replyID;
- (id)imageList;
- (id)displayContent;
- (id)tagColor;
- (void)setTagColor:(id)arg0;

@end
