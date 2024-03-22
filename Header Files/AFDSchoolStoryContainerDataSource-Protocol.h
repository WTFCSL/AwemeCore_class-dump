//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSDictionary;

@protocol AFDSchoolStoryContainerDataSource <NSObject>

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (readonly, nonatomic) BOOL feedListHasMoreData;
@property (readonly, nonatomic) unsigned long long feedListCursor;
@property (readonly, copy, nonatomic) NSString *schoolID;
@property (readonly, nonatomic) NSDictionary *params;

- (id)schoolID;
- (void)updateSchoolID:(id)arg0;
- (void)fetchSchoolStoryBasicInfoWithCompletion:(id /* block */)arg0;
- (void)fetchSchoolStoryFeedListWithType:(unsigned long long)arg0 fetchType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (BOOL)feedListHasMoreData;
- (unsigned long long)feedListCursor;
- (id)listDataController;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (id)params;

@end