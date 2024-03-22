//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, ACCButton;
@protocol AWECloudAlbumPopupVCProtocol;

@interface AWECloudAlbumOfflineView : UIView <AWECloudAlbumPopupContentViewProtocol> {
    BOOL needPanGesture;
    id<AWECloudAlbumPopupVCProtocol> delegate;
    ACCButton *_cancleButton;
    UIImageView *_flagImageView;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    ACCButton *_downloadButton;
    ACCButton *_closeButton;
    id /* block */ _cancleButtonAction;
    id /* block */ _closeAction;
    id /* block */ _downloadAction;
}

@property (retain, nonatomic) ACCButton *cancleButton;
@property (retain, nonatomic) UIImageView *flagImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) ACCButton *downloadButton;
@property (retain, nonatomic) ACCButton *closeButton;
@property (copy, nonatomic) id /* block */ cancleButtonAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ downloadAction;
@property (weak, nonatomic) id<AWECloudAlbumPopupVCProtocol> delegate;
@property (nonatomic) BOOL needPanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (id)cancleButton;
- (void)setCancleButton:(id)arg0;
- (BOOL)needPanGesture;
- (void)setNeedPanGesture:(BOOL)arg0;
- (void)cancleAction;
- (void)setCancleButtonAction:(id /* block */)arg0;
- (void)setDownloadAction:(id /* block */)arg0;
- (id)flagImageView;
- (id /* block */)cancleButtonAction;
- (id /* block */)downloadAction;
- (void)cancleClickAction:(id)arg0;
- (void)downloadClickAction:(id)arg0;
- (void)closeClickAction:(id)arg0;
- (id)initWithCancleAction:(id /* block */)arg0 closeAction:(id /* block */)arg1 downloadAction:(id /* block */)arg2;
- (void)setFlagImageView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)delegate;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg0;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)downloadButton;
- (double)contentViewHeight;
- (void)setDownloadButton:(id)arg0;

@end