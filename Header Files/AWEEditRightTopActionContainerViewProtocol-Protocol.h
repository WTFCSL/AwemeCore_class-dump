//
//     Generated by private class-dump
//

@class AWEEditActionItemView, NSArray, NSNumber, AWEEditActionContainerViewLayout;

@protocol AWEEditRightTopActionContainerViewProtocol <NSObject>

@property (nonatomic) BOOL folded;
@property (readonly, copy, nonatomic) NSArray *itemDatas;
@property (readonly, copy, nonatomic) NSArray *itemViews;
@property (readonly, nonatomic) AWEEditActionContainerViewLayout *containerViewLayout;
@property (copy, nonatomic) id /* block */ moreButtonClickedBlock;
@property (retain, nonatomic) NSNumber *maxHeightValue;
@property (readonly, nonatomic) AWEEditActionItemView *moreItemView;

- (void)tapToDismiss;
- (void)setFolded:(BOOL)arg0;
- (void)setMoreButtonClickedBlock:(id /* block */)arg0;
- (id)initWithItemDatas:(id)arg0 containerViewLayout:(id)arg1 isFromIM:(BOOL)arg2 ignoreUnfoldLimitCount:(long long)arg3 isFromCommerce:(BOOL)arg4 ignoreUnfoldLimit:(BOOL)arg5;
- (id)maxHeightValue;
- (void)setMaxHeightValue:(id)arg0;
- (id)moreItemView;
- (id)containerViewLayout;
- (id)itemDatas;
- (id /* block */)moreButtonClickedBlock;
- (id)itemViews;
- (BOOL)folded;

@end