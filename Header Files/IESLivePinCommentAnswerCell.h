//
//     Generated by private class-dump
//

@class UILabel, IESLivePinCommentCheckTipView;

@interface IESLivePinCommentAnswerCell : IESLivePinCommentBaseCell {
    UILabel *_descLabel;
    IESLivePinCommentCheckTipView *_checkTipView;
}

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) IESLivePinCommentCheckTipView *checkTipView;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setupSubViews;
- (void)setCheckTipView:(id)arg0;
- (id)checkTipView;
- (id)paramsWithNode:(id)arg0;
- (void)configWithNode:(id)arg0 containerWidth:(double)arg1;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end