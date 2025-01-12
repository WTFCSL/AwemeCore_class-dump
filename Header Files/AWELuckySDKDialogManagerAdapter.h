//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWELuckySDKDialogManagerAdapter : NSObject <BDUGHostDialogManagerProtocol, BDUGHostMessageManagerProtocol>

@property (class, readonly, nonatomic) NSMutableDictionary *popupsConverted;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraServiceProtocols;
+ (BOOL)showDialog:(id)arg0 withPriority:(long long)arg1 showDialog:(id /* block */)arg2 forceHide:(id /* block */)arg3 extra:(id)arg4;
+ (void)finishDialog:(id)arg0;
+ (void)finishMessage:(id)arg0;
+ (BOOL)showMessage:(id)arg0 withPriority:(long long)arg1 showMessage:(id /* block */)arg2 forceHide:(id /* block */)arg3 extra:(id)arg4;
+ (BOOL)isFeedActivityShowing;
+ (id)popupsConverted;
+ (id)sharedInstance;
+ (id)serviceProtocol;

@end
