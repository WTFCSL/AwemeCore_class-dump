//
//     Generated by private class-dump
//

@class NSString;

@interface AFDShareRecommendSnackBarUtils : NSObject <AFDShareRecommendSnackBarUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShow:(id)arg0;
+ (BOOL)showSnackBarWithTriggerScene:(id)arg0;
+ (void)showSnackBarImmediatelyWithTriggerScene:(id)arg0;
+ (void)updateSnackBarShownCount:(id)arg0;
+ (long long)snackBarShownCount:(id)arg0;

@end