//
//     Generated by private class-dump
//

@interface AWEDeepLinkRegistrationURLUtil : NSObject

+ (id)getSecLinkQueryParamsForURL:(id)arg0 referString:(id)arg1;
+ (id)getSafeWebUrlFrom:(id)arg0 referString:(id)arg1;
+ (id)getSecLinkQueryParamsForLiveFromURL:(id)arg0 referString:(id)arg1;
+ (id)localizeSchemeForURL:(id)arg0;
+ (BOOL)checkAppScheme:(id)arg0;
+ (BOOL)checkHTTP:(id)arg0;
+ (BOOL)checkWithSchemaConfig:(id)arg0 sourceType:(unsigned long long)arg1;
+ (Class)aAWEDeepLinkRegistrationURLUtilCommonAdapterClass;
+ (id)getSafeWebUrlFrom:(id)arg0 sceneName:(id)arg1;
+ (BOOL)validateAppSchema:(id)arg0;
+ (BOOL)validateAppSchema:(id)arg0 sourceType:(unsigned long long)arg1;

- (id)aAWEDeepLinkRegistrationURLUtilCommonAdapter;

@end
