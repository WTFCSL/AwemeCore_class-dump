//
//     Generated by private class-dump
//

@class AWEFindCloseFriendsSearchBarSectionViewModel, AWEFindCloseFriendsDataContext, AWEFindCloseFriendsSearchListSectionViewModel, AWEEmptyPageSectionViewModel, AWEFindCloseFriendsListSectionViewModel;

@interface AWEFindCloseFriendsContainerViewModel : AWEBaseListViewModel {
    AWEFindCloseFriendsDataContext *_dataContext;
    AWEFindCloseFriendsSearchBarSectionViewModel *_searchBarVM;
    AWEFindCloseFriendsListSectionViewModel *_friendsListVM;
    AWEFindCloseFriendsSearchListSectionViewModel *_searchListVM;
    AWEEmptyPageSectionViewModel *_emptyVM;
    AWEEmptyPageSectionViewModel *_errorVM;
}

@property (retain, nonatomic) AWEFindCloseFriendsDataContext *dataContext;
@property (retain, nonatomic) AWEFindCloseFriendsSearchBarSectionViewModel *searchBarVM;
@property (retain, nonatomic) AWEFindCloseFriendsListSectionViewModel *friendsListVM;
@property (retain, nonatomic) AWEFindCloseFriendsSearchListSectionViewModel *searchListVM;
@property (retain, nonatomic) AWEEmptyPageSectionViewModel *emptyVM;
@property (retain, nonatomic) AWEEmptyPageSectionViewModel *errorVM;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (id)searchBarVM;
- (id)emptyPageConfigForState:(unsigned long long)arg0;
- (id)searchListVM;
- (id)sectionComponents;
- (id)emptyVM;
- (void)setSearchBarVM:(id)arg0;
- (void)setSearchListVM:(id)arg0;
- (void)setEmptyVM:(id)arg0;
- (id)dataContext;
- (void)setDataContext:(id)arg0;
- (id)friendsListVM;
- (id)errorVM;
- (void)solutionButtonDidTap;
- (void)setFriendsListVM:(id)arg0;
- (void)setErrorVM:(id)arg0;
- (void).cxx_destruct;

@end
