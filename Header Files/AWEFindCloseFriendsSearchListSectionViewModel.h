//
//     Generated by private class-dump
//

@class NSArray, NSString, NSObject;
@protocol AWEContactLocalSearchManagerProtocol;

@interface AWEFindCloseFriendsSearchListSectionViewModel : AWEBaseListSectionViewModel <AWEFindCloseFriendsListCellViewDelegate> {
    BOOL _searching;
    NSString *_searchText;
    NSObject<AWEContactLocalSearchManagerProtocol> *_searchFriendsManager;
    NSArray *_friendsModelArray;
}

@property (retain, nonatomic) NSArray *friendsModelArray;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL searching;
@property (retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchFriendsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)didTapCloseFriendsButtonOnCell:(id)arg0;
- (void)didTapUnCloseFriendsButtonOnCell:(id)arg0;
- (void)setSearchFriendsManager:(id)arg0;
- (void)setFriendsModelArray:(id)arg0;
- (id)searchFriendsManager;
- (id)friendsModelArray;
- (void)track_closeFriendsWithStatus:(long long)arg0 action:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg0;
- (void).cxx_destruct;
- (BOOL)searching;
- (void)setSearching:(BOOL)arg0;
- (void)searchWithText:(id)arg0;

@end
