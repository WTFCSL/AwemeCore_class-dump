//
//     Generated by private class-dump
//

@class UIButton;

@interface IESLiveKTVSearchHistoryViewCell : IESLiveKTVSearchViewCell {
    id /* block */ _actionBlock;
    UIButton *_actionButton;
}

@property (retain, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (struct CGSize { double x0; double x1; })sizeForCellWithModel:(id)arg0;

- (void)renderWith:(id)arg0;
- (void)didClickedAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id /* block */)actionBlock;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;

@end
