//
//     Generated by private class-dump
//

@protocol RecoveryPayFooterViewDelegate;

@interface RecoveryPayFooterView : UIView {
    id<RecoveryPayFooterViewDelegate> _delegate;
}

@property (weak, nonatomic) id<RecoveryPayFooterViewDelegate> delegate;

- (void)loadUI;
- (void)onPay:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;

@end