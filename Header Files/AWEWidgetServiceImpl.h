//
//     Generated by private class-dump
//

@interface AWEWidgetServiceImpl : HTSService <HTSService, AWEWidgetServiceProtocol>

+ (id)sharedInstance;

- (void)reloadTimelineForKind:(id)arg0;
- (void)checkWidgetInstalledWithKind:(id)arg0 completion:(id /* block */)arg1;
- (void)widgetInfosWithKind:(id)arg0 completion:(id /* block */)arg1;
- (void)checkWidgetsInstalledCompletion:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)reloadTimeline;

@end
