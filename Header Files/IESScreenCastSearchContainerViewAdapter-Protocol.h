//
//     Generated by private class-dump
//

@protocol IESScreenCastSearchContainerViewAdapter <NSObject>

@property (copy, nonatomic) id /* block */ didAddSearchViewBlock;
@property (copy, nonatomic) id /* block */ willRemoveSearchViewBlock;

@optional

- (id /* block */)didAddSearchViewBlock;
- (id /* block */)willRemoveSearchViewBlock;
- (void)removeSearchView;
- (void)setDidAddSearchViewBlock:(id /* block */)arg0;
- (void)setWillRemoveSearchViewBlock:(id /* block */)arg0;

@end
