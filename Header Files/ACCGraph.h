//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray;

@interface ACCGraph : NSObject {
    NSMutableArray *_edges;
}

@property (retain, nonatomic) NSMutableArray *edges;
@property (readonly, nonatomic) NSArray *graphEdges;

- (void)connectNodeA:(id)arg0 toNodeB:(id)arg1;
- (void)removeEdge:(id)arg0;
- (void).cxx_destruct;
- (id)edges;
- (void)setEdges:(id)arg0;
- (id)description;
- (id)graphEdges;

@end
