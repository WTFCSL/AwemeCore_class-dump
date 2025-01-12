//
//     Generated by private class-dump
//

@class NSString;

@interface AFDRichAwemeFullPageHeaderDescriptionViewHelper : NSObject <AFDRichAwemeFullPageHeaderDescriptionViewHelperProtocol> {
    NSString *_referString;
}

@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)matchEmoticonForAttributedString:(id)arg0;
+ (void)transferToProfileWithURL:(id)arg0 userModel:(id)arg1;
+ (id)matchEmoticonToAccessibilityLabel:(id)arg0;
+ (id)getBodyAttributedTextWithModel:(id)arg0 referString:(id)arg1;
+ (id)getTitleTextWithModel:(id)arg0;
+ (id)getBodyAttributedTextWithModel:(id)arg0 referString:(id)arg1 entitySearchWords:(id)arg2;
+ (void)insertProductLabelIfNeededWithAttributedString:(id)arg0 model:(id)arg1 referString:(id)arg2 logExtra:(id)arg3;
+ (id)getTitleAttributedTextWithModel:(id)arg0 referString:(id)arg1 entitySearchWords:(id)arg2;
+ (id)configTimeLabelAttributedStringWithModel:(id)arg0;
+ (id)timeLabelTextFont;
+ (id)hotSpotTagColor;
+ (void)drawSearchUnderline:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 extra:(id)arg2;
+ (id)timeLabelTextColor;
+ (long long)_offsetWithModel:(id)arg0;
+ (id)_getDescriptionBodyAttributedTextWithModel:(id)arg0;
+ (id)_highlishtModelsForAttributedString:(id)arg0 model:(id)arg1 offset:(long long)arg2 referString:(id)arg3;
+ (long long)_offsetAfterMatchEmotionForAttributedString:(id)arg0;
+ (void)_handleTapWithHighlightModel:(id)arg0 model:(id)arg1 referString:(id)arg2;
+ (void)_handleTapSearchWithContent:(id)arg0 model:(id)arg1 referString:(id)arg2;
+ (double)bodyFontLineHeightRatio;
+ (id)EntityWordLongPressHihglightColor;
+ (id)EntityWordHighlightColor;
+ (id)hotSpotTagFont:(BOOL)arg0;
+ (id)accessibilityValue:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
+ (void)insertImageCommentPublishPerfixIfNeededWithAttributedString:(id)arg0 model:(id)arg1 tapHighlightAction:(id /* block */)arg2;
+ (void)trackChallengTitleShow:(id)arg0 withHashTagId:(id)arg1 withGroupId:(id)arg2 referString:(id)arg3;
+ (void)updateEntityWordUIStyle:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 model:(id)arg2 isTitle:(BOOL)arg3 textExtras:(id)arg4 extra:(id)arg5;
+ (void)trackHotSpotTag:(id)arg0 referString:(id)arg1 keyWord:(id)arg2 actionType:(id)arg3;
+ (void)applyHighlightForAttributedContentText:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 hightlightId:(id)arg2 hightlightType:(long long)arg3 extra:(id)arg4 isCommerce:(BOOL)arg5 isTitle:(BOOL)arg6 tapHighlightAction:(id /* block */)arg7;
+ (id)configAttributedContentTextWithModel:(id)arg0 offset:(long long)arg1 referString:(id)arg2 isTitle:(BOOL)arg3 entitySearchWords:(id)arg4;
+ (id)contentTextStringWithModel:(id)arg0;
+ (BOOL)isFullpageShowTitle;
+ (void)linkHighlightTapped:(id)arg0 model:(id)arg1 referString:(id)arg2 entitySearchWords:(id)arg3;
+ (id)addTextExtrasForAttributedContentText:(id)arg0 content:(id)arg1 model:(id)arg2 isTitle:(BOOL)arg3 entitySearchWords:(id)arg4 textExtras:(id)arg5 withOffset:(long long)arg6 referString:(id)arg7 tapHighlightAction:(id /* block */)arg8;
+ (void)trackEntherPersonalDetailWithModel:(id)arg0 referString:(id)arg1;
+ (void)trackChallengTitleClick:(id)arg0 withHashTagId:(id)arg1 withGroupId:(id)arg2 referString:(id)arg3;
+ (void)__trackEnterTagDetailWithTagId:(id)arg0 hashTag:(id)arg1 model:(id)arg2 referString:(id)arg3;
+ (void)trackEntityWordClick:(id)arg0 referString:(id)arg1 keyWord:(id)arg2 params:(id)arg3;
+ (void)drawSearchIconSuffix:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 extra:(id)arg2 isTitle:(BOOL)arg3;
+ (void)_matchEmoticonForTextViewAttributedString:(id)arg0;
+ (void)drawReplyIconIfNeededForContent:(id)arg0;
+ (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 withAttributeString:(id)arg1;
+ (id)_highlishtModelsForAttributedString:(id)arg0 model:(id)arg1 offset:(long long)arg2;
+ (id)bodyFont;
+ (id)titleFont;
+ (id)highlightColor;
+ (void)addParagraphStyle:(id)arg0;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void).cxx_destruct;

@end
