//
//     Generated by private class-dump
//

@class UIImageView, IESLiveScreenRecordStore, IESLiveRecordProgressView;

@interface IESLiveBackRecordToolbarItem : UIView {
    BOOL _isLandscape;
    UIImageView *_imageView;
    IESLiveRecordProgressView *_progressView;
    IESLiveScreenRecordStore *_store;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESLiveRecordProgressView *progressView;
@property (retain, nonatomic) IESLiveScreenRecordStore *store;
@property (nonatomic) BOOL isLandscape;

- (void)bindStore:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (id)imageView;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setImageView:(id)arg0;
- (void)setStore:(id)arg0;
- (void)setStatus:(unsigned long long)arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (BOOL)isLandscape;
- (void)setProgress:(double)arg0;
- (void)setupUI;

@end
