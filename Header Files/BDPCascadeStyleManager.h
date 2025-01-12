//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface BDPCascadeStyleManager : NSObject {
    NSMutableDictionary *_clsNodeMap;
    NSMutableDictionary *_nodeTrees;
}

@property (retain, nonatomic) NSMutableDictionary *clsNodeMap;
@property (retain, nonatomic) NSMutableDictionary *nodeTrees;

+ (id)sharedManager;

- (id)styleNodeForClass:(Class)arg0 category:(id)arg1 autoCreate:(BOOL)arg2;
- (id)clsNodeMap;
- (id)nodeWithClass:(Class)arg0 category:(id)arg1;
- (id)nodeTrees;
- (void)setClsNodeMap:(id)arg0;
- (void)setNodeTrees:(id)arg0;
- (void)applyStyleForObject:(id)arg0 category:(id)arg1;
- (id)styleNodeForClass:(Class)arg0 category:(id)arg1;
- (void).cxx_destruct;

@end
