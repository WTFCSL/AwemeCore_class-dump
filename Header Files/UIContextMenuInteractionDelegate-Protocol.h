//
//     Generated by private class-dump
//

@protocol UIContextMenuInteractionDelegate <NSObject>

- (id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })arg1;

@optional

- (id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1;
- (id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1;
- (id)contextMenuInteraction:(id)arg0 configuration:(id)arg1 dismissalPreviewForItemWithIdentifier:(id)arg2;
- (id)contextMenuInteraction:(id)arg0 configuration:(id)arg1 highlightPreviewForItemWithIdentifier:(id)arg2;
- (void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2;
- (void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2;
- (void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2;

@end