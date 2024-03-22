//
//     Generated by private class-dump
//

@protocol AWEProfileExtensionAreaCardViewInternalProtocol <NSObject>

@property (copy, nonatomic) id /* block */ reloadTitleBlock;
@property (copy, nonatomic) id /* block */ reloadSubTitleBlock;
@property (copy, nonatomic) id /* block */ reloadCustomDetailViewBlock;

- (void)configWithCardModel:(id)arg0;
- (BOOL)isRedDotShow;
- (id /* block */)reloadTitleBlock;
- (id /* block */)reloadSubTitleBlock;
- (id /* block */)reloadCustomDetailViewBlock;
- (void)configCardStyle:(unsigned long long)arg0;
- (void)setReloadTitleBlock:(id /* block */)arg0;
- (void)setReloadSubTitleBlock:(id /* block */)arg0;
- (void)setReloadCustomDetailViewBlock:(id /* block */)arg0;

@optional

- (void)doDynamicAnimationWithURLList:(id)arg0 supplementedText:(id)arg1 iconStyle:(unsigned long long)arg2 needShowBorder:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)resetCardView;

@end
