//
//     Generated by private class-dump
//

@class UIStackView, AWETeenGuidePageDataController, NSString, UILabel, UIView;

@interface AWETeenAgeSelectView : UIView <AWETeenAgeItemViewProtocol> {
    BOOL _isSmallScreen;
    id /* block */ _ageItemSelectedBlock;
    AWETeenGuidePageDataController *_dataController;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIStackView *_stackView;
}

@property (retain, nonatomic) AWETeenGuidePageDataController *dataController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) BOOL isSmallScreen;
@property (copy, nonatomic) id /* block */ ageItemSelectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataController:(id)arg0;
- (id)initWithDataController:(id)arg0;
- (void)setAgeItemSelectedBlock:(id /* block */)arg0;
- (void)p_setupViews;
- (id /* block */)ageItemSelectedBlock;
- (void)setSubtitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)subtitleLabel;
- (id)stackView;
- (id)containerView;
- (BOOL)isSmallScreen;
- (void)setStackView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setIsSmallScreen:(BOOL)arg0;
- (void)didSelectItem:(unsigned long long)arg0;
- (id)dataController;

@end
