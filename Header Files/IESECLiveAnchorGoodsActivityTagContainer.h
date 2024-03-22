//
//     Generated by private class-dump
//

@class UIImageView, CAShapeLayer, UILabel, UIView;

@interface IESECLiveAnchorGoodsActivityTagContainer : UIView {
    UIImageView *_iconView;
    UILabel *_contentLabel;
    UILabel *_subfixLabel;
    UIView *_subfixBGView;
    CAShapeLayer *_dashLine;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *subfixLabel;
@property (retain, nonatomic) UIView *subfixBGView;
@property (retain, nonatomic) CAShapeLayer *dashLine;

- (id)dashLine;
- (void)setDashLine:(id)arg0;
- (id)subfixBGView;
- (id)subfixLabel;
- (id)dashline;
- (void)updateContent:(id)arg0 subfixContent:(id)arg1;
- (void)updateImageName:(id)arg0 content:(id)arg1 subfixContent:(id)arg2;
- (void)updateImageURL:(id)arg0 content:(id)arg1 subfixContent:(id)arg2;
- (void)setSubfixLabel:(id)arg0;
- (void)setSubfixBGView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)updateFrame;

@end