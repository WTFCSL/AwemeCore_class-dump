//
//     Generated by private class-dump
//

@class AWEPluginOpenCardProfileView, NSString;

@interface AWEPluginOpenCardProfileImpl : NSObject <BDPOpenCardProfileDelegate> {
    AWEPluginOpenCardProfileView *_view;
}

@property (retain, nonatomic) AWEPluginOpenCardProfileView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)bdp_openCardProfileWithInfo:(id)arg0 withViewController:(id)arg1 onStateChange:(id /* block */)arg2;
- (void).cxx_destruct;
- (void)setView:(id)arg0;
- (BOOL)isOpen;
- (id)view;

@end
