//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommentManager : NSObject <AWECommentManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramStringFromStringArray:(id)arg0;
+ (void)publishCommentWithoutTrackWithModel:(id)arg0 detailCompletion:(id /* block */)arg1;
+ (void)diggCommentWithCommentID:(id)arg0 awemeID:(id)arg1 diggType:(long long)arg2 attitudeType:(id)arg3 attitudeWithDigg:(BOOL)arg4 replyStyle:(long long)arg5 referString:(id)arg6 enterFrom:(id)arg7 previousPage:(id)arg8 extraParams:(id)arg9 isXiguaVideo:(BOOL)arg10 commentLevel:(long long)arg11 adLinkType:(long long)arg12 completion:(id /* block */)arg13;
+ (void)requestCommentManagerListWithAwemeID:(id)arg0 cursor:(id)arg1 count:(id)arg2 commentSelectOptions:(id)arg3 keyword:(id)arg4 opinionID:(id)arg5 referString:(id)arg6 sortType:(unsigned long long)arg7 completion:(id /* block */)arg8;
+ (void)multiCommentWithRequestModel:(id)arg0 responseDetailCompletion:(id /* block */)arg1;
+ (void)deleteMultiCommentItemWithID:(id)arg0 needBlock:(BOOL)arg1 referString:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestSubCommentListWithItemID:(id)arg0 commentID:(id)arg1 offset:(id)arg2 count:(id)arg3 topIDs:(id)arg4 insertIDs:(id)arg5 referString:(id)arg6 params:(id)arg7 completion:(id /* block */)arg8;
+ (id)didInitFetchCommentListWithDic:(id)arg0 params:(id)arg1 preloadImageCompletion:(id /* block */)arg2;
+ (void)didInitFetchCommentListWithModel:(id)arg0 params:(id)arg1 preloadImageCompletion:(id /* block */)arg2;
+ (void)accelerateReviewWithAwemeID:(id)arg0 completion:(id /* block */)arg1;
+ (void)deleteCommentWithCommentID:(id)arg0 serviceID:(id)arg1 commentScene:(id)arg2 referString:(id)arg3 extraParams:(id)arg4 completion:(id /* block */)arg5;
+ (void)requestCommentPinWithCommentID:(id)arg0 awemeID:(id)arg1 referString:(id)arg2 isPin:(BOOL)arg3 completion:(id /* block */)arg4;
+ (id)postWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
+ (id)requestWithURLString:(id)arg0 method:(id)arg1 params:(id)arg2 modelClass:(Class)arg3 completion:(id /* block */)arg4;
+ (void)trackNetworkErrorIfNeeded:(id)arg0 requestTime:(double)arg1 itemID:(id)arg2 count:(id)arg3 offset:(id)arg4 error:(id)arg5 model:(id)arg6;
+ (id)getCommentExpectedSizeInfo;
+ (void)requestCommentListWithID:(id)arg0 creativeID:(id)arg1 offset:(id)arg2 count:(id)arg3 insertIDs:(id)arg4 params:(id)arg5 referString:(id)arg6 completion:(id /* block */)arg7;
+ (void)requestCommentSearchWordsWithCommentID:(id)arg0 CommentStr:(id)arg1 groupID:(id)arg2 timeout:(double)arg3 extras:(id)arg4 completion:(id /* block */)arg5;
+ (void)deleteMultiFriendsCommentsWithCompletion:(id /* block */)arg0;
+ (void)publishCommentWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (id)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
+ (void)requestCommentListWithID:(id)arg0 offset:(id)arg1 count:(id)arg2 referString:(id)arg3 completion:(id /* block */)arg4;
+ (void)actionCommentWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (unsigned long long)sliceCount;
+ (void)publishCommentWithModel:(id)arg0 detailCompletion:(id /* block */)arg1;
+ (void)requestCommentListWithID:(id)arg0 creativeID:(id)arg1 offset:(id)arg2 count:(id)arg3 insertIDs:(id)arg4 params:(id)arg5 referString:(id)arg6 firstPageOpt:(BOOL)arg7 authToken:(id)arg8 preloadImageCompletion:(id /* block */)arg9 completion:(id /* block */)arg10 sliceDoneCompletion:(id /* block */)arg11;
+ (id)configVideoData:(id)arg0 resultInfo:(id)arg1;
+ (void)commentAwemeItemWithModel:(id)arg0 responseDetailCompletion:(id /* block */)arg1;
+ (void)sendLynxCommentResultBroadcast:(BOOL)arg0;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (void)trackPostCommentFinishedIfNeed:(id)arg0;
+ (void)_processCommentListWithID:(id)arg0 offset:(id)arg1 count:(id)arg2 referString:(id)arg3 model:(id)arg4 error:(id)arg5 requestTime:(double)arg6 preloadImageCompletion:(id /* block */)arg7 completion:(id /* block */)arg8 sliceDoneCompletion:(id /* block */)arg9;
+ (void)sliceModelWithJsonDictionary:(id)arg0 error:(id)arg1 completion:(id /* block */)arg2 sliceDoneCompletion:(id /* block */)arg3;
+ (id)lowEndRichMediaDegradationWithDic:(id)arg0;
+ (void)lowEndRichMediaDegradationWithModel:(id)arg0;
+ (void)recordCommentListRequestMetricsWithURL:(id)arg0 awemeId:(id)arg1 metrics:(id)arg2;
+ (void)trackCommentListAPIWithURL:(id)arg0 params:(id)arg1 responseParams:(id)arg2 duration:(double)arg3;
+ (void)commentAwemeItemWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (void)deleteCommentWithCommentID:(id)arg0 referString:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestCommentListFirstPageWithID:(id)arg0 creativeID:(id)arg1 offset:(id)arg2 count:(id)arg3 insertIDs:(id)arg4 params:(id)arg5 referString:(id)arg6 authToken:(id)arg7 completion:(id /* block */)arg8 sliceDoneCompletion:(id /* block */)arg9;
+ (void)checkLuckyDrawPermissionWithAwemeID:(id)arg0 completion:(id /* block */)arg1;

- (id)aAWELiteUGSocialModuleAdapter;

@end