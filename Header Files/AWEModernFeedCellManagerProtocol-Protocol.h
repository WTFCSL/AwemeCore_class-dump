//
//     Generated by private class-dump
//

@protocol AWEModernFeedCellManagerProtocol <NSObject>

- (id)cellTypeForItem:(id)arg0;
- (Class)controllerClassForType:(id)arg0;
- (id)accessoryTypeForCellType:(id)arg0;
- (Class)attachmentControllerClass;
- (id)cellTypeForItemRegisterIfNeeded:(id)arg0;
- (id)dynamicCellTypes;
- (id)allTypes;

@optional

- (void)registerControllerClass:(Class)arg0 itemPredicateBlock:(id /* block */)arg1;
- (Class)controllerClassForModel:(id)arg0;

@end
