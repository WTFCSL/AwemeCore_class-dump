//
//     Generated by private class-dump
//

@class DitoPageContext, NSMutableDictionary, NSMutableArray;
@protocol DitoCustomParserProtocol;

@interface DitoDataParseTask : DitoDataTask {
    id<DitoCustomParserProtocol> _customParserImpl;
    DitoPageContext *_context;
    id /* block */ _buildVMBlock;
    NSMutableDictionary *_viewModelMap;
    long long _componentIndex;
    NSMutableArray *_lynxNodeList;
}

@property (copy, nonatomic) id /* block */ buildVMBlock;
@property (retain, nonatomic) NSMutableDictionary *viewModelMap;
@property (nonatomic) long long componentIndex;
@property (retain, nonatomic) NSMutableArray *lynxNodeList;
@property (weak, nonatomic) id<DitoCustomParserProtocol> customParserImpl;
@property (weak, nonatomic) DitoPageContext *context;

- (id)viewModelMap;
- (id)lynxNodeList;
- (id)customParserImpl;
- (void)setViewModelMap:(id)arg0;
- (void)setLynxNodeList:(id)arg0;
- (void)setCustomParserImpl:(id)arg0;
- (void)parseData:(id)arg0 buildVMBlock:(id /* block */)arg1 completeBlock:(id /* block */)arg2 exceptionBlock:(id /* block */)arg3;
- (id /* block */)buildVMBlock;
- (void)setBuildVMBlock:(id /* block */)arg0;
- (id)parsePageInfo:(id)arg0;
- (id)buildContainerNodeMapWithLayoutData:(id)arg0 rootTag:(id)arg1 nodesData:(id)arg2;
- (id)buildNodeMapWithRootNode:(id)arg0 layoutData:(id)arg1 componentsData:(id)arg2;
- (void)fetchViewModelByNode:(id)arg0;
- (void)markLynxNode:(id)arg0;
- (void)enumerateNodeMap:(id)arg0 processBlock:(id /* block */)arg1;
- (void)informSuperNodeWithTag:(id)arg0 thisNodeIsIllegal:(id)arg1 nodeMap:(id)arg2;
- (id)findNextSubNode:(id)arg0 buildedNodeMap:(id)arg1;
- (id)buildNodeWithTag:(id)arg0 superNodeTag:(id)arg1 layoutData:(id)arg2 componentsData:(id)arg3;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (long long)componentIndex;
- (void)setComponentIndex:(long long)arg0;

@end
