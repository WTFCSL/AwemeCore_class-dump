//
//     Generated by private class-dump
//

@class UILabel, IESECLLDCImageView, IESECToastElement;

@interface IESECGoodsDetailToast : UIView {
    IESECLLDCImageView *_iconView;
    UILabel *_textLabel;
    IESECToastElement *_element;
}

@property (retain, nonatomic) IESECLLDCImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) IESECToastElement *element;

+ (void)showWithToastElement:(id)arg0;

- (void)showWithToastElement:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setElement:(id)arg0;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)element;
- (void)layoutSubviews;
- (void)setTextLabel:(id)arg0;

@end