//
//     Generated by private class-dump
//

@protocol AWEVideosInsertManagerProtocol <NSObject>

+ (BOOL)shouldMarkFromPushForAwemeID:(id)arg0;
+ (void)clearLeadingVideosInsertInfoForFeed:(long long)arg0;
+ (id)leadingVideosInsertQueryParamsForFeed:(long long)arg0;
+ (void)addLeadingVideosInsertAwemeIDs:(id)arg0 toFeed:(long long)arg1;
+ (void)addLeadingVideosInsertAwemeIDs:(id)arg0 extraInfo:(id)arg1 toFeed:(long long)arg2;
+ (void)addCustomVideosInsertAwemeIDs:(id)arg0 extraInfo:(id)arg1 toFeed:(long long)arg2;
+ (id)leadingVideosInfoForFeed:(long long)arg0;
+ (id)leadingVideosInsertAwemeIDsForFeed:(long long)arg0;
+ (void)addCustomVideosInsertAwemeIDs:(id)arg0 toFeed:(long long)arg1;
+ (void)addCustomVideosInsertImp:(id)arg0 toFeed:(long long)arg1;
+ (id)videosInsertResult;
+ (BOOL)hasLeadingVideosInsertForFeed:(long long)arg0;
+ (void)addPushVideoInFilterListWithItemIds:(id)arg0;
+ (BOOL)insertVideosWhenColdLaunchWithLaunchURL:(id)arg0;
+ (void)markFromPushWithOpenURL:(id)arg0;
+ (BOOL)insertVideosWhenColdLaunchWithOpenURL:(id)arg0 fromPush:(BOOL)arg1;
+ (void)filterPushClickedVideosInResponseModel:(id)arg0;
+ (void)tryDisableFromPushMarksDueToAwemeID:(id)arg0;
+ (void)enableFromPushMarks;

@end
