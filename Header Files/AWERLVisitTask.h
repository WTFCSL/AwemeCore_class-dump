//
//     Generated by private class-dump
//

@interface AWERLVisitTask : NSObject {
    BOOL _visited;
    id _item;
    id _context;
}

@property (retain, nonatomic) id item;
@property (retain, nonatomic) id context;
@property (nonatomic) BOOL visited;

+ (id)taskWithItem:(id)arg0 context:(id)arg1;

- (BOOL)visited;
- (void)setVisited:(BOOL)arg0;
- (id)item;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)setItem:(id)arg0;

@end
