//
//     Generated by private class-dump
//

@class AWETemplateTagsModel, NSString, AWETemplateTagsContext;

@interface AWETemplateTagsBaseStrategy : NSObject <AWETemplateTagsStrategyProtocol> {
    AWETemplateTagsModel *_model;
    AWETemplateTagsContext *_context;
}

@property (retain, nonatomic) AWETemplateTagsModel *model;
@property (retain, nonatomic) AWETemplateTagsContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activeInfo;
+ (BOOL)shouldActiveWithModel:(id)arg0 context:(id)arg1;

- (id)extraTrackParams;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)initWithModel:(id)arg0 context:(id)arg1;
- (void)didClickWithEvent:(id)arg0;
- (void)didTriggerEvent:(long long)arg0 params:(id)arg1;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)context;
- (void)refreshUI;
- (void)reset;
- (long long)templateType;
- (id)triggerEvents;
- (void)didInitialize;

@end
