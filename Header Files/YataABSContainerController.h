//
//     Generated by private class-dump
//

@class NSString, NSDictionary, YataContainerViewSource, UIView;
@protocol YataInstanceInnerInterface;

@interface YataABSContainerController : NSObject <YataContainerControllerInterface> {
    NSString *_position;
    id<YataInstanceInnerInterface> _instance;
    NSDictionary *_viewHolderDict;
    UIView *_container;
    YataContainerViewSource *_viewSource;
}

@property (weak, nonatomic) YataContainerViewSource *viewSource;
@property (weak, nonatomic) id<YataInstanceInnerInterface> instance;
@property (retain, nonatomic) NSDictionary *viewHolderDict;
@property (retain, nonatomic) UIView *container;
@property (copy, nonatomic) NSString *position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewSource:(id)arg0;
- (id)viewSource;
- (void)setViewHolderDict:(id)arg0;
- (void)onViewHolderContainerChanged:(id)arg0 viewHolderSeqKey:(id)arg1 viewHolderDict:(id)arg2 animationIntermediateSeqKey:(id)arg3 completion:(id /* block */)arg4;
- (void)onChangeWithPosition:(id)arg0 viewHolderSeq:(id)arg1 viewHolderDict:(id)arg2 animationIntermediateSeq:(id)arg3 completion:(id /* block */)arg4;
- (void)setupWithView:(id)arg0 instance:(id)arg1 viewSource:(id)arg2;
- (void)registerSectionViewModel:(id)arg0;
- (void)reloadRegistedObject:(id)arg0 isBodyError:(BOOL)arg1;
- (id)viewHolderDict;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)position;
- (id)instance;
- (void)setPosition:(id)arg0;
- (void)setInstance:(id)arg0;
- (id)initWithPosition:(id)arg0;

@end
