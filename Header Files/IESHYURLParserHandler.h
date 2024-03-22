//
//     Generated by private class-dump
//

@class IESHYRouterIMP, PuzzleSchemaParamsHandler, IESLivePuzzleHybridRouter;

@interface IESHYURLParserHandler : NSObject {
    IESHYRouterIMP *_hybridRouter;
    IESLivePuzzleHybridRouter *_puzzleRouter;
    PuzzleSchemaParamsHandler *_schemaHandler;
}

@property (retain, nonatomic) IESHYRouterIMP *hybridRouter;
@property (retain, nonatomic) IESLivePuzzleHybridRouter *puzzleRouter;
@property (retain, nonatomic) PuzzleSchemaParamsHandler *schemaHandler;

- (id)getComponentsWithURLString:(id)arg0;
- (id)puzzleRouter;
- (void)setPuzzleRouter:(id)arg0;
- (id)schemaHandler;
- (void)setSchemaHandler:(id)arg0;
- (id)handleURLQuerys:(id)arg0 params:(id)arg1;
- (id)getQueryItemsWithURLString:(id)arg0;
- (void)addHybridMonitorDataToParams:(id)arg0 withPrepareInitDataStartTime:(long long)arg1 prepareInitDataEndTime:(long long)arg2;
- (id)buildCommonParamsWithOrigin:(id)arg0;
- (id)parserWithParams:(id)arg0 fromInside:(BOOL)arg1;
- (id)hybridRouter;
- (void)setHybridRouter:(id)arg0;
- (void).cxx_destruct;

@end
