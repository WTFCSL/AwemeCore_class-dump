//
//     Generated by private class-dump
//

@interface AWEQuickShareImageTask : AWEQuickShareTask

- (id)quickShareImageWithStoryModel:(id)arg0 completion:(id /* block */)arg1;
- (id)quickShareImageWithStoryModel:(id)arg0 completion:(id /* block */)arg1 cancelBlock:(id /* block */)arg2;
- (void)quickShareImageWithStoryModel:(id)arg0 completion:(id /* block */)arg1 creationID:(id)arg2 cancelBlock:(id /* block */)arg3;
- (BOOL)preCheckWithStoryModel:(id)arg0 error:(id *)arg1;
- (void)handleStoryImageWithURLList:(id)arg0 shouldGetGradientInfo:(BOOL)arg1 storyModel:(id)arg2 completion:(id /* block */)arg3;
- (void)handleBackgroundImageWithURLList:(id)arg0 storyImage:(id)arg1 useGradientBackground:(BOOL)arg2 storyModel:(id)arg3 completion:(id /* block */)arg4;
- (void)initParameterizedCreationWithEditComposer:(id)arg0 publishComposer:(id)arg1 storyModel:(id)arg2;
- (BOOL)initCustomLayoutWithStoryModel:(id)arg0 publishModel:(id)arg1 error:(id *)arg2;
- (void)start;
- (void)dealloc;

@end
