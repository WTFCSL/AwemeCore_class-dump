//
//     Generated by private class-dump
//

@class AWEFollowListCategoryStatisticsModel, AWEFollowListPageContext, AWEFollowListClassificationEntrance, NSNumber;

@interface AWEFollowListClassificationEntranceCell : UICollectionViewCell {
    BOOL _unreadNeedTotal;
    AWEFollowListClassificationEntrance *_entrance;
    AWEFollowListCategoryStatisticsModel *_categoryResponse;
    NSNumber *_categoryFollowingGroupCount;
    NSNumber *_cachedGroupCount;
    AWEFollowListPageContext *_pageContext;
}

@property (retain, nonatomic) AWEFollowListClassificationEntrance *entrance;
@property (retain, nonatomic) AWEFollowListCategoryStatisticsModel *categoryResponse;
@property (retain, nonatomic) NSNumber *categoryFollowingGroupCount;
@property (retain, nonatomic) NSNumber *cachedGroupCount;
@property (nonatomic) BOOL unreadNeedTotal;
@property (retain, nonatomic) AWEFollowListPageContext *pageContext;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setEntrance:(id)arg0;
- (id)entrance;
- (BOOL)unreadNeedTotal;
- (void)setUnreadNeedTotal:(BOOL)arg0;
- (void)setCategoryFollowingGroupCount:(id)arg0;
- (id)categoryFollowingGroupCount;
- (void)setCategoryResponse:(id)arg0;
- (void)setCachedGroupCount:(id)arg0;
- (id)categoryResponse;
- (id)cachedGroupCount;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
