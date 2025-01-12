//
//     Generated by private class-dump
//

@class UILabel, UIImageView, IESECGradientView;

@interface IESECGoodsMessageDisplayTableViewCell : UITableViewCell {
    UILabel *_nameLable;
    UIImageView *_avaterImageView;
    UILabel *_messageLable;
    IESECGradientView *_gradientView;
}

@property (retain, nonatomic) UILabel *nameLable;
@property (retain, nonatomic) UIImageView *avaterImageView;
@property (retain, nonatomic) UILabel *messageLable;
@property (retain, nonatomic) IESECGradientView *gradientView;

- (void)bindData:(id)arg0;
- (id)avaterImageView;
- (id)nameLable;
- (id)messageLable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caculateCellSize;
- (void)setNameLable:(id)arg0;
- (void)setAvaterImageView:(id)arg0;
- (void)setMessageLable:(id)arg0;
- (unsigned long long)style;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (void)layoutSubviews;
- (id)gradientView;
- (void)setupSubviews;

@end
