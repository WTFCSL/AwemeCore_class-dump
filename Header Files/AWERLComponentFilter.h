//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWERLComponentFilter : NSObject <AWERLComponentVisitorProtocol> {
    NSMutableArray *_components;
    id /* block */ _filterBlock;
}

@property (copy, nonatomic) id /* block */ filterBlock;
@property (readonly, nonatomic) NSMutableArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)walk:(id)arg0;
- (void)beforeAllVisit:(id)arg0;
- (id)components;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)arg0;
- (id /* block */)filterBlock;
- (void)setFilterBlock:(id /* block */)arg0;
- (unsigned long long)visit:(id)arg0;

@end
