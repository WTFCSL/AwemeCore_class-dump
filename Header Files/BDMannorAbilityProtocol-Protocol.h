//
//     Generated by private class-dump
//

@protocol BDMannorAbilityProtocol <NSObject>

+ (void)sendTrackWithTrackConfig:(id)arg0 areaKey:(id)arg1 eventName:(id)arg2 dynamicParams:(id)arg3;
+ (void)sendTrackV3WithTrackConfig:(id)arg0 areaKey:(id)arg1 eventName:(id)arg2 dynamicParams:(id)arg3;
+ (id)parseRulesFromRaw:(id)arg0;
+ (id)detailViewControllerWith:(id)arg0 logExtra:(id)arg1 adExtraData:(id)arg2 refer:(id)arg3 tag:(id)arg4;
+ (void)openAppStoreWith:(id)arg0 logExtra:(id)arg1;
+ (BOOL)openOtherAppWith:(id)arg0 logExtra:(id)arg1;
+ (void)requestFeedbackReportInfo;
+ (void)openWeChatWith:(id)arg0 logExtra:(id)arg1 wechatMiniappInfo:(id)arg2 adExtraData:(id)arg3 refer:(id)arg4 tag:(id)arg5 callback:(id /* block */)arg6;
+ (BOOL)openOtherAppWith:(id)arg0 adExtraData:(id)arg1 logExtra:(id)arg2 refer:(id)arg3 tag:(id)arg4 callback:(id /* block */)arg5;
+ (void)showFeedbackViewWithModel:(id)arg0 logExtra:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)detailViewControllerWith:(id)arg0 logExtra:(id)arg1;
+ (void)requestDislikeWithParams:(id)arg0 completionHandler:(id /* block */)arg1;
+ (void)openWeChatWith:(id)arg0 logExtra:(id)arg1;

@end
