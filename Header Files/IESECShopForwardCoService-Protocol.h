//
//     Generated by private class-dump
//

@class IESECStoreContainerViewModel, NSArray, UIView, IESECStorePageContext;
@protocol IESECStoreContainerProtocol;

@protocol IESECShopForwardCoService

@property (readonly, weak, nonatomic) UIView *rootView;
@property (readonly, nonatomic) IESECStorePageContext *pageContext;
@property (readonly, weak, nonatomic) id<IESECStoreContainerProtocol> container;
@property (readonly, nonatomic) IESECStoreContainerViewModel *containerVM;
@property (readonly, copy, nonatomic) NSArray *tabModelArray;
@property (readonly, copy, nonatomic) NSArray *currentTabContents;

- (id)tabModelArray;
- (id)currentTabContents;
- (void)configForwardCoRootView:(id)arg0;
- (void)configForwardCoContainer:(id)arg0;
- (void)loadForwardCoController:(id)arg0;
- (void)configForwardCoContext:(id)arg0;
- (void)configForwardCoPagerView:(id)arg0;
- (void)configForwardCoBottomTabView:(id)arg0;
- (void)configForwardCoContainerVM:(id)arg0;
- (id)shopTabModelForTabKitTabModel:(id)arg0;
- (void)configForwardCoTabModelArray:(id)arg0 withAnchoredTabID:(long long)arg1;
- (void)configForwardCoCurrentTabContents:(id)arg0;
- (id)containerVM;
- (id)container;
- (id)rootView;
- (id)pageContext;

@end
