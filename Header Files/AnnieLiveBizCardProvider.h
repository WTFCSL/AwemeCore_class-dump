//
//     Generated by private class-dump
//

@class NSString, IESHYHybridContainerConfig, PuzzleContext;

@interface AnnieLiveBizCardProvider : NSObject <AnnieLiveBizCardProviderProtocol, BDXServiceProtocol> {
    NSString *_schema;
    IESHYHybridContainerConfig *_configuration;
    PuzzleContext *_puzzleContext;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) IESHYHybridContainerConfig *configuration;
@property (retain, nonatomic) PuzzleContext *puzzleContext;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)createService;
+ (void)configBridgeWithModel:(id)arg0;
+ (id)p_schemaWithModel:(id)arg0;
+ (void)updateCardModel:(id)arg0 preCreateModel:(id)arg1;
+ (void)updatePuzzleGlobalPropsWithCardModel:(id)arg0 CustomGlobalProps:(id)arg1 initialData:(id)arg2 schema:(id)arg3 puzzleContext:(id)arg4 routerParams:(id)arg5 enablePreCreate:(BOOL)arg6;
+ (id)generateJsSourceWithPramName:(id)arg0 dict:(id)arg1;
+ (id)generateJsSourceWithFuncName:(id)arg0 str:(id)arg1;
+ (id)p_schemaWithSchema:(id)arg0 originURL:(id)arg1 routerParams:(id)arg2 kernalType:(unsigned long long)arg3;
+ (id)getAnnieXCardModelWithModel:(id)arg0 bid:(id)arg1;
+ (unsigned long long)serviceType;

- (id)puzzleContext;
- (void)setPuzzleContext:(id)arg0;
- (void)updateCardModel:(id)arg0;
- (id)p_schemaWithConfiguration:(id)arg0;
- (id)createViewWithConfiguration:(id)arg0 puzzleContext:(id)arg1 lifeCycleDelegate:(id)arg2 bid:(id)arg3 schema:(id)arg4;
- (id)createAnnieXCard:(id)arg0 lifeCycleDelegate:(id)arg1;
- (id)createBDXView:(id)arg0 lifeCycleDelegate:(id)arg1;
- (void)configBridgeWithContext:(id)arg0;
- (BOOL)enableAnnieLiveCard;
- (id)createViewWithConfiguration:(id)arg0 puzzleContext:(id)arg1 lifeCycleDelegate:(id)arg2 bid:(id)arg3;
- (id)createViewWithCardModel:(id)arg0 configuration:(id)arg1 puzzleContext:(id)arg2 lifeCycleDelegate:(id)arg3;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)configuration;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)schema;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setConfiguration:(id)arg0;
- (void)updateContext:(id)arg0;

@end
