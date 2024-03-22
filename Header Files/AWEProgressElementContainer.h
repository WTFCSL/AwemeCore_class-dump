//
//     Generated by private class-dump
//

@class AWEProgressConfigs, NSMutableDictionary, NSString, AWEAwemeModel, AWEPageContext, NSMutableArray, UIViewController;
@protocol AWEProgressElementDelegate, AWEProgressContextProtocol;

@interface AWEProgressElementContainer : AWEElementContainer <AWEProgressElementContainerProtocol> {
    UIViewController *_viewController;
    NSMutableArray *_elementArray;
    id<AWEProgressElementDelegate> _delegate;
    NSMutableDictionary *_elementDictionary;
    AWEAwemeModel *_model;
    AWEPageContext<AWEProgressContextProtocol> *_context;
    AWEProgressConfigs *_config;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSMutableArray *elementArray;
@property (retain, nonatomic) NSMutableDictionary *elementDictionary;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (retain, nonatomic) AWEProgressConfigs *config;
@property (weak, nonatomic) id<AWEProgressElementDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)arg0 context:(id)arg1;
- (id)elementArray;
- (void)setElementArray:(id)arg0;
- (void)addElementToArray:(id)arg0;
- (void)renderAppearElement:(id)arg0;
- (id)mElementArray;
- (void)addElementToDictionary:(id)arg0;
- (id)elementDictionary;
- (void)addElementByClassName:(id)arg0 withParamDict:(id)arg1;
- (void)setElementDictionary:(id)arg0;
- (void)progressValueChangedTo:(double)arg0 animated:(BOOL)arg1;
- (void)addLeftEdgeInsetIfNeed:(double)arg0 bizType:(unsigned long long)arg1;
- (void)progressViewTouchBeganWithStart:(struct CGPoint { double x0; double x1; })arg0 targetView:(id)arg1 triggerType:(unsigned long long)arg2;
- (void)progressViewTouchChangedWithLastPoint:(struct CGPoint { double x0; double x1; })arg0 targetView:(id)arg1 triggerType:(unsigned long long)arg2;
- (void)progressViewTouchEndedWithEndPoint:(struct CGPoint { double x0; double x1; })arg0 targetView:(id)arg1 triggerType:(unsigned long long)arg2;
- (void)changeProgressStatusTo:(unsigned long long)arg0 withAction:(unsigned long long)arg1 animate:(BOOL)arg2;
- (id)currentStatisticalInfo;
- (void)setModel:(id)arg0;
- (void)setViewController:(id)arg0;
- (void)setConfig:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)config;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (void)reset;

@end