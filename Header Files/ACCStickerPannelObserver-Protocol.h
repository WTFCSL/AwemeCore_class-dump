//
//     Generated by private class-dump
//

@protocol ACCStickerPannelObserver <NSObject>

- (unsigned long long)stikerPriority;
- (BOOL)handleSelectSticker:(id)arg0 fromTab:(id)arg1 willSelectHandle:(id /* block */)arg2 dismissPanelHandle:(id /* block */)arg3;

@optional

- (BOOL)handleThirdPartySelectSticker:(id)arg0 fromTab:(id)arg1 willSelectHandle:(id /* block */)arg2 dismissPanelHandle:(id /* block */)arg3;

@end
