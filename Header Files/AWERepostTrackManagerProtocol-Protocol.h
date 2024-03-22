//
//     Generated by private class-dump
//

@protocol AWERepostTrackManagerProtocol <NSObject>

+ (id)generateParamsWithAweme:(id)arg0 fromAweme:(id)arg1 pageType:(id)arg2 enterFrom:(id)arg3 enterMethod:(id)arg4;
+ (void)trackReportCommentWithAweme:(id)arg0 fromAweme:(id)arg1 commentId:(id)arg2 commentModel:(id)arg3 firstCommentModel:(id)arg4 pageType:(id)arg5 enterFrom:(id)arg6 enterMethod:(id)arg7 index:(long long)arg8 extraLogDict:(id)arg9;
+ (void)trackPostCommentWithAweme:(id)arg0 fromAweme:(id)arg1 pageType:(id)arg2 enterFrom:(id)arg3 replyCommentID:(id)arg4 replyUid:(id)arg5 replyFollowStatus:(long long)arg6 extraLog:(id)arg7;
+ (void)trackRepostRequestWithAweme:(id)arg0 fromAweme:(id)arg1 pageType:(id)arg2 enterFrom:(id)arg3 enterMethod:(id)arg4 isSuccess:(BOOL)arg5 extraLogDict:(id)arg6 isEmptyRepost:(BOOL)arg7;
+ (void)trackRepostClickWithAweme:(id)arg0 fromAweme:(id)arg1 pageType:(id)arg2 enterFrom:(id)arg3 enterMethod:(id)arg4 extraLogDict:(id)arg5;
+ (void)trackNewForwardWithAweme:(id)arg0 params:(id)arg1;
+ (id)generateAttributesWithAweme:(id)arg0 fromAweme:(id)arg1 pageType:(id)arg2;
+ (void)trackRepostReuqestWithAweme:(id)arg0 fromAweme:(id)arg1 pageType:(id)arg2 enterFrom:(id)arg3 enterMethod:(id)arg4 isSuccess:(BOOL)arg5 isEmptyRepost:(BOOL)arg6;
+ (void)trackReportCommentWithAweme:(id)arg0 fromAweme:(id)arg1 commentId:(id)arg2 commentModel:(id)arg3 firstCommentModel:(id)arg4 pageType:(id)arg5 enterFrom:(id)arg6 enterMethod:(id)arg7 index:(long long)arg8;
+ (void)trackInputWithAweme:(id)arg0 fromAweme:(id)arg1 pageType:(id)arg2 enterFrom:(id)arg3 stayTime:(long long)arg4 isEnter:(BOOL)arg5;

@end
