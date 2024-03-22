//
//     Generated by private class-dump
//

@class AWEFeedRefreshFooter;
@protocol AWEUserRecommendTableSectionProviderProtocol, AWEUserRecommendTableViewManagerDataSource, UITableViewDataSource, UITableViewDelegate;

@protocol AWEUserRecommendTableViewManagerProtocol <NSObject>

@property (weak, nonatomic) id<AWEUserRecommendTableViewManagerDataSource> dataSource;
@property (weak, nonatomic) id<UITableViewDataSource> tableViewDataSource;
@property (weak, nonatomic) id<UITableViewDelegate> tableViewDelegate;
@property (readonly, nonatomic) id<AWEUserRecommendTableSectionProviderProtocol> sectionProvider;
@property (readonly, nonatomic) long long recommendSection;
@property (readonly, nonatomic) AWEFeedRefreshFooter *managedFooter;
@property (nonatomic) BOOL managedFooterHidden;
@property (nonatomic) double managedFooterInsetB;
@property (nonatomic) double recommendFooterInsetB;

- (void)setTableViewDelegate:(id)arg0;
- (id)sectionProvider;
- (id)managedFooter;
- (void)setRecommendFooterInsetB:(double)arg0;
- (long long)recommendSection;
- (void)setManagedFooterHidden:(BOOL)arg0;
- (void)setManagedFooterInsetB:(double)arg0;
- (BOOL)shouldHideManagedFooter;
- (double)recommendFooterInsetB;
- (double)managedFooterInsetB;
- (id)tableViewDelegate;
- (BOOL)managedFooterHidden;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (id)tableViewDataSource;
- (void)setTableViewDataSource:(id)arg0;

@end