//
//     Generated by private class-dump
//

@class NSString;

@interface AWELocalUserCenterTableConfig : NSObject {
    BOOL _deleteBlockedUser;
    BOOL _deleteUnfollowedUser;
    NSString *_tableName;
    Class _modelClass;
}

@property (copy, nonatomic) NSString *tableName;
@property (readonly, nonatomic) long long userType;
@property (nonatomic) BOOL deleteBlockedUser;
@property (nonatomic) BOOL deleteUnfollowedUser;
@property (retain, nonatomic) Class modelClass;

- (void)setDeleteBlockedUser:(BOOL)arg0;
- (void)setDeleteUnfollowedUser:(BOOL)arg0;
- (BOOL)deleteBlockedUser;
- (BOOL)deleteUnfollowedUser;
- (long long)userType;
- (id)tableName;
- (void).cxx_destruct;
- (Class)modelClass;
- (void)setTableName:(id)arg0;
- (void)setModelClass:(Class)arg0;

@end
