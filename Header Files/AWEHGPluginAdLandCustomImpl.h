//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHGPluginAdLandCustomImpl : NSObject <HGAdLandPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)hg_sendAdLogV1WithEvent:(id)arg0 label:(id)arg1 groundId:(id)arg2 logExtra:(id)arg3 creativeId:(id)arg4 adExtraData:(id)arg5 extra:(id)arg6;
- (void)hg_trackUrls:(id)arg0 params:(id)arg1;
- (void)hg_customOpenAdLandPageLinksWithScheme:(id)arg0 data:(id)arg1;

@end