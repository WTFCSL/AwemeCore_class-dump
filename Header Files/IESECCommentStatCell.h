//
//     Generated by private class-dump
//

@class IESECHighlightButton;

@interface IESECCommentStatCell : UICollectionViewCell {
    id /* block */ _clickLStatBlock;
    IESECHighlightButton *_statButton;
}

@property (retain, nonatomic) IESECHighlightButton *statButton;
@property (copy, nonatomic) id /* block */ clickLStatBlock;

- (id)statButton;
- (void)filterComments:(id)arg0;
- (id /* block */)clickLStatBlock;
- (void)configWithStat:(id)arg0;
- (void)setClickLStatBlock:(id /* block */)arg0;
- (void)setStatButton:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSelected:(BOOL)arg0;
- (void)setupUI;

@end
