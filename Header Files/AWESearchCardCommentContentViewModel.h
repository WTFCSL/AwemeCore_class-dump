//
//     Generated by private class-dump
//

@interface AWESearchCardCommentContentViewModel : NSObject

+ (id)defaultAvatarImage;
+ (BOOL)likeLabelTooLong:(id)arg0;
+ (id)avatarImageWithColor:(id)arg0;
+ (double)commentWidthWithCellWidth:(double)arg0 comment:(id)arg1;
+ (double)preCaculateLayoutForComment:(id)arg0 width:(double)arg1 maximumNumberOfRows:(unsigned long long)arg2;
+ (id)displayAttributeContentForComment:(id)arg0 lighlightLinkTapAction:(id /* block */)arg1;
+ (id)generateCommentText:(id)arg0;
+ (void)addBasicTextAttributeForContentString:(id)arg0;
+ (void)addTextExtrasForAttrCommentContent:(id)arg0 commentModel:(id)arg1 tapHighlightAction:(id /* block */)arg2;
+ (void)addEmotionIconForAttrCommentContent:(id)arg0 Type:(unsigned long long)arg1;
+ (void)addImageLabelForAttrCommentContent:(id)arg0 commentModel:(id)arg1 tapHighlightAction:(id /* block */)arg2;
+ (void)addGifTagLabelForAttrCommentContent:(id)arg0 commentModel:(id)arg1 tapHighlightAction:(id /* block */)arg2;
+ (void)addParagraphStyleForContentString:(id)arg0;
+ (id)attributedContentForPreCalculateWithComment:(id)arg0;
+ (void)appendSearchIconWithComment:(id)arg0 attrComment:(id)arg1;
+ (void)appendImageStickerWithComment:(id)arg0 attrComment:(id)arg1;
+ (struct CGSize { double x0; double x1; })imageStickerSizeWithType:(long long)arg0 comment:(id)arg1;
+ (void)replaceWithIconCommentContent:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 highlightText:(id)arg2 iconSize:(struct CGSize { double x0; double x1; })arg3 iconHorizontalPosition:(unsigned long long)arg4 iconVerticalPosition:(unsigned long long)arg5;
+ (void)drawSuffixForSearchTextContent:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 extra:(id)arg2;
+ (id)tagLabelViewWithType:(long long)arg0 comment:(id)arg1;
+ (struct CGSize { double x0; double x1; })likeLabelTextRealsize:(id)arg0 maxWidth:(double)arg1;

@end
