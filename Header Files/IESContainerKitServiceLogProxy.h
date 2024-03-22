//
//     Generated by private class-dump
//

@class NSArray, NSString, IESContainerKitCallerInfo;
@protocol IESContainerKitService;

@interface IESContainerKitServiceLogProxy : NSObject <IESContainerKitService> {
    id<IESContainerKitService> _targetService;
    id<IESContainerKitService> _proxyService;
    IESContainerKitCallerInfo *_callerInfo;
    NSArray *_proxyAllowList;
}

@property (weak, nonatomic) id<IESContainerKitService> targetService;
@property (weak, nonatomic) id<IESContainerKitService> proxyService;
@property (retain, nonatomic) IESContainerKitCallerInfo *callerInfo;
@property (retain, nonatomic) NSArray *proxyAllowList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerLayoutRule:(id)arg0 forViewType:(id)arg1;

- (void)addViewElement:(id)arg0;
- (void)addView:(id)arg0 viewType:(id)arg1;
- (void)addView:(id)arg0 viewType:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)addView:(id)arg0 viewType:(id)arg1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 size:(struct CGSize { double x0; double x1; })arg3;
- (void)removeViewElement:(id)arg0;
- (id)queryViewByType:(id)arg0;
- (id)queryContainerByType:(long long)arg0;
- (id)roomContainerView;
- (void)switchToSideMode;
- (void)switchToNormalModel;
- (BOOL)enableProxyEngine;
- (void)parseDynamicLayoutRule:(id)arg0;
- (id)dynamicLayoutRules;
- (id)proxyWithCaller:(id)arg0;
- (void)viewDidAdded:(id)arg0;
- (void)addOperation:(id)arg0 dependWithViewType:(id)arg1;
- (id)proxyAllowList;
- (void)setProxyAllowList:(id)arg0;
- (void)setProxyService:(id)arg0;
- (id)p_ckServiceWithType:(id)arg0;
- (id)targetService;
- (void)setTargetService:(id)arg0;
- (void)addOperation:(id)arg0;
- (void).cxx_destruct;
- (id)initWithService:(id)arg0;
- (id)callerInfo;
- (void)setCallerInfo:(id)arg0;
- (id)proxyService;

@end