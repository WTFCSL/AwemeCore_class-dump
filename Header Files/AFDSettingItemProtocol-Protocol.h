//
//     Generated by private class-dump
//

@class NSString;

@protocol AFDSettingItemProtocol <NSObject>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *sectionTitle;
@property (copy, nonatomic) NSString *routerURL;
@property (copy, nonatomic) NSString *pageRouterURL;
@property (retain, nonatomic) Class delegateClass;

- (id)routerURL;
- (void)setRouterURL:(id)arg0;
- (id)pageRouterURL;
- (void)setPageRouterURL:(id)arg0;
- (Class)delegateClass;
- (id)itemID;
- (void)setParentID:(id)arg0;
- (void)setItemID:(id)arg0;
- (id)title;
- (void)setDelegateClass:(Class)arg0;
- (id)parentID;
- (void)setTitle:(id)arg0;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg0;

@end