//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWEECommerceEntryView : UIView <AWEECommerceLabelActionProtocol> {
    id /* block */ _tappedBlock;
    UIButton *_containerView;
    UIImageView *_icon;
    UILabel *_header;
    UILabel *_content;
    UIView *_separator;
    UIImageView *_arrow;
}

@property (copy, nonatomic) id /* block */ tappedBlock;
@property (retain, nonatomic) UIButton *containerView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *header;
@property (retain, nonatomic) UILabel *content;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIImageView *arrow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTappedBlock:(id /* block */)arg0;
- (id /* block */)tappedBlock;
- (void)setArrow:(id)arg0;
- (id)arrow;
- (void)viewTapped;
- (void)updateUIWithModel:(id)arg0 action:(id /* block */)arg1;
- (id)icon;
- (void).cxx_destruct;
- (id)separator;
- (void)setSeparator:(id)arg0;
- (id)header;
- (id)content;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setContent:(id)arg0;
- (id)containerView;
- (void)setIcon:(id)arg0;
- (void)setHeader:(id)arg0;
- (void)setupUI;

@end
