//
//     Generated by private class-dump
//

@class NSString, CSJCoverView;

@interface CSJBackupRenderNativeStrategy : CSJBackupRenderStrategy <CSJCoverViewDelegate> {
    CSJCoverView *_coverView;
}

@property (retain, nonatomic) CSJCoverView *coverView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)renderType;
- (void)async_to_main_render_really;
- (void)render_really;
- (void)updateWithThemeStatus:(long long)arg0;
- (id)logKeyName;
- (void)coverViewClick:(id)arg0 areaCategory:(long long)arg1 clickExtraInfo:(id)arg2;
- (void)coverViewClickVideo:(id)arg0;
- (void)coverViewClickClose:(id)arg0;
- (void)coverViewClickAdLogo:(id)arg0;
- (void)coverViewClickDownload:(id)arg0 clickExtraInfo:(id)arg1;
- (long long)playerTotalTime;
- (void).cxx_destruct;
- (void)render;
- (double)playerCurrentTime;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end
