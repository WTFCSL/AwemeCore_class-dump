//
//     Generated by private class-dump
//

@class NSString;

@interface IESECUILoadingServiceImpl : NSObject <IESECUILoadingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showLoadingOnView:(id)arg0;
+ (id)showWindowLoading;
+ (void)dismissWindowLoading;
+ (id)showWindowLoadingWithTitle:(id)arg0;
+ (id)showLoadingAndDisableUserInteractionOnView:(id)arg0;
+ (id)createLoadingView:(id)arg0;

@end