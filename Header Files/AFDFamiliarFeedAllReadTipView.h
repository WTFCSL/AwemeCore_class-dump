//
//     Generated by private class-dump
//

@class NSString, UILabel;

@interface AFDFamiliarFeedAllReadTipView : UIView {
    NSString *_toastText;
    UILabel *_toastLabel;
}

@property (copy, nonatomic) NSString *toastText;
@property (retain, nonatomic) UILabel *toastLabel;

- (id)toastText;
- (void)setToastText:(id)arg0;
- (struct CGSize { double x0; double x1; })tipSize;
- (void)setToastLabel:(id)arg0;
- (id)toastLabel;
- (void).cxx_destruct;
- (id)initWithText:(id)arg0;
- (void)setupUI;

@end