//
//     Generated by private class-dump
//

@interface BDXForestKitManager : NSObject

+ (id)defaultForestKit;
+ (void)closeSessionWithSchemaParams:(id)arg0;
+ (long long)preloadTypeWithSchemaParam:(id)arg0 preloadMainDocDefault:(BOOL)arg1;
+ (id)requestParamsForTemplateWithResourceModel:(id)arg0;
+ (id)requestParamsForSubResourceWithResourceModel:(id)arg0;
+ (BOOL)isForestEnabled:(id)arg0;
+ (BOOL)isForestEnabledWithSchemaParam:(id)arg0;
+ (BOOL)isUrlString:(id)arg0 inList:(id)arg1;
+ (id)defaultConfig;

@end
