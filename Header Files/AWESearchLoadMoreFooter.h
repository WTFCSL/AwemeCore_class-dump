//
//     Generated by private class-dump
//

@class NSAttributedString, UILabel, UIView, YYLabel;

@interface AWESearchLoadMoreFooter : AWELoadMoreFooter {
    BOOL _showNoMoreDataText;
    BOOL _originLabelIsHidden;
    long long _mj_insetBResetedOffset;
    NSAttributedString *_noMoreDataAttributedStringWithLink;
    UILabel *_originLabel;
    YYLabel *_labelY;
    UIView *_leftLine;
    UIView *_rightLine;
}

@property (retain, nonatomic) UILabel *originLabel;
@property (nonatomic) BOOL originLabelIsHidden;
@property (retain, nonatomic) YYLabel *labelY;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;
@property (nonatomic) long long mj_insetBResetedOffset;
@property (copy, nonatomic) NSAttributedString *noMoreDataAttributedStringWithLink;

- (void)placeSubviews;
- (void)setShowNoMoreDataText:(BOOL)arg0;
- (void)setOriginLabel:(id)arg0;
- (id)originLabel;
- (id)leftLine;
- (void)setLeftLine:(id)arg0;
- (id)rightLine;
- (void)setRightLine:(id)arg0;
- (long long)mj_insetBResetedOffset;
- (void)setMj_insetBResetedOffset:(long long)arg0;
- (BOOL)showNoMoreDataText;
- (void)setNoMoreDataAttributedStringWithLink:(id)arg0;
- (id)labelY;
- (void)getOriginalLabel;
- (id)noMoreDataAttributedStringWithLink;
- (BOOL)originLabelIsHidden;
- (void)setOriginLabelIsHidden:(BOOL)arg0;
- (id)getCurrentLable;
- (void)configLeftLine:(id)arg0 rightLine:(id)arg1;
- (void)configLeftLineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 rightLineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)shouldHideLable:(BOOL)arg0;
- (void)configOriginLabelHidden:(BOOL)arg0;
- (void)setLabelY:(id)arg0;
- (void).cxx_destruct;
- (void)setState:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepare;

@end
