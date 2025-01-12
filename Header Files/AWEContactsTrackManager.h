//
//     Generated by private class-dump
//

@class NSString;

@interface AWEContactsTrackManager : NSObject <AWEContactsTrackManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackContactRequestResponse:(id)arg0;
+ (void)trackEnterPhoneContactsList:(id)arg0 enterMethod:(id)arg1;
+ (void)trackContactsFriendsShow:(id)arg0;
+ (void)trackContactNotifyShow:(id)arg0 triggerScene:(id)arg1;
+ (void)trackContactNotifyAuth:(id)arg0 triggerScene:(id)arg1;
+ (void)trackPhonePermission:(id)arg0;
+ (void)trackContactRetryNotifyShow:(id)arg0 triggerScene:(id)arg1;
+ (void)trackContactRetryNotifyAuth:(id)arg0 triggerScene:(id)arg1;
+ (void)trackDouyinContactNotifyAuth:(id)arg0 triggerScene:(id)arg1;
+ (void)trackDouyinContactNotifyReject:(id)arg0 triggerScene:(id)arg1;
+ (void)trackDouyinContactNotifyClose:(id)arg0 triggerScene:(id)arg1;
+ (void)trackAddressListCardWithEnterFrom:(id)arg0 actionType:(id)arg1 triggerScene:(id)arg2;
+ (void)trackContactNotifyWithEvent:(id)arg0 enterFrom:(id)arg1 triggerScene:(id)arg2;
+ (void)trackAddressListCardWithActionType:(id)arg0 enterFrom:(id)arg1;
+ (void)trackAddContactFriendsWithEnterFrom:(id)arg0 enterMethod:(id)arg1;

@end
