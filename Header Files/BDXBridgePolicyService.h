//
//     Generated by private class-dump
//

@interface BDXBridgePolicyService : NSObject

+ (void)openUrl:(id)arg0 token:(id)arg1 context:(id)arg2;
+ (id)calendarsForEntityStore:(id)arg0 entityType:(unsigned long long)arg1 token:(id)arg2 context:(id)arg3;
+ (long long)authorizationStatusForEntityType:(unsigned long long)arg0 token:(id)arg1 context:(id)arg2;
+ (void)requestAccessForMediaType:(id)arg0 completionHandler:(id /* block */)arg1 token:(id)arg2 context:(id)arg3;
+ (void)setString:(id)arg0 token:(id)arg1 context:(id)arg2;
+ (void)requestAuthorizationForAlbumType:(id /* block */)arg0 token:(id)arg1 context:(id)arg2;
+ (void)requestAccessForUserNotificationsWithOptions:(unsigned long long)arg0 handler:(id /* block */)arg1 token:(id)arg2 context:(id)arg3;
+ (id)getUIImagePickerControllerWithToken:(id)arg0 context:(id)arg1;
+ (void)getStringWithToken:(id)arg0 context:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestAuthorizationForAlbumTypeForAccessLevel:(unsigned long long)arg0 handler:(id /* block */)arg1 token:(id)arg2 context:(id)arg3;
+ (void)reuqestAccessForCalendarType:(unsigned long long)arg0 eventStore:(id)arg1 completion:(id /* block */)arg2 token:(id)arg3 context:(id)arg4;

@end
