//
//     Generated by private class-dump
//

@interface AWENoticeFollowRequestManager : NSObject

+ (void)followRequestDidRefuse:(id)arg0 user:(id)arg1 extraTrackParams:(id)arg2 completion:(id /* block */)arg3;
+ (void)followRequestDidApprove:(id)arg0 extraTrackParams:(id)arg1 approveCompletion:(id /* block */)arg2 followCompletion:(id /* block */)arg3;
+ (void)followRequestDidFollowBack:(id)arg0 extraTrackParams:(id)arg1 completion:(id /* block */)arg2;
+ (void)trackWithParams:(id)arg0 event:(id)arg1;
+ (id)relationContext:(id)arg0 extraTrackParams:(id)arg1;

@end