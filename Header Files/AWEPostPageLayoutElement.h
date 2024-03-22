//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEPostPageElementCenter;

@interface AWEPostPageLayoutElement : AWEPostPageElement <AWENewPublishImageAlbumTableViewCellActionDelegate> {
    id<AWEPostPageElementCenter> _elementCenter;
}

@property (weak, nonatomic) id<AWEPostPageElementCenter> elementCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)arg0;
- (void)imageAlbumCell:(id)arg0 willBeginDraggingItemAtIndex:(long long)arg1;
- (void)setElementCenter:(id)arg0;
- (id)elementCenter;
- (void)inputController:(id)arg0 navigationButtonState:(BOOL)arg1;
- (void)p_configVC;
- (void)p_setupInput;
- (id)inputElement;
- (id)tagRecommendCell;
- (id)navigationElement;
- (id)footerView;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)tableView;
- (id)type;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (long long)priority;

@end