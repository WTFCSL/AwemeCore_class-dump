//
//     Generated by private class-dump
//

@protocol AWEVideoCoverImageTemplateListViewDelegate <NSObject>

- (void)setApplyTemplateLockWithShouldLocked:(BOOL)arg0;
- (void)clearImageTemplate;
- (void)retryFetchingTemplateList;
- (void)selectImageTemplateWithMediaID:(id)arg0 templateID:(id)arg1 tabName:(id)arg2;

@optional

- (void)templateListView:(id)arg0 checkSelectIndexPath:(id)arg1 isInvertSelect:(BOOL)arg2 resumeAction:(id /* block */)arg3;

@end
