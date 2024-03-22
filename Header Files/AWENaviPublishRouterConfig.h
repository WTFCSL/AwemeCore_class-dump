//
//     Generated by private class-dump
//

@class NSString, AWENaviTraceNode, AWENaviActivityNode, AWENaviAnchorNode;

@interface AWENaviPublishRouterConfig : NSObject {
    BOOL _checkDaily;
    BOOL _autoSave;
    BOOL _enableDaily;
    BOOL _isLandingWithLokiItems;
    BOOL _ignoreHiddens;
    NSString *_publishTitle;
    NSString *_publishDailyHint;
    NSString *_previewVideoHint;
    AWENaviTraceNode *_trace;
    AWENaviAnchorNode *_anchor;
    AWENaviActivityNode *_activity;
    NSString *_guideCheckPublishToast;
}

@property (readonly, copy, nonatomic) NSString *publishTitle;
@property (readonly, copy, nonatomic) NSString *publishDailyHint;
@property (readonly, copy, nonatomic) NSString *previewVideoHint;
@property (readonly, nonatomic) AWENaviTraceNode *trace;
@property (readonly, nonatomic) AWENaviAnchorNode *anchor;
@property (readonly, nonatomic) AWENaviActivityNode *activity;
@property (readonly, nonatomic) BOOL checkDaily;
@property (nonatomic) BOOL autoSave;
@property (readonly, nonatomic) BOOL enableDaily;
@property (nonatomic) BOOL isLandingWithLokiItems;
@property (copy, nonatomic) NSString *guideCheckPublishToast;
@property (nonatomic) BOOL ignoreHiddens;

- (id)publishTitle;
- (BOOL)enableDaily;
- (BOOL)isLandingWithLokiItems;
- (id)guideCheckPublishToast;
- (BOOL)checkDaily;
- (id)publishDailyHint;
- (id)previewVideoHint;
- (BOOL)autoSave;
- (void)setIsLandingWithLokiItems:(BOOL)arg0;
- (void)setAutoSave:(BOOL)arg0;
- (BOOL)ignoreHiddens;
- (void)setIgnoreHiddens:(BOOL)arg0;
- (void)setGuideCheckPublishToast:(id)arg0;
- (id)anchor;
- (id)init;
- (id)trace;
- (void).cxx_destruct;
- (id)activity;
- (id)initWithParams:(id)arg0;

@end
