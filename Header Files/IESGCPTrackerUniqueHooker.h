//
//     Generated by private class-dump
//

@class NSMapTable;

@interface IESGCPTrackerUniqueHooker : IESGCPTrackerHooker {
    NSMapTable *_actionMap;
}

@property (retain, nonatomic) NSMapTable *actionMap;

+ (id)shareInstance;

- (void)setActionMap:(id)arg0;
- (void)uniqueHookCollectionViewCellClickEvent:(id)arg0 fromCollectionView:(id)arg1 clickAction:(id /* block */)arg2;
- (void)uniqueHookTableViewCellClickEvent:(id)arg0 fromTableView:(id)arg1 clickAction:(id /* block */)arg2;
- (void)registActionBlock:(id /* block */)arg0 forKey:(id)arg1;
- (void)uniqueHookTableViewCellClickEventFrom:(id)arg0;
- (void)performActionBlockFor:(id)arg0;
- (void)uniqueHookCollectionViewCellClickEventFrom:(id)arg0;
- (void).cxx_destruct;
- (id)actionMap;

@end