//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFollowListSearchBarViewModel : AWEBaseListSectionViewModel {
    BOOL _searching;
    BOOL _isKeyBoardShown;
    NSString *_searchText;
}

@property (nonatomic) BOOL isKeyBoardShown;
@property (nonatomic) BOOL searching;
@property (copy, nonatomic) NSString *searchText;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (BOOL)isKeyBoardShown;
- (void)setIsKeyBoardShown:(BOOL)arg0;
- (void)followingListKeyboardDidShowNotification:(id)arg0;
- (void)followingListKeyboardDidHideNotification:(id)arg0;
- (id)searchText;
- (void)setSearchText:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserver;
- (BOOL)searching;
- (void)setSearching:(BOOL)arg0;

@end
