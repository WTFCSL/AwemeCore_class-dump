//
//     Generated by private class-dump
//

@class NSString;

@interface AWEEULAManager : NSObject <AWEEULAManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)termsOfUseURL;
+ (id)privacyPolicySecondPageURL;
+ (id)cookiesPolicyURL;
+ (void)showEULAAlertControllerIfNeeded;
+ (id)privacyPolicyURL;

@end
