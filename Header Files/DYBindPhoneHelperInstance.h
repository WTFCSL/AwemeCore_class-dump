//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface DYBindPhoneHelperInstance : NSObject <AWEUserMessage> {
    NSDictionary *_trackerInfo;
    id /* block */ _logoutHandler;
    NSString *_nextURL;
}

@property (copy, nonatomic) id /* block */ logoutHandler;
@property (copy, nonatomic) NSString *nextURL;
@property (copy, nonatomic) NSDictionary *trackerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserCommonAdapterClass;
+ (id)configNextURL:(id)arg0 enterFrom:(id)arg1;

- (void)didFinishLogout;
- (void)trackWithEventName:(id)arg0 params:(id)arg1;
- (void)setTrackerInfo:(id)arg0;
- (id)nextURL;
- (void)setNextURL:(id)arg0;
- (id)aAWEUserCommonAdapter;
- (BOOL)handleBindProcessWithError:(id)arg0 nextURL:(id)arg1 logoutHandler:(id /* block */)arg2 platform:(unsigned long long)arg3 carrierString:(id)arg4;
- (BOOL)handleBindProcessWithError:(id)arg0 logoutHandler:(id /* block */)arg1 platformTrackerString:(id)arg2 carrierString:(id)arg3;
- (void)setLogoutHandler:(id /* block */)arg0;
- (id /* block */)logoutHandler;
- (BOOL)handleBindProcessWithError:(id)arg0 logoutHandler:(id /* block */)arg1 platformTrackerString:(id)arg2;
- (id)init;
- (id)trackerInfo;
- (void).cxx_destruct;
- (void)dealloc;

@end
