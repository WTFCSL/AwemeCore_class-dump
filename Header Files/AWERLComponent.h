//
//     Generated by private class-dump
//

@class NSString;

@interface AWERLComponent : NSObject <AWERLComponentProtocol> {
    id _data;
    id _context;
    NSString *_tagString;
}

@property (retain, nonatomic) id data;
@property (retain, nonatomic) id context;
@property (copy, nonatomic) NSString *tagString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildSubComponents;
- (void)updateComponentData:(id)arg0;
- (void)setNeedsUpdateAnimatedWithAnimator:(id)arg0 fromNode:(id /* block */)arg1 toNode:(id /* block */)arg2 start:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)setTagString:(id)arg0;
- (id)tagString;
- (id)rootComponent;
- (id)componentsWithTag:(id)arg0 rootComponent:(id)arg1;
- (id)initWithData:(id)arg0 context:(id)arg1;
- (void)setNeedsUpdate;
- (id)data;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setData:(id)arg0;
- (id)context;

@end