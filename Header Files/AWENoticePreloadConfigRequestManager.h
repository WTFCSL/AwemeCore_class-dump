//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWENoticePreloadConfigRequestManager : NSObject <AWESettingsComboRequestProtocol, AWEUserMessage> {
    NSDictionary *_combineRequestResult;
}

@property (copy, nonatomic) NSDictionary *combineRequestResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (void)doOriginalActions;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)arg0;
+ (id)settingsRequestParamsDictionary;
+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)setCombineRequestResult:(id)arg0;
- (id)combineRequestResult;
- (void)updatePreloadInfoWithDictionary:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchRequest;
- (void)dealloc;

@end