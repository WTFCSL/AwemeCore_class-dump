//
//     Generated by private class-dump
//

@interface IESECSKUBottomTipsView : UIView {
    id /* block */ _buttonClickCallback;
}

@property (copy, nonatomic) id /* block */ buttonClickCallback;

+ (double)tipsButtonWidthWith:(id)arg0;
+ (double)tipsViewHeightWith:(id)arg0;

- (void)setButtonClickCallback:(id /* block */)arg0;
- (id /* block */)buttonClickCallback;
- (void)setupWith:(id)arg0;
- (id)buttonTextAttrWith:(id)arg0;
- (id)initTipViewWith:(id)arg0;
- (void).cxx_destruct;
- (void)tapAction:(id)arg0;

@end