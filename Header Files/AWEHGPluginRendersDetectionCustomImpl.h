//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHGPluginRendersDetectionCustomImpl : NSObject <HGRendersDetectionPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)excuteRendersDetectionWithImage:(id)arg0 completion:(id /* block */)arg1;

@end