//
//     Generated by private class-dump
//

@class IESECStorePageContext, UIView;
@protocol IESECStoreContainerProtocol;

@protocol IESECShopTabElementProtocol <IESECPagerViewTabElement>

@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (weak, nonatomic) id<IESECStoreContainerProtocol> container;

- (id)initWithPageContext:(id)arg0;
- (id)container;
- (void)setContainer:(id)arg0;
- (id)rootView;
- (void)setRootView:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@optional

- (void)updateWithPreloadTabModel:(id)arg0;

@end
