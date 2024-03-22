//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEAwemeResponseModel, NSObject, UITapGestureRecognizer, MASConstraint, AWEPlayInteractionDescriptionElementViewModel, NSMutableAttributedString, UIView, CAGradientLayer, NSString, UILongPressGestureRecognizer, AWEDescriptionLabel, UIScrollView, FBKVOController, NSMutableArray, NSNumber, YYLabel, AWEPlayInteractionDescriptionLiveStatusManager;
@protocol AWEAdMannorAdLinkMoreManager;

@interface AWEPlayInteractionDescriptionElement : AWEPlayInteractionLeftElement <AWEUserMessage, UIGestureRecognizerDelegate, UIScrollViewDelegate, AWERelatedVideoNewDetailTransitionOuterContentProvider, AWEPlayInteractionComponentGlobalPriorityComponentProtocol, AWERVDSlideTransitionOuterContentProvider, AWERelatedVideoDetailVideoViewControllerDelegate> {
    BOOL _descriptionLabelIsExpanded;
    BOOL _hasScollableExpandLabel;
    BOOL _isSearchHighValueHashTagHidden;
    BOOL _needDemoteLineCount;
    BOOL _isMusicInfoShow;
    BOOL _isStablePageEntranceShowing;
    BOOL _isTapedDesc;
    BOOL _canCaptionExpand;
    BOOL _isDescTruncated;
    BOOL _hasTrendingShowTrackPost;
    BOOL _hasHotSpotTagShowTrackPost;
    BOOL _hasHashTagShowTrackPost;
    BOOL _hasSearchText;
    BOOL _shouldOptimizeDescTailLine;
    BOOL _shouldTruncationBeforeOptimize;
    BOOL _fixNumOfLinesForDanmaku;
    BOOL _disableHitTestThrottle;
    BOOL _atUserHasRecord;
    AWEDescriptionLabel *_descriptionLabel;
    long long _foldRow;
    NSMutableAttributedString *_descriptionLabelOriginString;
    NSMutableAttributedString *_descriptionLabelExpandedString;
    NSMutableAttributedString *_descriptionForMaskLayer;
    NSString *_duetAwemeId;
    NSNumber *_simplyLiveRoomId;
    NSString *_simplyLiveUserId;
    AWEDescriptionLabel *_adDescriptionLabel;
    NSObject<AWEAdMannorAdLinkMoreManager> *_mannorAdLinkMoreManager;
    UIView *_descriptionGradientView;
    UIScrollView *_outerScrollView;
    UIScrollView *_descriptionScrollView;
    UIView *_descriptionContentView;
    MASConstraint *_descriptionScrollViewHeightConstraint;
    UITapGestureRecognizer *_descLabelTapGesture;
    UILongPressGestureRecognizer *_descLabelLongPressGesture;
    YYLabel *_packLabel;
    CAGradientLayer *_gradientLayer;
    AWEPlayInteractionDescriptionElementViewModel *_viewModel;
    YYLabel *_expandLabel;
    long long _beforeFoldRow;
    double _track_component_height_percent_before_fold;
    double _track_title_height_percent_before_fold;
    FBKVOController *_vmKVO;
    NSNumber *_packStringLineNumberLimit;
    long long _trendingWordsShowTrackPostMark;
    NSMutableArray *_searchWordArray;
    NSMutableDictionary *_searchWordShowMark;
    long long _hashTagShowTrackPostMark;
    NSMutableArray *_hashTagArray;
    NSMutableDictionary *_hashTagShowMark;
    long long _needFoldNumber;
    double _hashTagLength;
    long long _atNumber;
    double _lastWidth;
    UIView *_feedFullScreenSnapView;
    AWEAwemeResponseModel *_relatedModel;
    long long _lineBeforeOptimize;
    long long _lineAfterOptimize;
    double _lastLineWidthBeforeOptimize;
    double _trailingOffsetOfLeftContainer;
    double _descContainerWidth;
    long long _maxRowForNewAlbumImageLongTextLayout;
    AWEPlayInteractionDescriptionLiveStatusManager *_liveStatusManager;
    NSMutableAttributedString *_descriptionOriginalText;
}

