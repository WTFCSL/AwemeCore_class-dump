//
//     Generated by private class-dump
//

@protocol BDXLynxViewProtocol <BDXKitViewProtocol>

- (void)registerModule:(Class)arg0 param:(id)arg1;
- (void)registerHandler:(id /* block */)arg0 forMethod:(id)arg1;
- (void)registerShadowNode:(Class)arg0 withName:(id)arg1;
- (BOOL)isLayoutFinish;
- (void)registerModule:(Class)arg0;

@optional

- (void)updateData:(id)arg0 processorName:(id)arg1;
- (id)findViewWithName:(id)arg0;
- (id)getCurrentData;
- (id)getPageDataByKeys:(id)arg0;
- (void)resetWithData:(id)arg0;
- (void)reloadWithData:(id)arg0;
- (void)updateWithData:(id)arg0;

@end