//
//     Generated by private class-dump
//

@class AWEEcomSearchViewModel, NSString, AWEEcomSearchLynxEngine, AWEEcomSearchLynxMiddleViewController, AWEDynamicPatchModel;

@interface AWEEcomSearchLynxMiddlePageComponent : NSObject <AWEEcomSearchLynxEngineDelegate> {
    AWEEcomSearchLynxEngine *_lynxEngine;
    AWEDynamicPatchModel *_model;
    AWEEcomSearchViewModel *_searchViewModel;
    AWEEcomSearchLynxMiddleViewController *_rootViewController;
}

@property (retain, nonatomic) AWEEcomSearchLynxEngine *lynxEngine;
@property (retain, nonatomic) AWEDynamicPatchModel *model;
@property (retain, nonatomic) AWEEcomSearchViewModel *searchViewModel;
@property (weak, nonatomic) AWEEcomSearchLynxMiddleViewController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchViewModel;
- (void)setSearchViewModel:(id)arg0;
- (id)initWithModel:(id)arg0 andRootViewController:(id)arg1;
- (id)lynxEngine;
- (void)setLynxEngine:(id)arg0;
- (void)setRootViewController:(id)arg0;
- (id)rootViewController;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;

@end