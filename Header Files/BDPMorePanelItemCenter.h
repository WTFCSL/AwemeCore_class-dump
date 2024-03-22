//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSRecursiveLock;

@interface BDPMorePanelItemCenter : NSObject {
    NSMutableDictionary *_itemProviderList;
    NSMutableDictionary *_elementActionProviderList;
    NSRecursiveLock *_itemProviderLock;
}

@property (retain, nonatomic) NSMutableDictionary *itemProviderList;
@property (retain, nonatomic) NSMutableDictionary *elementActionProviderList;
@property (retain, nonatomic) NSRecursiveLock *itemProviderLock;

+ (void)registerPanelItemProviderClass:(Class)arg0 forType:(long long)arg1;
+ (id)keyStringForType:(long long)arg0;
+ (id)actionStringForType:(unsigned long long)arg0;
+ (id)sharedCenter;

- (void)registerPanelItemProviderClass:(Class)arg0 forType:(long long)arg1;
- (id)itemsForPanel:(id)arg0 uniqueID:(id)arg1;
- (id)getAllPanelItemsWithUniqueID:(id)arg0;
- (id)itemProviderLock;
- (id)itemProviderList;
- (void)setItemProviderList:(id)arg0;
- (void)setItemProviderLock:(id)arg0;
- (void)registerPanelElementAction:(id /* block */)arg0 elementType:(unsigned long long)arg1;
- (id /* block */)getElementActionWithElementType:(unsigned long long)arg0;
- (id)getAllPanelItemsWithUniqueID:(id)arg0 extraInfo:(id)arg1;
- (id)elementActionProviderList;
- (void)setElementActionProviderList:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
