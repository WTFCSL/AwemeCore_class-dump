//
//     Generated by private class-dump
//

@interface AWEShareDownloadImageChannel : AWEShareBaseChannel {
    long long _shareCategory;
}

@property (nonatomic) long long shareCategory;

- (void)setConfigModel:(id)arg0;
- (id)shareImage;
- (long long)shareCategory;
- (void)shareWithCompletion:(id /* block */)arg0;
- (void)setShareCategory:(long long)arg0;
- (BOOL)showGenarateImageChannelWithContext:(id)arg0;
- (void)p_saveCutHybridViewToAlbumWithCompletion:(id /* block */)arg0;
- (id)commonPreviewStat;
- (void)p_showToastWithSaveSuccess:(BOOL)arg0;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)arg0;

@end
