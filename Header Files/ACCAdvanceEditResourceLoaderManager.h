//
//     Generated by private class-dump
//

@class NSString, ACCAdvanceEditResourceInfoManager;

@interface ACCAdvanceEditResourceLoaderManager : NSObject <DVEResourceLoaderProtocol> {
    ACCAdvanceEditResourceInfoManager *_resourceManager;
}

@property (retain, nonatomic) ACCAdvanceEditResourceInfoManager *resourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transitionModelCategoryWithCompletion:(id /* block */)arg0;
- (void)transitionModel:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)resourceManager;
- (void)setResourceManager:(id)arg0;

@end