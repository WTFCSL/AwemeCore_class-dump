//
//     Generated by private class-dump
//

@class UIImageView, NSString;

@interface ACCCustomStickerCollectionViewCell : ACCFunctionStickerCollectionViewCell {
    BOOL _isLoad;
    UIImageView *_coverView;
    NSString *_lastId;
}

@property (retain, nonatomic) UIImageView *coverView;
@property (nonatomic) BOOL isLoad;
@property (copy, nonatomic) NSString *lastId;

- (void)setIsLoad:(BOOL)arg0;
- (BOOL)isLoad;
- (void)configCellWithInfoStickerModel:(id)arg0 compeletion:(id /* block */)arg1;
- (void)configCellWithEffectModel:(id)arg0;
- (void)configCellWithCoverImage;
- (id)lastId;
- (void)setLastId:(id)arg0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setDownloadStatus:(unsigned long long)arg0;
- (void)updateDownloadProgress:(double)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end
