//
//     Generated by private class-dump
//

@class NSArray;

@interface DitoLynxTemplateCheckTask : NSObject {
    id /* block */ _completeBlock;
    NSArray *_hasCacheLynxNodeList;
    NSArray *_noCacheLynxNodeList;
}

@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) NSArray *hasCacheLynxNodeList;
@property (copy, nonatomic) NSArray *noCacheLynxNodeList;

- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (void)checkLynxTempleteCache:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)didCheckLynxNodeTemplate:(id)arg0 noCacheLynxNodeList:(id)arg1;
- (void)setHasCacheLynxNodeList:(id)arg0;
- (void)setNoCacheLynxNodeList:(id)arg0;
- (id)hasCacheLynxNodeList;
- (id)noCacheLynxNodeList;
- (void)overtimeAction;
- (void).cxx_destruct;

@end