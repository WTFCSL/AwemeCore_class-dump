//
//     Generated by private class-dump
//

@class NSString, IESContainer;

@interface AWEIESContainerRegistry : NSObject <AWEGenericRegistry> {
    IESContainer *_container;
}

@property (retain, nonatomic) IESContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerRecipe:(id /* block */)arg0 forProtocol:(id)arg1;
- (void)registerRecipe:(id /* block */)arg0 forClass:(Class)arg1;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)initWithContainer:(id)arg0;

@end