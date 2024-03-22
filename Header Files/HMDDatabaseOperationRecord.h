//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface HMDDatabaseOperationRecord : NSObject {
    NSString *_tableName;
    NSArray *_andConditions;
    NSArray *_orConditions;
    long long _limitCount;
}

@property (copy, nonatomic) NSString *tableName;
@property (retain, nonatomic) NSArray *andConditions;
@property (retain, nonatomic) NSArray *orConditions;
@property (nonatomic) long long limitCount;

- (id)andConditions;
- (id)orConditions;
- (void)setAndConditions:(id)arg0;
- (void)setOrConditions:(id)arg0;
- (long long)limitCount;
- (id)tableName;
- (void).cxx_destruct;
- (void)setLimitCount:(long long)arg0;
- (void)setTableName:(id)arg0;

@end