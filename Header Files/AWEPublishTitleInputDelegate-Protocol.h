//
//     Generated by private class-dump
//

@protocol AWEPublishTitleInputDelegate <NSObject>

- (void)previewVideo:(id)arg0;
- (void)chooseCover:(id)arg0;

@optional

- (id)extensionPlaceHolder:(id)arg0;
- (void)inputController:(id)arg0 hashtagChanged:(unsigned long long)arg1;
- (void)inputController:(id)arg0 navigationButtonState:(BOOL)arg1;
- (id)inputCellIndexPath;
- (void)keyboardWillShow:(id)arg0;
- (void)textDidChange:(id)arg0;
- (void)keyboardWillHide:(id)arg0;
- (void)updateTableViewLayout:(BOOL)arg0 changeHeight:(double)arg1;
- (void)titleTextHeightDidChanged:(double)arg0;
- (double)imageAlbumPreviewCoverHeight;
- (void)updateInputTableCellWith:(double)arg0;

@end
