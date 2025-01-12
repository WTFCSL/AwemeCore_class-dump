//
//     Generated by private class-dump
//

@class AWEECOMIMSubCardGoodsCommentContentView, NSString, AWEECOMIMCardComponentCommonTitleView, AWEECOMIMCardComponentOperationPanel;

@interface AWEECOMIMGoodsCommentCardView : AWEECOMIMCardBaseView <AWEECOMIMSubCardGoodsCommentContentViewDelegate> {
    AWEECOMIMCardComponentCommonTitleView *_headerView;
    AWEECOMIMSubCardGoodsCommentContentView *_commentContentView;
    AWEECOMIMCardComponentOperationPanel *_buttonsView;
}

@property (retain, nonatomic) AWEECOMIMCardComponentCommonTitleView *headerView;
@property (retain, nonatomic) AWEECOMIMSubCardGoodsCommentContentView *commentContentView;
@property (retain, nonatomic) AWEECOMIMCardComponentOperationPanel *buttonsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithWidth:(double)arg0 model:(id)arg1;

- (BOOL)shouldShowBottomMoreItemView;
- (void)tapCard;
- (id)commentContentView;
- (void)goodsCommentViewDidClickShowFullText:(BOOL)arg0;
- (void)setCommentContentView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHeaderView:(id)arg0;
- (void)updateWithData:(id)arg0;
- (id)headerView;
- (id)buttonsView;
- (void)setButtonsView:(id)arg0;
- (void)updateData;

@end
