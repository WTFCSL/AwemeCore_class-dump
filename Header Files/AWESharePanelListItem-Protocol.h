//
//     Generated by private class-dump
//

@class UIColor, NSArray, UICollectionViewFlowLayout, UIView;
@protocol AWEShareTask;

@protocol AWESharePanelListItem <NSObject>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *cellItems;
@property (retain, nonatomic) id<AWEShareTask> task;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double sectionHeight;
@property (nonatomic) struct CGSize { double x0; double x1; } itemSize;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double minimumLineSpacing;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) UIColor *itemBackgroundColor;
@property (copy, nonatomic) NSArray *friends;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) id /* block */ AWEIMMoreBtnClick;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (copy, nonatomic) id /* block */ viewDidScroll;
@property (nonatomic) double sectionHeaderHeight;
@property (retain, nonatomic) UIView *sectionHeader;
@property (nonatomic) double sectionFooterHeight;
@property (retain, nonatomic) UIView *sectionFooter;

- (id)cellItems;
- (void)setCellItems:(id)arg0;
- (id /* block */)viewDidScroll;
- (void)setViewDidScroll:(id /* block */)arg0;
- (id /* block */)AWEIMMoreBtnClick;
- (void)setAWEIMMoreBtnClick:(id /* block */)arg0;
- (double)sectionHeaderHeight;
- (id)friends;
- (double)sectionFooterHeight;
- (void)setLayout:(id)arg0;
- (long long)type;
- (void)setSectionFooterHeight:(double)arg0;
- (void)setType:(long long)arg0;
- (id)sectionHeader;
- (void)setSectionHeaderHeight:(double)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void)setTask:(id)arg0;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)layout;
- (struct CGSize { double x0; double x1; })itemSize;
- (void)setFriends:(id)arg0;
- (void)setHidden:(BOOL)arg0;
- (id)task;
- (BOOL)hidden;
- (void)setMinimumInteritemSpacing:(double)arg0;
- (void)setMinimumLineSpacing:(double)arg0;
- (void)setItemSize:(struct CGSize { double x0; double x1; })arg0;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)setSectionHeader:(id)arg0;
- (id)itemBackgroundColor;
- (void)setItemBackgroundColor:(id)arg0;
- (id)sectionFooter;
- (void)setSectionFooter:(id)arg0;
- (id /* block */)willDismissHandler;
- (void)setWillDismissHandler:(id /* block */)arg0;
- (double)sectionHeight;
- (void)setSectionHeight:(double)arg0;

@end
