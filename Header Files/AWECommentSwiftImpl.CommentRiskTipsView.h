//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommentSwiftImpl.CommentRiskTipsView : UIView <AWECommentRiskTipsViewProtocol, AWECommentListBottomContainerSubViewDelegate> {
    void /* unknown type, empty encoding */ closeBlock;
    void /* unknown type, empty encoding */ showDetailBlock;
    void /* unknown type, empty encoding */ hasDetail;
    void /* unknown type, empty encoding */ contentStr;
    void /* unknown type, empty encoding */ isBGColorWhite;
    void /* unknown type, empty encoding */ commentRiskColorType;
    void /* unknown type, empty encoding */ commentRiskIconLight;
    void /* unknown type, empty encoding */ commentRiskIconDark;
    void /* unknown type, empty encoding */ commentRiskUrl;
    void /* unknown type, empty encoding */ containerViewBackgroundColor;
    void /* unknown type, empty encoding */ contentLabelTextColor;
    void /* unknown type, empty encoding */ iconTintColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
}

@property (nonatomic, copy) id /* block */ closeBlock;
@property (nonatomic, copy) id /* block */ showDetailBlock;
@property (nonatomic, copy) NSString *contentStr;
@property (nonatomic, copy) NSString *accessibilityLabel;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (id /* block */)showDetailBlock;
- (void)setShowDetailBlock:(id /* block */)arg0;
- (id)contentStr;
- (void)setContentStr:(id)arg0;
- (double)heightForBottomTipsWithContent:(id)arg0 maxWidth:(double)arg1;
- (void)closeButtonClick:(id)arg0;
- (void)showDetail:(id)arg0;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)layoutSubviews;

@end
