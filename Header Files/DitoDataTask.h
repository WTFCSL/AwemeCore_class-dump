//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface DitoDataTask : NSObject {
    NSDictionary *_nodeMap;
    NSString *_currentParseContainer;
}

@property (copy, nonatomic) NSString *currentParseContainer;
@property (copy, nonatomic) NSDictionary *nodeMap;

- (id)nodeMap;
- (void)setNodeMap:(id)arg0;
- (void)dfs_nodeTreeWithRootNodeTag:(id)arg0 needDepthSearch:(id /* block */)arg1 beSearched:(id /* block */)arg2 didDepthSearch:(id /* block */)arg3;
- (id)nodeWithTag:(id)arg0;
- (id)fetchContainerNodeComponentTagListMapFromPageModel:(id)arg0;
- (id)inheritanceChain:(id)arg0;
- (BOOL)removeNodeTag:(id)arg0;
- (BOOL)replaceNodeWithOriginNodeTag:(id)arg0 newNodeTag:(id)arg1;
- (id)nextSubNodeTagIfNeedBuild:(id)arg0 didBuildTagSet:(id)arg1;
- (void)setCurrentParseContainer:(id)arg0;
- (id)currentParseContainer;
- (BOOL)clearNodeTag:(id)arg0;
- (void).cxx_destruct;

@end
