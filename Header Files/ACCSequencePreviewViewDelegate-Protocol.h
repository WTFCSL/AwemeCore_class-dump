//
//     Generated by private class-dump
//

@protocol ACCSequencePreviewViewDelegate <NSObject>

- (void)sequencePreview:(id)arg0 selectItemAtIndex:(long long)arg1;
- (void)sequencePreviewClickAddItem:(id)arg0;
- (void)sequencePreview:(id)arg0 beginDraggingAtIndex:(long long)arg1;
- (void)sequencePreview:(id)arg0 endDraggingAtindex:(long long)arg1;
- (void)sequencePreview:(id)arg0 deleteItemAtIndex:(long long)arg1;
- (void)sequencePreview:(id)arg0 switchIndexFrom:(long long)arg1 to:(long long)arg2;
- (void)sequencePreview:(id)arg0 didChangePlayStatus:(BOOL)arg1;
- (id)projectForUUID:(id)arg0;
- (void)sequencePreviewSwipeUpGesture;

@end