//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveContainerServiceAdapterImpl : NSObject <IESLiveContainerServiceAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)forwardInvocation:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;

@end
