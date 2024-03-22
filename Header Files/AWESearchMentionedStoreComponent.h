//
//     Generated by private class-dump
//

@class NSString, AWEGeneralSearchVideoCardModel, UIView, AWESearchMentionedStoreView;

@interface AWESearchMentionedStoreComponent : AWESearchComponent <AWESearchMentionedStoreComponentProtocol> {
    BOOL _currentModelFromSetupModelOnly;
    UIView *_contentView;
    AWESearchMentionedStoreView *_mentionedStoreView;
    AWEGeneralSearchVideoCardModel *_bindedModel;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchMentionedStoreView *mentionedStoreView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)arg0 width:(double)arg1;

- (void)setBindedModel:(id)arg0;
- (void)setModelOnly:(id)arg0;
- (id)bindedModel;
- (void)componentViewLayoutSubviews;
- (void)updateWithModel:(id)arg0 forceUpdate:(BOOL)arg1;
- (id)mentionedStoreView;
- (void)setMentionedStoreView:(id)arg0;
- (id)p_context;
- (void)p_updateWithModel:(id)arg0 forceUpdate:(BOOL)arg1;
- (void)setCurrentModelFromSetupModelOnly:(BOOL)arg0;
- (BOOL)currentModelFromSetupModelOnly;
- (id)init;
- (void).cxx_destruct;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (id)componentView;
- (void)setupUI;
- (id)router;

@end