//
//     Generated by private class-dump
//

@class YYLabel, UIImageView, UIView, UILabel, AWEECFeedGoodsCardModel;

@interface AWEECFeedGoodsCardCommentView : UIView {
    AWEECFeedGoodsCardModel *_model;
    UIView *_goodCommentCountView;
    UIImageView *_avatar1;
    UIImageView *_avatar2;
    UILabel *_goodCommentCountLabel;
    YYLabel *_commentLabel;
}

@property (retain, nonatomic) AWEECFeedGoodsCardModel *model;
@property (retain, nonatomic) UIView *goodCommentCountView;
@property (retain, nonatomic) UIImageView *avatar1;
@property (retain, nonatomic) UIImageView *avatar2;
@property (retain, nonatomic) UILabel *goodCommentCountLabel;
@property (retain, nonatomic) YYLabel *commentLabel;

- (void)setGoodCommentCountView:(id)arg0;
- (id)goodCommentCountView;
- (void)setAvatar1:(id)arg0;
- (id)avatar1;
- (void)setAvatar2:(id)arg0;
- (id)avatar2;
- (void)setGoodCommentCountLabel:(id)arg0;
- (id)goodCommentCountLabel;
- (void)updateCommentViewWithProductmodel:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setupUI;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg0;

@end