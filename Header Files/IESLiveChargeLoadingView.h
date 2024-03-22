//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface IESLiveChargeLoadingView : UIView {
    BOOL _enableNewStyle;
    UIImageView *_imageView;
    UILabel *_textView;
    UIView *_loadingContainer;
}

@property (retain, nonatomic) UIView *loadingContainer;
@property (nonatomic) BOOL enableNewStyle;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textView;

+ (id)showIn:(id)arg0;
+ (id)showIn:(id)arg0 enableNewStyle:(BOOL)arg1;

- (id)loadingContainer;
- (void)setLoadingContainer:(id)arg0;
- (void)setupUIs;
- (BOOL)enableNewStyle;
- (void)setEnableNewStyle:(BOOL)arg0;
- (id)initEnableNewStyle:(BOOL)arg0;
- (id)textView;
- (void)dismiss;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (void)setTextView:(id)arg0;
- (void)startAnimation;

@end
