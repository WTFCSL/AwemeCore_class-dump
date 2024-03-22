//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECBaseJSModule : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodLookup;
+ (id)name;

- (void)sendLogV3:(id)arg0 params:(id)arg1;
- (void)logWithMessage:(id)arg0 level:(int)arg1;
- (void)reportALog:(id)arg0 message:(id)arg1 tag:(id)arg2;
- (id)getUserInfo;
- (id)getAppInfo;

@end
