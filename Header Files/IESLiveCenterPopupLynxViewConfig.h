//
//     Generated by private class-dump
//

@interface IESLiveCenterPopupLynxViewConfig : IESLiveBasePopupLynxViewConfig {
    BOOL _newCloseStyle;
    BOOL _banTapMaskToClose;
    id /* block */ _closeHandler;
}

@property (nonatomic) BOOL newCloseStyle;
@property (nonatomic) BOOL banTapMaskToClose;
@property (copy, nonatomic) id /* block */ closeHandler;

- (void)setCloseHandler:(id /* block */)arg0;
- (id /* block */)closeHandler;
- (BOOL)newCloseStyle;
- (void)setNewCloseStyle:(BOOL)arg0;
- (BOOL)banTapMaskToClose;
- (void)setBanTapMaskToClose:(BOOL)arg0;
- (void).cxx_destruct;

@end
