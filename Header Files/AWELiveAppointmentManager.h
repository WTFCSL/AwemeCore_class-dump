//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveAppointmentManager : HTSService <AWELiveAppointmentManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)queryLiveAppointment:(id)arg0 completion:(id /* block */)arg1;
+ (void)queryLiveGroupAppointment:(id)arg0 completion:(id /* block */)arg1;
+ (void)makeLiveAppointment:(id)arg0 groupId:(id)arg1 completion:(id /* block */)arg2;
+ (void)cancelLiveAppointment:(id)arg0 groupId:(id)arg1 completion:(id /* block */)arg2;
+ (void)liveAppointment:(id)arg0 groupId:(id)arg1 URLPath:(id)arg2 isCancel:(BOOL)arg3 completion:(id /* block */)arg4;

@end
