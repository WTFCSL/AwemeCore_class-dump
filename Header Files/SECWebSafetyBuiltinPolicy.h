//
//     Generated by private class-dump
//

@class NSString;

@interface SECWebSafetyBuiltinPolicy : NSObject <SECWebSafetyPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enableSeclinkBizTokens;
- (id)seclinkSceneDict;
- (id)executePagePolicy:(id)arg0;
- (BOOL)filterOutPageURL:(id)arg0 inWebView:(id)arg1;

@end