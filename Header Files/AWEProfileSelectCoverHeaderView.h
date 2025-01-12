//
//     Generated by private class-dump
//

@class UILabel, UIButton, NSString;

@interface AWEProfileSelectCoverHeaderView : UICollectionReusableView {
    NSString *_awemeSourceText;
    NSString *_routerSchema;
    unsigned long long _type;
    UILabel *_leftLabel;
    UIButton *_rightButton;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (copy, nonatomic) NSString *awemeSourceText;
@property (copy, nonatomic) NSString *routerSchema;

- (id)awemeSourceText;
- (void)setAwemeSourceText:(id)arg0;
- (id)routerSchema;
- (void)setRouterSchema:(id)arg0;
- (void)didClickRightButton;
- (void)refreshWithType:(unsigned long long)arg0;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (unsigned long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setupUI;
- (id)leftLabel;
- (void)setLeftLabel:(id)arg0;

@end
