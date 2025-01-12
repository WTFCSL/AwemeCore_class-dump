//
//     Generated by private class-dump
//

@class NSString, DVETextToolStackView;

@interface DVETextTopBar : UIView <DVETextToolStackViewProtocol> {
    DVETextToolStackView *_stackView;
}

@property (retain, nonatomic) DVETextToolStackView *stackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAllBarItems;
- (void)updateBarItemWithItemIdentity:(id)arg0;
- (void)registerItemConfigProvider:(id /* block */)arg0 clickHandler:(id /* block */)arg1 forItemIdentity:(id)arg2;
- (struct CGPoint { double x0; double x1; })itemViewCenterOffsetWithItemIdentity:(id)arg0;
- (void)p_setupWithBarItemWithIdentityList:(id)arg0;
- (void)p_setupBarStackViewWithIdentityList:(id)arg0;
- (id)initWithBarItemIdentityList:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)stackView;
- (void)setStackView:(id)arg0;

@end