@property (retain, nonatomic) AWEDescriptionLabel *descriptionLabel;
@property (nonatomic) BOOL descriptionLabelIsExpanded;
@property (retain, nonatomic) NSMutableAttributedString *descriptionLabelOriginString;
@property (retain, nonatomic) NSMutableAttributedString *descriptionLabelExpandedString;
@property (retain, nonatomic) NSMutableAttributedString *descriptionForMaskLayer;
@property (retain, nonatomic) NSString *duetAwemeId;
@property (retain, nonatomic) NSNumber *simplyLiveRoomId;
@property (retain, nonatomic) NSString *simplyLiveUserId;
@property (retain, nonatomic) AWEDescriptionLabel *adDescriptionLabel;
@property (retain, nonatomic) NSObject<AWEAdMannorAdLinkMoreManager> *mannorAdLinkMoreManager;
@property (retain, nonatomic) UIView *descriptionGradientView;
@property (retain, nonatomic) UIScrollView *outerScrollView;
@property (retain, nonatomic) UIScrollView *descriptionScrollView;
@property (retain, nonatomic) UIView *descriptionContentView;
@property (retain, nonatomic) MASConstraint *descriptionScrollViewHeightConstraint;
@property (retain, nonatomic) UITapGestureRecognizer *descLabelTapGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *descLabelLongPressGesture;
@property (retain, nonatomic) YYLabel *packLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWEPlayInteractionDescriptionElementViewModel *viewModel;
@property (retain, nonatomic) YYLabel *expandLabel;
@property (nonatomic) BOOL hasScollableExpandLabel;
@property (nonatomic) long long foldRow;
@property (nonatomic) long long beforeFoldRow;
@property (nonatomic) double track_component_height_percent_before_fold;
@property (nonatomic) double track_title_height_percent_before_fold;
@property (retain, nonatomic) FBKVOController *vmKVO;
@property (retain, nonatomic) NSNumber *packStringLineNumberLimit;
@property (nonatomic) BOOL isSearchHighValueHashTagHidden;
@property (nonatomic) BOOL needDemoteLineCount;
@property (nonatomic) BOOL isMusicInfoShow;
@property (nonatomic) BOOL isStablePageEntranceShowing;
@property (nonatomic) BOOL isTapedDesc;
@property (nonatomic) BOOL canCaptionExpand;
@property (nonatomic) BOOL isDescTruncated;
@property (nonatomic) BOOL hasTrendingShowTrackPost;
@property (nonatomic) long long trendingWordsShowTrackPostMark;
@property (retain, nonatomic) NSMutableArray *searchWordArray;
@property (retain, nonatomic) NSMutableDictionary *searchWordShowMark;
@property (nonatomic) BOOL hasHotSpotTagShowTrackPost;
@property (nonatomic) BOOL hasHashTagShowTrackPost;
@property (nonatomic) long long hashTagShowTrackPostMark;
@property (retain, nonatomic) NSMutableArray *hashTagArray;
@property (retain, nonatomic) NSMutableDictionary *hashTagShowMark;
@property (nonatomic) BOOL hasSearchText;
@property (nonatomic) long long needFoldNumber;
@property (nonatomic) double hashTagLength;
@property (nonatomic) long long atNumber;
@property (nonatomic) double lastWidth;
@property (retain, nonatomic) UIView *feedFullScreenSnapView;
@property (retain, nonatomic) AWEAwemeResponseModel *relatedModel;
@property (nonatomic) BOOL shouldOptimizeDescTailLine;
@property (nonatomic) long long lineBeforeOptimize;
@property (nonatomic) long long lineAfterOptimize;
@property (nonatomic) double lastLineWidthBeforeOptimize;
@property (nonatomic) BOOL shouldTruncationBeforeOptimize;
@property (nonatomic) double trailingOffsetOfLeftContainer;
@property (nonatomic) double descContainerWidth;
@property (nonatomic) long long maxRowForNewAlbumImageLongTextLayout;
@property (nonatomic) BOOL fixNumOfLinesForDanmaku;
@property (nonatomic) BOOL disableHitTestThrottle;
@property (retain, nonatomic) AWEPlayInteractionDescriptionLiveStatusManager *liveStatusManager;
@property (nonatomic) BOOL atUserHasRecord;
@property (retain, nonatomic) NSMutableAttributedString *descriptionOriginalText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDescriptionHideWithData:(id)arg0 context:(id)arg1;
+ (BOOL)isAdDescriptionHideWithData:(id)arg0 context:(id)arg1;

