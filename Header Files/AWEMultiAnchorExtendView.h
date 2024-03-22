//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, AWEPOIEntryViewLayout;

@interface AWEMultiAnchorExtendView : UIView <AWEMultiAnchorExtendViewProtocol> {
    AWEPOIEntryViewLayout *_layout;
    UILabel *_multiCountLabel;
    UIImageView *_arrowView;
    double _contentWidth;
    id /* block */ _clickBlock;
}

@property (retain, nonatomic) AWEPOIEntryViewLayout *layout;
@property (retain, nonatomic) UILabel *multiCountLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) double contentWidth;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickMultiAnchorEventHandler:(id /* block */)arg0;
- (void)configMultiAnchorCount:(long long)arg0 useSeperate:(BOOL)arg1;
- (void)hiddenExtendView;
- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void)p_setupUI;
- (void)clickAction:(id)arg0;
- (id)multiCountLabel;
- (void)setMultiCountLabel:(id)arg0;
- (void)setLayout:(id)arg0;
- (void).cxx_destruct;
- (double)contentWidth;
- (id)initWithLayout:(id)arg0;
- (id)layout;
- (void)setContentWidth:(double)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (double)contentViewWidth;

@end