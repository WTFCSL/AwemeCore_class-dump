//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface RxInjectorAnnotationBasedModule : NSObject <RxInjectorModule> {
    NSArray *_annotations;
    id /* block */ _binderBlock;
}

@property (readonly, nonatomic) NSArray *annotations;
@property (readonly, nonatomic) id /* block */ binderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleWithAnnotations:(id)arg0 binderBlock:(id /* block */)arg1;

- (id)initWithAnnotations:(id)arg0 binderBlock:(id /* block */)arg1;
- (void)bindModule:(id)arg0;
- (id /* block */)binderBlock;
- (id)annotations;
- (void).cxx_destruct;

@end
