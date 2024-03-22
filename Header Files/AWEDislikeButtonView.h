//
//     Generated by private class-dump
//

@class UILabel, UIButton, UITapGestureRecognizer;

@interface AWEDislikeButtonView : UIView {
    UILabel *_tipsLabel;
    UIButton *_dislikeButton;
    UIButton *_cancelButton;
    UIButton *_tailImageView;
    UITapGestureRecognizer *_tapGes;
    id /* block */ _dislikeActionBlock;
    id /* block */ _cancelBlock;
    id /* block */ _closeBlock;
}

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *tailImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) id /* block */ dislikeActionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ closeBlock;

- (id)tipsLabel;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (id)dislikeButton;
- (void)setDislikeButton:(id)arg0;
- (void)setTipsLabel:(id)arg0;
- (id)tapGes;
- (void)setTapGes:(id)arg0;
- (void)updateWithTitle:(id)arg0 dislike:(id)arg1 cancel:(id)arg2;
- (id)initWithDislike:(id /* block */)arg0 cancel:(id /* block */)arg1 close:(id /* block */)arg2;
- (void)setDislikeActionBlock:(id /* block */)arg0;
- (void)addInsetWithSpace:(double)arg0 button:(id)arg1;
- (id /* block */)dislikeActionBlock;
- (void)onDislikeClicked:(id)arg0;
- (void)onCancelClicked:(id)arg0;
- (void)onCloseClicked:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (id)init;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)setupSubviews;
- (id)tailImageView;
- (void)setTailImageView:(id)arg0;

@end
