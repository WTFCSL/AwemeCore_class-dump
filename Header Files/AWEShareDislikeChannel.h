//
//     Generated by private class-dump
//

@class NSString;

@interface AWEShareDislikeChannel : AWEShareBaseChannel <AWESharePanelExtension, AWEShareItemDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareImage;
- (id)makeItemWithStyle:(unsigned long long)arg0 inView:(id)arg1;
- (void)checkTargetIndexWithContext:(id)arg0;
- (void)shareWithCompletion:(id /* block */)arg0;
- (void)sharePanelDidAppear:(id)arg0;
- (void)sharePanelWillDisappear:(id)arg0;
- (BOOL)shouldShowFamiliarDislikeWithContext:(id)arg0;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)arg0;

@end