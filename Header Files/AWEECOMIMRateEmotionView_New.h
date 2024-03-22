//
//     Generated by private class-dump
//

@class AWEECOMIMTextViewComponent, UICollectionView, NSString, UIView, AWEECOMIMRateServiceModel;

@interface AWEECOMIMRateEmotionView_New : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEECOMIMTextViewComponentDelegate> {
    BOOL _webPPlayEnable;
    UICollectionView *_emotionListView;
    UIView *_tagListView;
    AWEECOMIMTextViewComponent *_textView;
    AWEECOMIMRateServiceModel *_model;
    id /* block */ _didSendTextBlock;
    id /* block */ _ratingModifyBlock;
    id /* block */ _updateHeightBlock;
    double _maxContentWidth;
}

@property (retain, nonatomic) UICollectionView *emotionListView;
@property (retain, nonatomic) UIView *tagListView;
@property (retain, nonatomic) AWEECOMIMTextViewComponent *textView;
@property (retain, nonatomic) AWEECOMIMRateServiceModel *model;
@property (copy, nonatomic) id /* block */ didSendTextBlock;
@property (copy, nonatomic) id /* block */ ratingModifyBlock;
@property (copy, nonatomic) id /* block */ updateHeightBlock;
@property (nonatomic) BOOL webPPlayEnable;
@property (nonatomic) double maxContentWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)inputViewHeight;
+ (double)tagTopPadding;
+ (double)tagInputVPadding;
+ (BOOL)isDefaultTagSelectedWithModel:(id)arg0;
+ (double)tagItemHeight;
+ (double)vPaddingBetweenTags;
+ (id)tagSelectFont;
+ (id)tagNormalFont;
+ (BOOL)shouldShowInputViewWithServiceModel:(id)arg0;
+ (id)tagSelectedColor;
+ (id)tagBgSelectedColor;
+ (id)tagNomarColor;
+ (id)tagBgNormalColor;
+ (double)emotionViewBottomPadding;
+ (double)currentHeightWithModel:(id)arg0 maxWidth:(double)arg1;

- (id)emotionListView;
- (id)tagListView;
- (double)currentHeightWithModel:(id)arg0;
- (id /* block */)updateHeightBlock;
- (BOOL)webPPlayEnable;
- (void)setWebPPlayEnable:(BOOL)arg0;
- (BOOL)checkSupportModifyAndShowToast;
- (void)updateTagListViewWithList:(id)arg0 selectedTagList:(id)arg1;
- (void)refreshEmotionList;
- (void)updateEmotionContentHeightWithModel:(id)arg0;
- (id /* block */)ratingModifyBlock;
- (void)updateTextViewWithShowLimitCount:(BOOL)arg0;
- (void)setMaxContentWidth:(double)arg0;
- (double)emotionViewMaxWidth;
- (double)cellHeightWithIconHeight:(double)arg0;
- (double)maxContentWidth;
- (void)updateTagBtn:(id)arg0 isSelected:(BOOL)arg1;
- (void)tagSelected:(id)arg0;
- (id /* block */)didSendTextBlock;
- (void)textView:(id)arg0 textDidChange:(id)arg1;
- (void)textViewDidSendAction:(id)arg0;
- (void)updateViewWithModel:(id)arg0 maxContentWidth:(double)arg1;
- (void)setEmotionListView:(id)arg0;
- (void)setTagListView:(id)arg0;
- (void)setDidSendTextBlock:(id /* block */)arg0;
- (void)setRatingModifyBlock:(id /* block */)arg0;
- (void)setUpdateHeightBlock:(id /* block */)arg0;
- (id)textView;
- (void)setModel:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTextView:(id)arg0;
- (BOOL)textViewShouldBeginEditing:(id)arg0;

@end