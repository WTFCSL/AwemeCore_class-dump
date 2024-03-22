//
//     Generated by private class-dump
//

@class RTVListPluginContext;
@protocol RTVListViewControllerPlugin;

@interface RTVListPluginHeaderView : RTVCollectionSectionSupplementaryView {
    id<RTVListViewControllerPlugin> _plugin;
    RTVListPluginContext *_context;
}

@property (readonly, nonatomic) id<RTVListViewControllerPlugin> plugin;
@property (readonly, nonatomic) RTVListPluginContext *context;

- (void)renderModel:(id)arg0 context:(id)arg1;
- (void).cxx_destruct;
- (id)context;
- (id)plugin;

@end