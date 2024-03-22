//
//     Generated by private class-dump
//

@class IESHYRouterIMP, PuzzleSchemaParamsHandler;

@interface IESLivePuzzleHybridRouter : NSObject {
    IESHYRouterIMP *_hybridRouter;
    PuzzleSchemaParamsHandler *_schemaHandler;
}

@property (retain, nonatomic) IESHYRouterIMP *hybridRouter;
@property (retain, nonatomic) PuzzleSchemaParamsHandler *schemaHandler;

+ (void)dismissNewHybridPopupWithKernalType:(unsigned long long)arg0 rootVC:(id)arg1 isBottom:(BOOL)arg2 removeOne:(BOOL)arg3;
+ (void)initialize;

- (id)hybridContainerWithSchema:(id)arg0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 context:(id)arg2 lifeCycleDelegate:(id)arg3;
- (id)setupContext:(id)arg0;
- (id)hybridContainerWithURL:(id)arg0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 kernalType:(unsigned long long)arg2 context:(id)arg3 lifeCycleDelegate:(id)arg4;
- (id)schemaHandler;
- (void)setSchemaHandler:(id)arg0;
- (id)openHybridWithParam:(id)arg0 context:(id)arg1 eventParams:(id)arg2;
- (id)hybridRouter;
- (void)setHybridRouter:(id)arg0;
- (id)handleAnnieSchema:(id)arg0 params:(id)arg1;
- (id)openHybridWithParam:(id)arg0 context:(id)arg1 eventParams:(id)arg2 router:(id)arg3;
- (void).cxx_destruct;

@end