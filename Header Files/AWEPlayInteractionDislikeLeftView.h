//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AWEPlayInteractionContext, NSAttributedString, UITapGestureRecognizer, UIImageView, UIButton, UILabel;

@interface AWEPlayInteractionDislikeLeftView : UIView {
    AWEAwemeModel *_model;
    NSString *_referString;
    AWEPlayInteractionContext *_context;
    NSAttributedString *_attrTips;
    UITapGestureRecognizer *_tapGes;
    UIImageView *_imageView;
    UIImageView *_arrowView;
    UILabel *_tipsLabel;
    UIButton *_dislikeButton;
    UIButton *_cancelButton;
    id /* block */ _dislikeActionBlock;
    id /* block */ _cancelBlock;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (copy, nonatomic) NSAttributedString *attrTips;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) id /* block */ dislikeActionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)tipsLabel;
- (void)setAttrTips:(id)arg0;
- (id)dislikeButton;
- (void)setDislikeButton:(id)arg0;
- (void)setTipsLabel:(id)arg0;
- (id)attrTips;
- (id)tapGes;
- (void)setTapGes:(id)arg0;
- (void)_onAwemeDeleteNotification:(id)arg0;
- (void)addTapGesture;
- (void)trackDislikeClicked;
- (void)setDislikeActionBlock:(id /* block */)arg0;
- (id /* block */)dislikeActionBlock;
- (void)onDislikeClicked:(id)arg0;
- (void)onCancelClicked:(id)arg0;
- (void)updateByModel:(id)arg0 context:(id)arg1;
- (void)setModel:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (id)init;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)setContext:(id)arg0;
- (id)model;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (id)context;
- (void)setCancelBlock:(id /* block */)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setupSubviews;

@end