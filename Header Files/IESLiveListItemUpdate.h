//
//     Generated by private class-dump
//

@class NSIndexPath;

@interface IESLiveListItemUpdate : IESLiveListUpdate {
    NSIndexPath *_indexPath;
    NSIndexPath *_indexPathNew;
    id /* block */ _itemUpdateBlock;
}

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) NSIndexPath *indexPathNew;
@property (copy, nonatomic) id /* block */ itemUpdateBlock;

+ (id)updateWithType:(long long)arg0 indexPath:(id)arg1 newIndexPath:(id)arg2 object:(id)arg3;

- (id /* block */)itemUpdateBlock;
- (void)setItemUpdateBlock:(id /* block */)arg0;
- (BOOL)isItemUpdate;
- (void)setIndexPathNew:(id)arg0;
- (id)indexPathNew;
- (void).cxx_destruct;
- (void)setIndexPath:(id)arg0;
- (id)indexPath;

@end