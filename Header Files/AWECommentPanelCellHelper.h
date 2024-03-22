//
//     Generated by private class-dump
//

@interface AWECommentPanelCellHelper : NSObject

+ (void)matchEmoticonForAttributedString:(id)arg0;
+ (id)colorWithARGBString:(id)arg0 defaultColor:(id)arg1;
+ (double)cellHeightDiffBeforeAndAfterFolding:(double)arg0 comment:(id)arg1;
+ (id)extendAttributesForAttributedString:(id)arg0 context:(id)arg1;
+ (BOOL)addHighlightForTranslatedAttrCommentContent:(id)arg0 tapHighlightAction:(id /* block */)arg1;
+ (void)addTextExtrasForAttrCommentContent:(id)arg0 prefix:(id)arg1 commentModel:(id)arg2 context:(id)arg3 isLandscape:(BOOL)arg4 disableSearchText:(BOOL)arg5 disableTimeText:(BOOL)arg6 tapHighlightAction:(id /* block */)arg7;
+ (double)cellHeightForComment:(id)arg0 layoutConfig:(id)arg1;
+ (void)appendPinTagToAttributedString:(id)arg0;
+ (void)appendFirstVisitorTagToAttributedString:(id)arg0;
+ (void)appendPackUpToAttributedString:(id)arg0 tapAction:(id /* block */)arg1;
+ (id)attributedString:(id)arg0 appendAdComponentFor:(id)arg1 mainComment:(id)arg2 context:(id)arg3 tapAction:(id /* block */)arg4;
+ (id)attributedString:(id)arg0 appendTimeText:(id)arg1;
+ (double)commentWidthWithCellWidth:(double)arg0 comment:(id)arg1 hasDislikeButton:(BOOL)arg2;
+ (id)imageCommentVideoTitleDiffWithModel:(id)arg0 attrCommentContent:(id)arg1 width:(double)arg2;
+ (void)appendAdLinkIconToAttributedString:(id)arg0 linkText:(id)arg1 linkIcons:(id)arg2;
+ (void)appendAdLabelToAttributedString:(id)arg0 labelModel:(id)arg1;
+ (id)commentTruncationToken:(id)arg0 width:(double)arg1 tapAction:(id /* block */)arg2;
+ (void)transferToProfileWithURL:(id)arg0 userModel:(id)arg1 adModel:(id)arg2;
+ (BOOL)hasDislikeButton;
+ (long long)commentDislikeType;
+ (BOOL)shouldADCommentTimeLabelNewStyle;
+ (id)getUserName:(id)arg0;
+ (void)transferToProfileWithURL:(id)arg0 userModel:(id)arg1;
+ (id)defaultAvatarImage;
+ (id)mediaFeeHighlightWithTitle:(id)arg0 color:(id)arg1 font:(id)arg2 tapAction:(id /* block */)arg3;
+ (id)matchEmoticonToAccessibilityLabel:(id)arg0;
+ (void)addParagraphStyle:(id)arg0 context:(id)arg1;
+ (id)mediaFeedActionAttributedStringWithTitle:(id)arg0 color:(id)arg1 font:(id)arg2 hitTestEdgeInset:(double)arg3 tapAction:(id /* block */)arg4;
+ (id)verticalPathWithHeight:(double)arg0;
+ (id)timeLabelAccessibilityLabel:(double)arg0;
+ (id)commentBundle;
+ (double)cellHeightForComment:(id)arg0 width:(double)arg1 showTimeText:(BOOL)arg2;
+ (double)cellHeightForComment:(id)arg0 width:(double)arg1 forSubComment:(BOOL)arg2 showTimeText:(BOOL)arg3 appendStickerAttachment:(BOOL)arg4;
+ (double)cellHeightForComment:(id)arg0 width:(double)arg1 forSubComment:(BOOL)arg2 showTimeText:(BOOL)arg3 appendStickerAttachment:(BOOL)arg4 isLandspace:(BOOL)arg5;
+ (BOOL)canHideCommentContent;
+ (double)cellStillHeightCommentContentHiddenForSubComment:(BOOL)arg0;
+ (void)preCaculateLayoutForComment:(id)arg0 layoutConfig:(id)arg1;
+ (double)cellStillHeightWithoutStickerImageView:(BOOL)arg0;
+ (double)videoReplyCellStillHeightWithComment:(id)arg0 forSubComment:(BOOL)arg1;
+ (double)subCellStillHeightWithIfGifContentOnly:(BOOL)arg0 pictureContentOnly:(BOOL)arg1 audioContentOnly:(BOOL)arg2;
+ (double)replyCellStillHeightWithIfGifContentOnly:(BOOL)arg0 pictureContentOnly:(BOOL)arg1 audioContentOnly:(BOOL)arg2;
+ (double)cellStillHeightWithIfGifContentOnly:(BOOL)arg0 pictureContentOnly:(BOOL)arg1 audioContentOnly:(BOOL)arg2;
+ (double)obtainCommentWidth:(id)arg0 layoutConfig:(id)arg1;
+ (double)multiImgViewHeightWithCommentWidth:(double)arg0;
+ (double)normalImgViewHeightWithComment:(id)arg0;
+ (double)cellHeightLikedWithComment:(id)arg0;
+ (void)preCaculateLayoutForComment:(id)arg0 width:(double)arg1 forSubComment:(BOOL)arg2 showTimeText:(BOOL)arg3 appendStickerAttachment:(BOOL)arg4 isLandspace:(BOOL)arg5 maxLineNumbers:(unsigned long long)arg6;
+ (double)videoCoverViewHeightWithComment:(id)arg0;
+ (void)preCaculateLayoutForComment:(id)arg0 width:(double)arg1 showTimeText:(BOOL)arg2;
+ (void)preCaculateLayoutForComment:(id)arg0 width:(double)arg1 forSubComment:(BOOL)arg2 showTimeText:(BOOL)arg3;
+ (void)preCaculateLayoutForComment:(id)arg0 width:(double)arg1 forSubComment:(BOOL)arg2 showTimeText:(BOOL)arg3 appendStickerAttachment:(BOOL)arg4;
+ (void)preCaculateLayoutForComment:(id)arg0 width:(double)arg1 forSubComment:(BOOL)arg2 showTimeText:(BOOL)arg3 appendStickerAttachment:(BOOL)arg4 isLandspace:(BOOL)arg5;
+ (double)preCaculateContentHeightForComment:(id)arg0 timestamp:(id)arg1 layoutConfig:(id)arg2;
+ (double)quotedCommentWidthWithCellWidth:(double)arg0;
+ (BOOL)shouldShowAdWeakStyle:(id)arg0;
+ (double)subCommentWidthWithCellWidth:(double)arg0 comment:(id)arg1 hasDislikeButton:(BOOL)arg2;
+ (id)attributedContentForPreCalculateWithComment:(id)arg0 timestamp:(id)arg1 appendStickerAttachment:(BOOL)arg2 isLandscape:(BOOL)arg3 ignorePinStatus:(BOOL)arg4 disableTimeText:(BOOL)arg5 commentWidth:(double)arg6;
+ (void)commentExpandStatus:(id)arg0 layout:(id)arg1;
+ (BOOL)likeLabelTooLong:(id)arg0;
+ (void)addTimeTextKernComment:(id)arg0 attrComment:(id)arg1;
+ (void)appendSearchIconWithComment:(id)arg0 attrComment:(id)arg1 isLandscape:(BOOL)arg2;
+ (void)replacePrefixIconWithComment:(id)arg0 attrComment:(id)arg1;
+ (void)appendCustomizeRichTextIconWithComment:(id)arg0 attributedContent:(id)arg1;
+ (void)matchEmoticonSizeForAttributedString:(id)arg0;
+ (void)appendFirstVisitorTagToAttributedString:(id)arg0 useInMainThread:(BOOL)arg1;
+ (void)needPinTagToAttributedString:(id)arg0;
+ (void)drawMusicIconWithCommentContent:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 rangeChanged:(BOOL)arg2;
+ (void)replaceWithIconCommentContent:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 highlightText:(id)arg2 iconImageView:(id)arg3 iconSize:(struct CGSize { double x0; double x1; })arg4 iconHorizontalPosition:(unsigned long long)arg5 iconVerticalPosition:(unsigned long long)arg6 context:(id)arg7;
+ (void)applyHighlightForAttributedComment:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 hightlightId:(id)arg2 isCommerce:(BOOL)arg3 hightlightType:(long long)arg4 context:(id)arg5 extra:(id)arg6 tapHighlightAction:(id /* block */)arg7;
+ (void)drawLuckyDrawIconWithCommentContent:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 rangeChanged:(BOOL)arg2;
+ (void)drawLuckyDrawResultIconWithCommentContent:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 rangeChanged:(BOOL)arg2;
+ (void)drawCommentContent:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 context:(id)arg2 extra:(id)arg3;
+ (void)drawSearchUnderline:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 extra:(id)arg2;
+ (void)drawCommentContent:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 highlightText:(id)arg2 textColorLight:(id)arg3 textColorDrak:(id)arg4 iconImageView:(id)arg5 iconSize:(struct CGSize { double x0; double x1; })arg6 iconHorizontalPosition:(unsigned long long)arg7 iconVerticalPosition:(unsigned long long)arg8 context:(id)arg9;
+ (void)drawGroupIconBeforeCommentContent:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 rangeChanged:(BOOL)arg2 context:(id)arg3;
+ (void)drawIconWithCommentContent:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 rangeChanged:(BOOL)arg2 icon:(id)arg3;
+ (void)drawSearchPrefixIfNeededForContent:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 context:(id)arg2 extra:(id)arg3;
+ (void)drawSearchSuffixIfNeededForContent:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 context:(id)arg2 extra:(id)arg3;
+ (void)highlightReplyUserNameWithContent:(id)arg0 prefix:(id)arg1 replyUserName:(id)arg2 replyUserID:(id)arg3 exitLandscapeBlock:(id /* block */)arg4;
+ (void)appendAdLinkIconToAttributedString:(id)arg0 linkText:(id)arg1;
+ (id)concatenatedTagsHasPin:(BOOL)arg0 likedByCreatorText:(id)arg1;
+ (id)avatarImageWithColor:(id)arg0;
+ (id)nonLineBreakingString:(id)arg0;
+ (id)dateFormatterWithoutYear;
+ (id)dateFormatterWithYear;
+ (id)getImageCommentPublishVideoHighlightTitle:(id)arg0 attrCommentContent:(id)arg1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 highlightId:(id)arg3 hightlightType:(long long)arg4;
+ (id)timeLabelDateFormatterWithoutYear;
+ (double)cellHeightForComment:(id)arg0 showTimeText:(BOOL)arg1;
+ (double)cellHeightForComment:(id)arg0 width:(double)arg1 forSubComment:(BOOL)arg2 showTimeText:(BOOL)arg3;
+ (double)preCaculateHeightForComment:(id)arg0 width:(double)arg1 maxLineNumbers:(unsigned long long)arg2;
+ (double)calculateHeightFromCommentHeight:(double)arg0 replyHeight:(double)arg1 hasReply:(BOOL)arg2 forSubComment:(BOOL)arg3;
+ (void)preCaculateLayoutForComment:(id)arg0 showTimeText:(BOOL)arg1;
+ (double)nameWidthWithCellWidth:(double)arg0;
+ (double)commentWidthWithCellWidth:(double)arg0 comment:(id)arg1;
+ (double)subCommentWidthWithCellWidth:(double)arg0 comment:(id)arg1;
+ (void)highlightReplyUserNameWithContent:(id)arg0 prefix:(id)arg1 replyUserName:(id)arg2 replyUserID:(id)arg3;
+ (void)appendAdLinkIconToAttributedString:(id)arg0;
+ (void)appendTagsToAttributedString:(id)arg0 hasPin:(BOOL)arg1 likedByCreatorText:(id)arg2;
+ (id)getTruncatedStringWithTapAction:(id /* block */)arg0;
+ (id)tagToolTipView;
+ (void)addUsuallyUsedTagTo:(id)arg0 withModel:(id)arg1 context:(id)arg2;
+ (id)formattedDateForCommentDemotionTimestamp:(double)arg0;
+ (void)addParagraphStyle:(id)arg0;

@end