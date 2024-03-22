//
//     Generated by private class-dump
//

@class NSString, YYTextLayout, AWENewHotSpotFeedCardModel, NSMutableAttributedString;

@interface AWEHotSearchCommentCellModel : NSObject <AWECommonFeedCellModelProtocol> {
    BOOL _shouldShowFoldButton;
    BOOL _hasTracked;
    id /* block */ _didTapShowFoldBlock;
    AWENewHotSpotFeedCardModel *_cardModel;
    NSMutableAttributedString *_commentContent;
    YYTextLayout *_commentLayout;
    double _containerWidth;
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _stickerSize;
}

@property (nonatomic) double containerWidth;
@property (copy, nonatomic) id /* block */ didTapShowFoldBlock;
@property (weak, nonatomic) AWENewHotSpotFeedCardModel *cardModel;
@property (retain, nonatomic) NSMutableAttributedString *commentContent;
@property (retain, nonatomic) YYTextLayout *commentLayout;
@property (nonatomic) BOOL shouldShowFoldButton;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } stickerSize;
@property (nonatomic) BOOL hasTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasTracked;
- (void)setHasTracked:(BOOL)arg0;
- (void)configWithSectionData:(id)arg0;
- (struct CGSize { double x0; double x1; })cellSizeWithConstraintWidth:(double)arg0;
- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (id)commentContent;
- (void)setCommentContent:(id)arg0;
- (void)setShouldShowFoldButton:(BOOL)arg0;
- (void)configWithCardModel;
- (void)setDidTapShowFoldBlock:(id /* block */)arg0;
- (BOOL)hasSubComment;
- (BOOL)isCommentOfHotSpot;
- (id)commentLayout;
- (id)commentImageURLModel;
- (id)attributedContentForComment:(id)arg0 displayWidth:(double)arg1;
- (BOOL)shouldShowFoldButton;
- (void)textFoldButtonWithAttributedString:(id)arg0;
- (void)setCommentLayout:(id)arg0;
- (void)setStickerSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })commentImageAdjustSizeWithRawSize:(struct CGSize { double x0; double x1; })arg0 containerWidth:(double)arg1;
- (id /* block */)didTapShowFoldBlock;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })stickerSize;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;

@end