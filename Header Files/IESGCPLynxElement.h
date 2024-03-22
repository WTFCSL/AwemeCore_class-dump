//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableDictionary, IESGCPLynxView, IESGCPTrackerNode;

@interface IESGCPLynxElement : LynxUI {
    IESGCPLynxView *_lynxView;
    NSString *_nodeName;
    long long _trackerNodeType;
    NSDictionary *_attribute;
    NSMutableDictionary *_showAttribute;
    NSMutableDictionary *_durationAttribute;
    NSMutableDictionary *_clickAttribute;
    IESGCPTrackerNode *_trackerNode;
}

@property (retain, nonatomic) IESGCPLynxView *lynxView;
@property (copy, nonatomic) NSString *nodeName;
@property (nonatomic) long long trackerNodeType;
@property (retain, nonatomic) NSDictionary *attribute;
@property (retain, nonatomic) NSMutableDictionary *showAttribute;
@property (retain, nonatomic) NSMutableDictionary *durationAttribute;
@property (retain, nonatomic) NSMutableDictionary *clickAttribute;
@property (weak, nonatomic) IESGCPTrackerNode *trackerNode;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__821;
+ (id)__lynx_ui_method_config__1392;
+ (id)__lynx_ui_method_config__1793;
+ (id)__lynx_ui_method_config__1864;
+ (id)__lynx_ui_method_config__1945;
+ (id)__lynx_ui_method_config__2026;
+ (id)__lynx_ui_method_config__2367;

- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (void)onViewAppear;
- (void)setTrackerNodeType:(long long)arg0;
- (void)onTrackActionTriggerWithNode:(id)arg0 action:(long long)arg1;
- (id)trackerNode;
- (void)setTrackerNode:(id)arg0;
- (id)showAttribute;
- (void)setShowAttribute:(id)arg0;
- (id)durationAttribute;
- (void)setDurationAttribute:(id)arg0;
- (id)clickAttribute;
- (void)setClickAttribute:(id)arg0;
- (void)trackerNode:(id)arg0 requestReset:(BOOL)arg1;
- (void)reportTrack:(id)arg0 withResult:(id /* block */)arg1;
- (void)updateAttribute:(id)arg0 withResult:(id /* block */)arg1;
- (void)getRouteParams:(id)arg0 withResult:(id /* block */)arg1;
- (void)getAllReportParams:(id)arg0 withResult:(id /* block */)arg1;
- (void)getReportTrackModel:(id)arg0 withResult:(id /* block */)arg1;
- (void)setClickRouteParams:(id)arg0 withResult:(id /* block */)arg1;
- (long long)trackerNodeType;
- (void).cxx_destruct;
- (void)setAttribute:(id)arg0;
- (id)attribute;
- (id)nodeName;
- (id)createView;
- (void)setNodeName:(id)arg0;

@end
