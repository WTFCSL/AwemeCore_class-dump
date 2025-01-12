//
//     Generated by private class-dump
//

@class UILabel;
@protocol ACCInsetsLabelProtocol;

@interface AWESingleMusicTitleView : UIView {
    BOOL _isEliteVersion;
    UILabel *_titleLabel;
    id<ACCInsetsLabelProtocol> _songTagLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) id<ACCInsetsLabelProtocol> songTagLabel;
@property (nonatomic) BOOL isEliteVersion;

- (void)setIsEliteVersion:(BOOL)arg0;
- (BOOL)isEliteVersion;
- (id)songTagLabel;
- (void)setSongTagLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;

@end