- (void)attributedLabel:(id)arg0 didSelectLinkWithURL:(id)arg1;
- (void)didFinishLogin;
- (void)initializeElement;
- (void)viewDidDisposed;
- (id)liveStatusManager;
- (id)duetAwemeId;
- (void)setDuetAwemeId:(id)arg0;
- (void)expandDescTextWithParams:(id)arg0;
- (id)adDescriptionLabel;
- (void)setAdDescriptionLabel:(id)arg0;
- (id)createContentDescriptionStringFrom:(id)arg0;
- (void)setDescriptionTextViewContentAnimated:(BOOL)arg0;
- (void)updateViewLayout;
- (BOOL)descriptionLabelIsExpanded;
- (void)setDescriptionLabelOriginString:(id)arg0;
- (void)setDescriptionLabelExpandedString:(id)arg0;
- (id)handleDescriptionEmptyLine:(id)arg0;
- (void)setDescriptionTextViewContent:(id)arg0 animated:(BOOL)arg1 precomputationExpanded:(BOOL)arg2;
- (void)setDescriptionLabelIsExpanded:(BOOL)arg0;
- (void)setKernOfDescriptionAttributedString:(id)arg0;
- (void)updateExpandTagIfNeededWithAttributedString:(id)arg0 precomputationExpanded:(BOOL)arg1;
- (void)updateParagraphStyleWithAttributedString:(id)arg0;
- (void)matchEmoticonIfNeededForDescriptionAttributedString:(id)arg0;
- (unsigned long long)descriptionNumberOfLines;
- (id)useExpandedStringIfNeed;
- (id /* block */)descriptionLabelTapAction:(id)arg0;
- (id)titleExpandStringForAttributeString:(id)arg0;
- (id)descriptionLabelOriginString;
- (struct CGSize { double x0; double x1; })lastLineSizeForAttributeString:(id)arg0 constraintSize:(struct CGSize { double x0; double x1; })arg1;
- (unsigned long long)directionForString:(id)arg0;
- (id)descriptionLabelExpandedString;
- (struct CGSize { double x0; double x1; })lastLineSizeForAttributeString:(id)arg0 constranitSize:(struct CGSize { double x0; double x1; })arg1 maxLineCount:(long long)arg2;
- (id)entryText;
- (id)hotSpotTagColor;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (id)descriptionLabelFont;
- (void)viewController_viewDidAppear;
- (void)trackTrendingWordsClick:(id)arg0;
- (void)layoutElementView;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillDisappear;
- (void)dynamicWidthRemakeLayout;
- (void)p_updateAccessibility;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 withAttributeString:(id)arg1;
- (id)descLabelTapGesture;
- (void)setDescLabelTapGesture:(id)arg0;
- (void)relatedVCWillQuitCurrentPlaybackTime:(id)arg0 itemID:(id)arg1 playState:(long long)arg2;
- (void)relatedVCWillQuitCurrentPlayState:(long long)arg0 itemID:(id)arg1;
- (id)rvdNewDetailSlideTransitionContext;
- (id)rvdSlideTransitionSnapShotFeedInteraction;
- (long long)rvdSlideTransitionPreferScaleMode;
- (void)rvdSlideTransitionHiddenPauseIcon;
- (id)rvdSlideTransitionContext;
- (id)rvdSlideTransitionFullScreenSnapShot;
- (void)updateContainerWidth:(double)arg0;
- (id)searchWordArray;
- (void)setSearchWordArray:(id)arg0;
- (id)updateTextExtrasRange:(id)arg0 originDescriptionString:(id)arg1 newDescriptionString:(id)arg2;
- (double)hashTagLength;
- (void)setHashTagLength:(double)arg0;
- (BOOL)hasHashTagShowTrackPost;
- (id)hashTagArray;
- (id)hashTagShowMark;
- (void)setHasHashTagShowTrackPost:(BOOL)arg0;
- (void)setHasSearchText:(BOOL)arg0;
- (long long)hashTagShowTrackPostMark;
- (void)setHashTagShowTrackPostMark:(long long)arg0;
- (void)setHashTagArray:(id)arg0;
- (void)setHashTagShowMark:(id)arg0;
- (long long)atNumber;
- (void)setAtNumber:(long long)arg0;
- (long long)needFoldNumber;
- (void)setNeedFoldNumber:(long long)arg0;
- (BOOL)hasTrendingShowTrackPost;
- (void)setHasTrendingShowTrackPost:(BOOL)arg0;
- (long long)trendingWordsShowTrackPostMark;
- (void)setTrendingWordsShowTrackPostMark:(long long)arg0;
- (id)searchWordShowMark;
- (void)setSearchWordShowMark:(id)arg0;
- (BOOL)hasHotSpotTagShowTrackPost;
- (void)setHasHotSpotTagShowTrackPost:(BOOL)arg0;
- (id)descriptionGradientView;
- (id)packLabel;
- (id)descriptionScrollView;
- (id)descriptionContentView;
- (void)setDescriptionScrollViewHeightConstraint:(id)arg0;
- (id)descriptionScrollViewHeightConstraint;
- (void)resetMasConstraint;
- (void)setDescriptionGradientView:(id)arg0;
- (void)setDescriptionScrollView:(id)arg0;
- (void)setPackLabel:(id)arg0;
- (void)setOuterScrollView:(id)arg0;
- (void)setDescriptionContentView:(id)arg0;
- (double)descriptionLabelConstraintWidth;
- (double)originBottomOffset;
- (void)updateDescLabelIfExpand:(BOOL)arg0 triggerByUser:(BOOL)arg1 whenWillDisplay:(BOOL)arg2;
- (void)updateCaptionWidth;
- (void)resetEntityWordTrackInformation;
- (void)resetHashTagTrackInformation;
- (void)setPackStringLineNumberLimit:(id)arg0;
- (void)setCanCaptionExpand:(BOOL)arg0;
- (void)setIsDescTruncated:(BOOL)arg0;
- (double)trailingOffsetOfLeftContainer;
- (void)calculateTruncationToken;
- (void)plainTextClickedWithParams:(id)arg0;
- (BOOL)canCaptionExpand;
- (void)updateDescLabelIfExpand:(BOOL)arg0 commentEnterSource:(unsigned long long)arg1 canTapForNoMaskLayer:(BOOL)arg2;
- (id)tagAttachmentWithAttributedString:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 maximumContainerSize:(struct CGSize { double x0; double x1; })arg2 tagViewConfigblock:(id /* block */)arg3;
- (BOOL)isSafeSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 forStringLength:(unsigned long long)arg1;
- (void)setBeforeFoldRow:(long long)arg0;
- (BOOL)canEnterMaskLayer;
- (void)setFoldRow:(long long)arg0;
- (void)changeSearchWordShowMark:(id)arg0;
- (void)changeHashTagShowMark:(id)arg0;
- (id)moreString;
- (id)titleExpandStringScrollStyleForAttributeString:(id)arg0 contentString:(id)arg1;
- (id)expandTagFont;
- (id)createTailLabelWithAttributedText:(id)arg0;
- (BOOL)isExpandLabelPlainText;
- (id)createPlainTextTailLabelWithAttributedText:(id)arg0;
- (id)tailLabelBackgroundColor;
- (void)updateDescLabelScrollStyleIfExpand:(BOOL)arg0 triggerByUser:(BOOL)arg1 whenWillDisplay:(BOOL)arg2;
- (void)setIsTapedDesc:(BOOL)arg0;
- (void)plainTextClickedAtExpandRegion:(BOOL)arg0 withParams:(id)arg1;
- (BOOL)isDescTruncated;
- (long long)beforeFoldRow;
- (long long)foldRow;
- (void)updateDescLabelIfExpand:(BOOL)arg0 commentEnterSource:(unsigned long long)arg1;
- (void)updateDescLabelIfExpand:(BOOL)arg0 triggerByUser:(BOOL)arg1;
- (double)descriptionLimitHeightWithAttributedText:(id)arg0 scrollable:(BOOL *)arg1 lineHeight:(double *)arg2;
- (id)createPackLabel;
- (id)createPackLabelAttributedString:(BOOL)arg0;
- (void)trackTrendingWordsShowByMode:(long long)arg0;
- (void)trackChallengTitleShowByMode:(long long)arg0;
- (id)packString;
- (double)calulateLimitHeight;
- (BOOL)entityWordWearchEnable;
- (void)trackTrendingWordsShow:(id)arg0 withWordsPosition:(id)arg1 withGroupId:(id)arg2;
- (id)elementsNeedCountHeight;
- (id)useMaskLayerStringIfNeed;
- (id)addTagAttachmentToAttributedString:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 maximumContainerSize:(struct CGSize { double x0; double x1; })arg2 tagViewConfigBlock:(id /* block */)arg3;
- (BOOL)enterMaskLayerWithCommentEnterSource:(unsigned long long)arg0;
- (void)updateDescLabelScrollStyleIfExpand:(BOOL)arg0 triggerByUser:(BOOL)arg1;
- (long long)calculateSpreadMaxRow;
- (BOOL)isMusicInfoShow;
- (void)setIsMusicInfoShow:(BOOL)arg0;
- (BOOL)isTapedDesc;
- (double)track_component_height_percent_before_fold;
- (void)setTrack_component_height_percent_before_fold:(double)arg0;
- (double)track_title_height_percent_before_fold;
- (void)setTrack_title_height_percent_before_fold:(double)arg0;
- (id)packStringLineNumberLimit;
- (BOOL)shouldOptimizeDescTailLine;
- (void)setShouldOptimizeDescTailLine:(BOOL)arg0;
- (long long)lineBeforeOptimize;
- (void)setLineBeforeOptimize:(long long)arg0;
- (long long)lineAfterOptimize;
- (void)setLineAfterOptimize:(long long)arg0;
- (double)lastLineWidthBeforeOptimize;
- (void)setLastLineWidthBeforeOptimize:(double)arg0;
- (BOOL)shouldTruncationBeforeOptimize;
- (void)setShouldTruncationBeforeOptimize:(BOOL)arg0;
- (void)setTrailingOffsetOfLeftContainer:(double)arg0;
- (id)setShadowWithAdMoreTag:(id)arg0;
- (BOOL)isRichAwemeCaptionWithTitle;
- (void)updateParagraphStyleWithAttributedString:(id)arg0 forMaskLayer:(BOOL)arg1;
- (double)labelParagraphStyleLineSpacing:(BOOL)arg0;
- (double)labelParagraphStyleMinLineHeight;
- (double)labelParagraphStyleMaxLineHeight;
- (double)labelParagraphStyleBaseLineSpacing;
- (BOOL)shouldInsertMinorAlbumVideoTag;
- (BOOL)shouldAppendMixVideoTag;
- (BOOL)shouldInsertPlayletVideoTag;
- (void)insertMixVideoTagIfNeededWithAttributedString:(id)arg0;
- (void)insertPlayletVideoTagIfNeededWithAttributedString:(id)arg0;
- (void)insertMinorAlbumVideoTagIfNeededWithAttributedString:(id)arg0;
- (void)insertTitle:(id)arg0 attributedString:(id)arg1 font:(long long)arg2 isNeedVerticalLine:(BOOL)arg3 atIndex:(unsigned long long)arg4;
- (id)getMixTitleHighLight;
- (void)insertTitle:(id)arg0 attributedString:(id)arg1 font:(long long)arg2 isNeedVerticalLine:(BOOL)arg3;
- (id)mixNameFontForWeight:(long long)arg0;
- (BOOL)shouldAppendOriginalAwemeTag;
- (BOOL)shouldAppendFromCommentTitle;
- (void)insertOriginalAwemeIfNeededWithAttributedString:(id)arg0;
- (void)insertFromCommentIfNeededWithAttributedString:(id)arg0;
- (void)deleteImageCommentPerString:(id)arg0;
- (id)titleAttributteWithString:(id)arg0;
- (id)originalAwemeTagAttachment;
- (void)originalAwemeTagClicked;
- (void)trackSimplyLivePathShow;
- (void)setSimplyLiveRoomId:(id)arg0;
- (void)setSimplyLiveUserId:(id)arg0;
- (void)duetChainButtonClicked;
- (void)videoCommentClicked;
- (id)tagAttachmentWithAttributedStringForVideoReply:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 isReplyComment:(BOOL)arg2 tagViewConfigblock:(id /* block */)arg3;
- (id)commentStickerReplyUser;
- (void)videoReplyClicked;
- (id)simplyLiveUserId;
- (id)simplyLiveRoomId;
- (id)addLivePathTagAttachmentToAttributedString:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 maximumContainerSize:(struct CGSize { double x0; double x1; })arg2;
- (id)livePathTagAttachmentWithAttributedString:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 maximumContainerSize:(struct CGSize { double x0; double x1; })arg2;
- (void)interactionDidShowMaskModify:(id)arg0;
- (void)trackDescriptionElementAppear;
- (id)handleLineFeedAndSpace:(id)arg0;
- (id)caculateLayoutWithContainer:(id)arg0 withText:(id)arg1;
- (BOOL)bizDowngradeDescTruncation;
- (void)showLongVideoAdDescriptionText:(id)arg0;
- (void)changePlayInteractionDescriptionElement;
- (BOOL)shouldShowPlayerPurePopover;
- (void)showPropover;
- (void)setIsStablePageEntranceShowing:(BOOL)arg0;
- (void)updateLiveListOfVideoFeedNotification:(id)arg0;
- (void)setLiveStatusManager:(id)arg0;
- (void)setVmKVO:(id)arg0;
- (id)vmKVO;
- (void)changePlayInteractionDescriptionElementForNewFeedAlbumTextFoldConfig;
- (void)caculateOccupyHeightPercent;
- (BOOL)shouldSetDescCollapseFree;
- (void)setNeedDemoteLineCount:(BOOL)arg0;
- (void)setMaxRowForNewAlbumImageLongTextLayout:(long long)arg0;
- (void)plainTextClicked:(id)arg0;
- (void)handleDescriptionLabelLongPressAction:(id)arg0;
- (void)setDescLabelLongPressGesture:(id)arg0;
- (id)descLabelLongPressGesture;
- (BOOL)isStablePageEntranceShowing;
- (void)setDescContainerWidth:(double)arg0;
- (void)setDescriptionTextViewContent:(id)arg0 animated:(BOOL)arg1 precomputationExpanded:(BOOL)arg2 forMaskLayer:(BOOL)arg3;
- (void)setDescriptionTextViewContent:(id)arg0 animated:(BOOL)arg1 precomputationExpanded:(BOOL)arg2 forMaskLayer:(BOOL)arg3 isForDescriptionPanel:(BOOL)arg4;
- (void)activateComponentIfNeeded;
- (void)trackTitleFold;
- (void)trackTrendingShow;
- (void)trackVideoTitleShow;
- (BOOL)judgeLocation:(struct CGPoint { double x0; double x1; })arg0 isExpandInLabel:(id)arg1;
- (void)searchADAlbumAdTextClick;
- (void)trackTitleExpandWithActionType:(id)arg0 spreadMethod:(id)arg1;
- (void)trackMiniDetailTitleClick;
- (BOOL)canEnterRelatedSinglePanel;
- (void)addBackgroundForDescriptionLabel:(id)arg0;
- (id)predictFetchWithHitTest;
- (BOOL)disableHitTestThrottle;
- (void)setDisableHitTestThrottle:(BOOL)arg0;
- (BOOL)canTapWithAttributedString:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (BOOL)fixNumOfLinesForDanmaku;
- (void)setFixNumOfLinesForDanmaku:(BOOL)arg0;
- (BOOL)needDemoteLineCount;
- (long long)maxRowForNewAlbumImageLongTextLayout;
- (long long)descLinesLimitWithComponentInfo:(id)arg0;
- (BOOL)isSearchHighValueHashTagHidden;
- (BOOL)hasScollableExpandLabel;
- (unsigned long long)stableEntryStrategy;
- (BOOL)shouldShowCancelMuteAnimation;
- (void)setRelatedModel:(id)arg0;
- (void)setDescriptionForMaskLayer:(id)arg0;
- (void)resetTailLineOptimizeIfNeeded;
- (void)setIsSearchHighValueHashTagHidden:(BOOL)arg0;
- (void)setAtUserHasRecord:(BOOL)arg0;
- (void)tryConsumeScrollGesture;
- (BOOL)hitStableExtendedConsumption;
- (BOOL)needChangeDetailButtonForNotFeed;
- (BOOL)shouldShowNewExpandTag;
- (BOOL)shuoldSetDescCollapseFriendsPageFreeABTest;
- (BOOL)shuoldSetDescCollapseFriendsVideoFreeABTest;
- (double)descriptionLabelConstraintWidthForCurrentModel;
- (double)descContainerWidth;
- (BOOL)shouldShowMusicCoverGuideViewAnimation;
- (id)feedFullScreenSnapView;
- (void)updateDistanceOfDescription;
- (BOOL)enableDescResidentTokenForRelatedPanel;
- (id)descriptionLabelFontWithMedium;
- (id)descriptionLabelFontForRichAwemeTitleWithWeight;
- (BOOL)isRelatedVideoSingleCardAutoPlayABTest;
- (void)trackMiniDetailTitleShow;
- (void)updateDescriptionAttributedString:(id)arg0;
- (BOOL)shouldJumpToDetailPatImageAlbum:(BOOL)arg0;
- (BOOL)shouldForceAttachRVTruncation;
- (void)enumerateLinkMatchInfos:(id)arg0;
- (BOOL)enableScrollStyle;
- (id)rvdNewDetailSlideTransitionAwemeModel;
- (id)descriptionForMaskLayer;
- (id)mannorAdLinkMoreManager;
- (void)setMannorAdLinkMoreManager:(id)arg0;
- (id)expandLabel;
- (void)setExpandLabel:(id)arg0;
- (void)setHasScollableExpandLabel:(BOOL)arg0;
- (void)setFeedFullScreenSnapView:(id)arg0;
- (id)relatedModel;
- (BOOL)atUserHasRecord;
- (id)descriptionOriginalText;
- (void)setDescriptionOriginalText:(id)arg0;
- (void)computationExpandedDescription;
- (id)getRichAwemeTitleTextIfNeededWithDescription:(id)arg0;
- (BOOL)enableRecordLiveStatusInfoWithDescriptionString:(id)arg0;
- (void)awe_trackHotSpotTagShow:(id)arg0;
- (void)trackTitleExpandWithActionType:(id)arg0;
- (void)addEntityWordResearchNSLinkAttribute:(id)arg0 withDescriptionString:(id)arg1 withTextExtra:(id)arg2;
- (id)awe_dealRichAwemeTitleTextIfNeededWithConfig:(id)arg0;
- (id)attributeStringForAdMoreLinkView:(long long)arg0;
- (id)replaceAttachmentAttributeNameByCustom;
- (void)handleLinksForDescriptionAttributedString:(id)arg0 extraInfo:(id)arg1;
- (void)appendOriginDescIfNeededWithAttributedString:(id)arg0 content:(id)arg1 extraInfo:(id)arg2;
- (void)__addAccessibilityAttributeForAttachmentView:(id)arg0 value:(id)arg1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2;
- (void)insertProductLabelIfNeededWithAttributedString:(id)arg0;
- (void)handleEntityWordSearchNSLinkForDescriptionAttributedString:(id)arg0 extraInfo:(id)arg1;
- (BOOL)canChangeDescLinesForSearchHighValueHashTag;
- (void)updateAdMoreLinkViewIfNeeded:(BOOL)arg0;
- (void)calculateTruncationTokenForAds;
- (void)awe_trackTailLineOptimize;
- (BOOL)isValidTextExtra:(id)arg0;
- (long long)calculateLineNumber:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })calculateAdMoreRange:(id)arg0;
- (void)customDescriptionLabelContainer:(id)arg0;
- (BOOL)lastLineWithWrap:(id)arg0;
- (BOOL)awe_shouldAttachDetailTruncation;
- (id)titleExpandArrowScrollStyleAttributeString;
- (void)__addAccessibilityAttributeForMoreAndPackLabel:(id)arg0 value:(id)arg1;
- (BOOL)awe_shouldPreloadRelatedRecommendItems;
- (void)updateDescriptionAccessibilityLabel:(BOOL)arg0;
- (BOOL)showUseRTLForString:(id)arg0;
- (id)titleExpandStringForAttributeString:(id)arg0 enableDot:(BOOL)arg1;
- (void)descriptionElementWillExpanded:(BOOL)arg0;
- (void)setScrollMasConstraint:(double)arg0;
- (double)calulateLimitHeightFromBusiness;
- (BOOL)isEntityWordSearchNSLink:(id)arg0;
- (BOOL)awe_isHotSpotTagNSLink:(id)arg0;
- (void)recordFalseTouch;
- (double)caculateLastRowWidth:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 maximumContainerSize:(struct CGSize { double x0; double x1; })arg2;
- (void)trackChallengTitleShow:(id)arg0 withHashTagId:(id)arg1 withGroupId:(id)arg2;
- (void)trackProductEntranceShowIfNeeded;
- (id)checkAttributedStringBeforeRectCalculate:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })exclusiveAdMoreRange:(id)arg0;
- (id)generateDescTailWithView:(id)arg0 isAd:(BOOL)arg1;
- (id)generalizeNearbyPeopleDescription;
- (int)feedDescLinesCount;
- (void)__openCommentVCWithSource:(unsigned long long)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setDescriptionLabel:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (id)descriptionLabel;
- (void)setViewModel:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)viewModel;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (void)setGradientLayer:(id)arg0;
- (BOOL)hasSearchText;
- (id)outerScrollView;
- (double)lastWidth;
- (void)setLastWidth:(double)arg0;

@end