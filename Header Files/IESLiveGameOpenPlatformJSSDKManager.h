//
//     Generated by private class-dump
//

@interface IESLiveGameOpenPlatformJSSDKManager : NSObject

+ (id)jssdkLynxVersion;
+ (id)_getJSSDKFileNameSubStringWithContainerType:(unsigned long long)arg0;
+ (BOOL)_checkVersionRegex:(id)arg0;
+ (id)_getLastedKeyWithContainerType:(unsigned long long)arg0;
+ (void)_updateJSSDkWithVersion:(id)arg0 containerType:(unsigned long long)arg1;
+ (id)_getChannelWithContainerType:(unsigned long long)arg0;
+ (id)_getAccessKey;
+ (id)_processVersionStringToNumber:(id)arg0;
+ (void)updateJSSDKResourceWithContainerType:(unsigned long long)arg0;
+ (id)getJSSDKPathWithContainerType:(unsigned long long)arg0;

@end