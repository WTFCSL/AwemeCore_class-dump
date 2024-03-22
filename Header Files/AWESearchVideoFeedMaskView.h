//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface AWESearchVideoFeedMaskView : UIView <AWESearchVideoFeedMaskViewProtocol> {
    id /* block */ _dismissBlock;
    UILabel *_titleLabel;
    UILabel *_despLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *despLabel;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowWithAwemeModel:(id)arg0;

- (void)configureUI;
- (id)despLabel;
- (void)setDespLabel:(id)arg0;
- (void)viewDidTap:(id)arg0;
- (void)configureWithAwemeModel:(id)arg0;
- (void)showInView:(id)arg0 autoDismiss:(BOOL)arg1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end