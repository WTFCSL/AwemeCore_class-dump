//
//     Generated by private class-dump
//

@class AFDCloseFriendsSettingsPanelListSectionDataController, NSArray, NSString, NSObject;
@protocol AWEContactLocalSearchManagerProtocol;

@interface AWEFindCloseFriendsListSectionViewModel : AWEBaseListSectionViewModel <AWEFindCloseFriendsListCellViewDelegate> {
    AFDCloseFriendsSettingsPanelListSectionDataController *_dataController;
    NSObject<AWEContactLocalSearchManagerProtocol> *_searchFriendsManager;
    NSArray *_friendsModelArray;
    NSArray *_mutualCloseFriendsModelArray;
}

@property (retain, nonatomic) AFDCloseFriendsSettingsPanelListSectionDataController *dataController;
@property (retain, nonatomic) NSArray *friendsModelArray;
@property (retain, nonatomic) NSArray *mutualCloseFriendsModelArray;
@property (retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchFriendsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)fetchSectionData;
- (void)setDataController:(id)arg0;
- (void)loadMoreSectionData;
- (void)didTapCloseFriendsButtonOnCell:(id)arg0;
- (void)didTapUnCloseFriendsButtonOnCell:(id)arg0;
- (void)setSearchFriendsManager:(id)arg0;
- (void)setFriendsModelArray:(id)arg0;
- (id)searchFriendsManager;
- (id)friendsModelArray;
- (void)track_closeFriendsWithStatus:(long long)arg0 action:(id)arg1;
- (id)sortListByFindCloseFriendsStrategy:(id)arg0;
- (void)setMutualCloseFriendsModelArray:(id)arg0;
- (id)mutualCloseFriendsModelArray;
- (void).cxx_destruct;
- (id)dataController;

@end