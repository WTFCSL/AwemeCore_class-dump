//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@protocol AWEContactLocalSearchManagerProtocol <NSObject>

@property (readonly, copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSMutableArray *searchResultUsers;
@property (copy, nonatomic) id /* block */ searchCompletion;
@property (copy, nonatomic) id /* block */ fetchFriendIDsSetBlock;

- (id)searchResultUsers;
- (void)searchUserWithKeyword:(id)arg0;
- (void)updateFamiliarFriends:(id)arg0;
- (void)setFetchFriendIDsSetBlock:(id /* block */)arg0;
- (void)setSearchResultUsers:(id)arg0;
- (id)handleRangeTypePriorityWithUsers:(id)arg0 friendIDsSet:(id)arg1 keyword:(id)arg2 operation:(id)arg3;
- (id /* block */)fetchFriendIDsSetBlock;
- (void)updateFans:(id)arg0;
- (void)updateFamiliarUsers:(id)arg0;
- (id)keyword;
- (id /* block */)searchCompletion;
- (void)setSearchCompletion:(id /* block */)arg0;

@end