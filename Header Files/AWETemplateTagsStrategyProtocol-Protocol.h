//
//     Generated by private class-dump
//

@protocol AWETemplateTagsStrategyProtocol <NSObject>

+ (id)activeInfo;
+ (BOOL)shouldActiveWithModel:(id)arg0 context:(id)arg1;

- (id)extraTrackParams;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)initWithModel:(id)arg0 context:(id)arg1;
- (void)didClickWithEvent:(id)arg0;
- (void)didTriggerEvent:(long long)arg0 params:(id)arg1;
- (void)reset;
- (long long)templateType;
- (id)triggerEvents;
- (void)didInitialize;

@end