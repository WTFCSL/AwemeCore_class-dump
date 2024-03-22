//
//     Generated by private class-dump
//

@protocol AWECommentListBusinessServiceViewModelProtocol <NSObject>

- (void)registerReusableView:(id)arg0 contextDelegate:(id)arg1 completionBlock:(id /* block */)arg2;
- (long long)numberOfItemsForSection:(long long)arg0;
- (long long)numberOfItemsForSection:(long long)arg0;
- (id)identifierForResuableViewAtIndexPath:(id)arg0;
- (id)identifierForResuableViewAtIndexPath:(id)arg0;
- (double)heightForRowForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (double)heightForRowForIdentifier:(id)arg0 atIndexPath:(id)arg1;

@optional

- (void)configCCell:(id)arg0 identifier:(id)arg1 atIndexPath:(id)arg2;
- (void)configCCell:(id)arg0 identifier:(id)arg1 atIndexPath:(id)arg2;
- (void)configTCell:(id)arg0 identifier:(id)arg1 atIndexPath:(id)arg2;
- (void)configTCell:(id)arg0 identifier:(id)arg1 atIndexPath:(id)arg2;
- (id)identifierForFooterAtIndexPath:(long long)arg0;
- (id)identifierForFooterAtIndexPath:(long long)arg0;
- (void)configCFooter:(id)arg0 identifier:(id)arg1 atIndexPath:(id)arg2;
- (void)configCFooter:(id)arg0 identifier:(id)arg1 atIndexPath:(id)arg2;
- (void)configTFooter:(id)arg0 identifier:(id)arg1 atIndexPath:(id)arg2;
- (void)configTFooter:(id)arg0 identifier:(id)arg1 atIndexPath:(id)arg2;
- (void)footerDidEndDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (void)footerDidEndDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (void)footerWillDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (void)footerWillDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (void)headerDidEndDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (void)headerDidEndDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (void)headerWillDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (void)headerWillDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (void)reusableViewDidEndDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (void)reusableViewDidEndDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (void)reusableViewWillDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (void)reusableViewWillDisplayForIdentifier:(id)arg0 atIndexPath:(id)arg1;
- (double)footerHeightForIdentifier:(id)arg0 section:(long long)arg1;
- (double)footerHeightForIdentifier:(id)arg0 section:(long long)arg1;
- (double)headerHeightForIdentifier:(id)arg0 section:(long long)arg1;
- (double)headerHeightForIdentifier:(id)arg0 section:(long long)arg1;
- (void)didSelectRowAtIndexPath:(id)arg0;
- (void)didSelectRowAtIndexPath:(id)arg0;
- (id)identifierForHeaderAtIndexPath:(long long)arg0;
- (id)identifierForHeaderAtIndexPath:(long long)arg0;

@end
