//
//     Generated by private class-dump
//

@class NSString, IESFormatAbilityItemViewModel, UIView, UILabel;

@interface IESFormatAbilityItemView : UICollectionViewCell {
    id /* block */ _onClickItem;
    IESFormatAbilityItemViewModel *_viewModel;
    UIView *_border;
    UILabel *_command;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (weak, nonatomic) IESFormatAbilityItemViewModel *viewModel;
@property (retain, nonatomic) UIView *border;
@property (retain, nonatomic) UILabel *command;
@property (copy, nonatomic) id /* block */ onClickItem;

+ (id)reuseIdentifier;

- (void)setOnClickItem:(id /* block */)arg0;
- (id /* block */)onClickItem;
- (void).cxx_destruct;
- (void)setCommand:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (void)setBorder:(id)arg0;
- (id)command;
- (id)viewModel;
- (id)border;
- (void)updateWithViewModel:(id)arg0;
- (void)onTap:(id)arg0;

@end