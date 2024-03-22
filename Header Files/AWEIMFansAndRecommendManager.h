//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSString;

@interface AWEIMFansAndRecommendManager : NSObject <AWEUserMessage> {
    NSArray *_userIDs;
    NSMutableDictionary *_operationDic;
}

@property (retain, nonatomic) NSArray *userIDs;
@property (retain, nonatomic) NSMutableDictionary *operationDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didFinishLogin;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishUnBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishHideMyPostFromUser:(id)arg0 status:(long long)arg1;
- (void)didFinishApproveUserFollowRequest:(id)arg0 error:(id)arg1;
- (void)didFinishRejectUserFollowRequestWithNoticeID:(id)arg0 user:(id)arg1;
- (void)didFinishShowMyPostToUser:(id)arg0 status:(long long)arg1;
- (void)didFinishHidePostFromHer:(id)arg0 status:(long long)arg1;
- (void)didFinishUnHidePostFromHer:(id)arg0 status:(long long)arg1;
- (void)didFinishRemoveFansWithUser:(id)arg0;
- (void)setUserIDs:(id)arg0;
- (id)operationDic;
- (id)cacheModelForUID:(id)arg0;
- (void)updateFromUserIDs:(id)arg0;
- (id)getCacheModelOperationDic;
- (void)setOperationDic:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)userIDs;

@end
