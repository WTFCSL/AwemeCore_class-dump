//
//     Generated by private class-dump
//

@class NSNumber, NSMutableArray;

@interface AWEAddressBookListManager : NSObject {
    BOOL _hasMore;
    NSMutableArray *_removedUsers;
    NSMutableArray *_addressBookUserList;
    NSMutableArray *_addressBookUnfollowUsers;
    NSMutableArray *_addressBookNotUnfollowUsers;
    NSNumber *_type;
    NSNumber *_cursor;
    NSNumber *_registerCount;
}

@property (retain, nonatomic) NSMutableArray *addressBookUserList;
@property (retain, nonatomic) NSMutableArray *addressBookUnfollowUsers;
@property (retain, nonatomic) NSMutableArray *addressBookNotUnfollowUsers;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *registerCount;
@property (retain, nonatomic) NSMutableArray *removedUsers;

- (void)loadMore:(id /* block */)arg0;
- (BOOL)canLoadMore;
- (void)setAddressBookUserList:(id)arg0;
- (id)addressBookUserList;
- (id)addressBookUnfollowUsers;
- (id)addressBookNotUnfollowUsers;
- (id)registerCount;
- (void)setRegisterCount:(id)arg0;
- (id)filterRemovedUsers:(id)arg0;
- (void)loadAddressListPartUsers;
- (void)refresh:(id /* block */)arg0 needDegraded:(BOOL)arg1;
- (void)changeUserList:(id)arg0;
- (id)unfollowUserList;
- (id)notUnfollowUserList;
- (void)removeUser:(long long)arg0 isUnfollow:(BOOL)arg1;
- (void)insertUser:(id)arg0 index:(long long)arg1 isUnfollow:(BOOL)arg2;
- (void)addressBookDislikeUserItem:(id)arg0 enterFrom:(id)arg1 completion:(id /* block */)arg2;
- (void)setAddressBookUnfollowUsers:(id)arg0;
- (void)setAddressBookNotUnfollowUsers:(id)arg0;
- (id)cursor;
- (id)init;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;
- (id)userList;
- (void)refresh:(id /* block */)arg0;
- (id)removedUsers;
- (void)setRemovedUsers:(id)arg0;

@end
