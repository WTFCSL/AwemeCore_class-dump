//
//     Generated by private class-dump
//

@class IESECCommentMediaItemViewModel, UILabel, UIView, UIButton;

@interface IESECCommentRightInteractorView : UIView {
    BOOL _isAnimationing;
    IESECCommentMediaItemViewModel *_model;
    id /* block */ _clickLikeButtonBlock;
    unsigned long long _enterFrom;
    UIButton *_likeButton;
    UILabel *_likeCountLabel;
    UIView *_likeAndCountButton;
}

@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) UIView *likeAndCountButton;
@property (nonatomic) BOOL isAnimationing;
@property (retain, nonatomic) IESECCommentMediaItemViewModel *model;
@property (copy, nonatomic) id /* block */ clickLikeButtonBlock;
@property (nonatomic) unsigned long long enterFrom;

- (void)setEnterFrom:(unsigned long long)arg0;
- (unsigned long long)enterFrom;
- (BOOL)isAnimationing;
- (void)setIsAnimationing:(BOOL)arg0;
- (id)likeCountLabel;
- (void)likeButtonTapped:(id)arg0;
- (void)setLikeCountLabel:(id)arg0;
- (void)updateViewWithModel:(id)arg0;
- (void)updateLikeButtonStatus:(id)arg0;
- (void)setClickLikeButtonBlock:(id /* block */)arg0;
- (id /* block */)clickLikeButtonBlock;
- (id)likeAndCountButton;
- (id)likeCountsFormated:(id)arg0;
- (void)setLikeAndCountButton:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (id)likeButton;
- (void)setLikeButton:(id)arg0;

@end
