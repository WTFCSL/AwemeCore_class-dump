//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSString;

@interface AWEProhibitedContentDouyinView : UIView <AWEProhibitedContentViewProtocol> {
    NSString *text;
    UIImageView *_iconImageView;
    UILabel *_label;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)didChangedLanguage;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setIcon:(id)arg0;
- (id)text;
- (id)label;
- (void)layoutSubviews;
- (void)dealloc;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;

@end