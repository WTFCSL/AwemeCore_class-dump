//
//     Generated by private class-dump
//

@interface BDMannorAdTaskManager : NSObject

+ (void)runTaskWith:(id)arg0 logExtra:(id)arg1;
+ (void)runOpenWeChatTaskWith:(id)arg0 logExtra:(id)arg1 adExtraData:(id)arg2 refer:(id)arg3 tag:(id)arg4;
+ (void)runOpenURLTaskWith:(id)arg0 logExtra:(id)arg1 adExtraData:(id)arg2 refer:(id)arg3 tag:(id)arg4;
+ (void)runTaskWith:(id)arg0 logExtra:(id)arg1 adExtraData:(id)arg2 refer:(id)arg3 tag:(id)arg4 enterLive:(id /* block */)arg5;
+ (void)runOpenURLTaskWith:(id)arg0 logExtra:(id)arg1;
+ (void)runWebURLTaskWith:(id)arg0 logExtra:(id)arg1;
+ (void)processWithAppID:(id)arg0 preload:(BOOL)arg1 creativeID:(id)arg2 logExtra:(id)arg3 downloadURL:(id)arg4 appStoreEnabled:(BOOL)arg5 SKANParams:(id)arg6 downloadScene:(unsigned long long)arg7 webURL:(id)arg8 openURL:(id)arg9 complianceData:(id)arg10;
+ (void)runTaskWith:(id)arg0 logExtra:(id)arg1 adExtraData:(id)arg2 refer:(id)arg3 tag:(id)arg4;
+ (void)runAppStoreTaskWith:(id)arg0 logExtra:(id)arg1;
+ (void)runWebURLTaskWith:(id)arg0 logExtra:(id)arg1 extra:(id)arg2 adExtraData:(id)arg3 refer:(id)arg4 tag:(id)arg5;

@end