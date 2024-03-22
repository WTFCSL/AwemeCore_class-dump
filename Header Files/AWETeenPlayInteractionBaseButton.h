//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIButton;

@interface AWETeenPlayInteractionBaseButton : AWETeenPlayInteractionBaseElement <AWEBaseElementProtocol> {
    UIButton *_button;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    id /* block */ _clickBlock;
}

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void)p_setupViews;
- (void)p_layoutHorizontal;
- (void)p_layoutVertical;
- (void)p_singleTap;
- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg0;
- (void)setData:(id)arg0;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isHorizontal;

@end
