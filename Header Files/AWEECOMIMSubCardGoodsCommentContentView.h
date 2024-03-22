//
//     Generated by private class-dump
//

@class UIStackView, UIView, NSArray, AWEECOMIMBaseMsgModel, NSString, UICollectionView, AWEECOMIMTextFoldTipView, AWEECOMIMTextComponent, AWEECOMIMSubCardCommentUserInfoView;
@protocol AWEECOMIMSubCardGoodsCommentContentViewDelegate;

@interface AWEECOMIMSubCardGoodsCommentContentView : AWEECOMIMCustomBaseView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEECOMIMTextFoldTipViewDelegate> {
    id<AWEECOMIMSubCardGoodsCommentContentViewDelegate> _delegate;
    UIView *_bgContainerView;
    UIStackView *_infoStackView;
    AWEECOMIMSubCardCommentUserInfoView *_userInfoView;
    AWEECOMIMTextComponent *_textComponentView;
    AWEECOMIMTextFoldTipView *_fullTextTipView;
    UIView *_mediaContainerView;
    UICollectionView *_mediaCollecitonView;
    NSArray *_mediaDisplayDataArr;
    NSArray *_imagesArr;
    AWEECOMIMBaseMsgModel *_cellModel;
}

@property (retain, nonatomic) UIView *bgContainerView;
@property (retain, nonatomic) UIStackView *infoStackView;
@property (retain, nonatomic) AWEECOMIMSubCardCommentUserInfoView *userInfoView;
@property (retain, nonatomic) AWEECOMIMTextComponent *textComponentView;
@property (retain, nonatomic) AWEECOMIMTextFoldTipView *fullTextTipView;
@property (retain, nonatomic) UIView *mediaContainerView;
@property (retain, nonatomic) UICollectionView *mediaCollecitonView;
@property (copy, nonatomic) NSArray *mediaDisplayDataArr;
@property (copy, nonatomic) NSArray *imagesArr;
@property (weak, nonatomic) AWEECOMIMBaseMsgModel *cellModel;
@property (weak, nonatomic) id<AWEECOMIMSubCardGoodsCommentContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithData:(id)arg0 msgModel:(id)arg1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })infoContentEdgeInset;
+ (double)mediaContainerHeightWithData:(id)arg0 msgModel:(id)arg1;
+ (double)itemHeigtWithMsgModel:(id)arg0;
+ (double)bottomPadding;

- (void)setCellModel:(id)arg0;
- (void)setUserInfoView:(id)arg0;
- (id)mediaContainerView;
- (void)setMediaContainerView:(id)arg0;
- (id)textComponentView;
- (void)setTextComponentView:(id)arg0;
- (void)setImagesArr:(id)arg0;
- (id)imagesArr;
- (void)updateWithData:(id)arg0 msgModel:(id)arg1;
- (id)bgContainerView;
- (id)infoStackView;
- (id)fullTextTipView;
- (id)mediaCollecitonView;
- (void)setMediaDisplayDataArr:(id)arg0;
- (id)mediaDisplayDataArr;
- (void)textFoldTipViewDidFlodOrShowFullText:(BOOL)arg0;
- (void)setBgContainerView:(id)arg0;
- (void)setInfoStackView:(id)arg0;
- (void)setFullTextTipView:(id)arg0;
- (void)setMediaCollecitonView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)delegate;
- (void)customInit;
- (void)setDelegate:(id)arg0;
- (id)cellModel;
- (id)userInfoView;

@end