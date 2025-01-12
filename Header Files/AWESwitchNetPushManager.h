//
//     Generated by private class-dump
//

@class NSString, NSHashTable;

@interface AWESwitchNetPushManager : NSObject <AWESwitchNetPushManagerProtocol> {
    NSHashTable *_plugins;
}

@property (retain, nonatomic) NSHashTable *plugins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowSwitchNetPushView;
+ (void)showSwitchNetPushView;
+ (BOOL)shouldShowScene;
+ (id)sharedInstance;

- (void)registerCustomPlugin:(id)arg0;
- (void)unregisterCustomPlugin:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setPlugins:(id)arg0;
- (id)plugins;

@end
