//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, IESLiveStackView;

@interface IESLivePKComponentLayoutManager : IESLivePKComponent <IESLivePKComponentLayoutProvider> {
    IESLiveStackView *_topRightStackContainer;
    NSMutableDictionary *_topRightViewDict;
}

@property (retain, nonatomic) IESLiveStackView *topRightStackContainer;
@property (retain, nonatomic) NSMutableDictionary *topRightViewDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentInteracting;
- (void)addSubView:(id)arg0 layoutType:(unsigned long long)arg1 priority:(unsigned long long)arg2;
- (void)removeSubViewWithLayoutType:(unsigned long long)arg0 priority:(unsigned long long)arg1;
- (void)setupContainerIfNeeded;
- (void)updateTopRightStackContainerTopOffset;
- (BOOL)containSubView:(id)arg0;
- (id)topRightViewDict;
- (id)topRightStackContainer;
- (void)updateStackContainerLayout:(id)arg0 withViewDict:(id)arg1;
- (void)setTopRightStackContainer:(id)arg0;
- (void)setTopRightViewDict:(id)arg0;
- (void).cxx_destruct;

@end
