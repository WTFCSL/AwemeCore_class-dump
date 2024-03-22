//
//     Generated by private class-dump
//

@class AWECommonUserListBaseSectionViewModel;

@interface AWECommonUserListViewModel : AWEBaseListViewModel {
    BOOL _hasMore;
    BOOL _hiddenMJFooter;
    AWECommonUserListBaseSectionViewModel *_listVM;
}

@property (readonly, nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWECommonUserListBaseSectionViewModel *listVM;
@property (nonatomic) BOOL hiddenMJFooter;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (id)listVM;
- (void)addBinding;
- (BOOL)hiddenMJFooter;
- (void)setListVM:(id)arg0;
- (void)setHiddenMJFooter:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)hasMore;

@end
