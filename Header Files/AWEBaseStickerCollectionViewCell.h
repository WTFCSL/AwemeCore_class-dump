//
//     Generated by private class-dump
//

@class NSString, ACCStickerPannelUIConfig, UIImageView, AWECircularProgressView;

@interface AWEBaseStickerCollectionViewCell : UICollectionViewCell {
    unsigned long long _downloadStatus;
    ACCStickerPannelUIConfig *_uiConfig;
    NSString *_stickerName;
    UIImageView *_imageView;
    UIImageView *_downloadImgView;
    AWECircularProgressView *_downloadProgressView;
    NSString *_stickerId;
}

@property (nonatomic) unsigned long long downloadStatus;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;
@property (copy, nonatomic) NSString *stickerName;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *downloadImgView;
@property (retain, nonatomic) AWECircularProgressView *downloadProgressView;
@property (copy, nonatomic) NSString *stickerId;

+ (id)identifier;

- (void)setStickerId:(id)arg0;
- (id)uiConfig;
- (id)stickerId;
- (void)setUiConfig:(id)arg0;
- (void)downloadProgressViewScaleDisappear;
- (void)configCellWithImage:(id)arg0;
- (id)downloadImgView;
- (void)setDownloadImgView:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (void)didMoveToWindow;
- (void)setHighlighted:(BOOL)arg0;
- (BOOL)isAccessibilityElement;
- (void)setupUI;
- (id)stickerName;
- (void)setStickerName:(id)arg0;
- (unsigned long long)downloadStatus;
- (void)setDownloadStatus:(unsigned long long)arg0;
- (void)updateDownloadProgress:(double)arg0;
- (id)downloadProgressView;
- (void)setDownloadProgressView:(id)arg0;

@end
