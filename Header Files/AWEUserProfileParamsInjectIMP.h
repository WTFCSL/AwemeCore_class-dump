//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserProfileParamsInjectIMP : NSObject <AWEUserProfileParamsInjectProtocol, AWESettingsAPIRequestModifier>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)extraParamsForURL:(id)arg0;
- (id)userProfileParamsWithContext:(id)arg0;

@end
