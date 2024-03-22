//
//     Generated by private class-dump
//

@class UIImageView, UILabel, IESEffectModel, UIButton;

@interface AWEStickerCommerceEnterView : UIView {
    UIButton *_enterButton;
    IESEffectModel *_effectModel;
    UIImageView *_stickerImage;
    UILabel *_enterLabel;
    UIImageView *_arrowImage;
}

@property (retain, nonatomic) UIImageView *stickerImage;
@property (retain, nonatomic) UIButton *enterButton;
@property (retain, nonatomic) UILabel *enterLabel;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) IESEffectModel *effectModel;

- (id)effectModel;
- (void)setEffectModel:(id)arg0;
- (id)enterButton;
- (void)setEnterButton:(id)arg0;
- (void)updateStickerDataWithEffectModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)arrowImage;
- (void)setArrowImage:(id)arg0;
- (id)enterLabel;
- (void)setEnterLabel:(id)arg0;
- (id)stickerImage;
- (void)setStickerImage:(id)arg0;

@end