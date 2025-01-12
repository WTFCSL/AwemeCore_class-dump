//
//     Generated by private class-dump
//

@class UIImageView;

@interface IESLiveReplyTreeOperateItemView : UIView {
    UIImageView *_iconImageView;
    id /* block */ _tapAction;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)updateIconImage:(id)arg0 completionBlock:(id /* block */)arg1;
- (id)initWithIconImage:(id)arg0 tapAction:(id /* block */)arg1;
- (void)didTapOperateItem;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg0;

@end
