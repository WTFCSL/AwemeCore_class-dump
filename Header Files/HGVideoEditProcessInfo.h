//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, VEEditorSession, NSMutableArray, HTSVideoData;

@interface HGVideoEditProcessInfo : NSObject {
    BOOL _canceling;
    BOOL _transing;
    BOOL _lazyCancel;
    long long _editType;
    NSString *_videoPath;
    double _totalClipDuration;
    NSDictionary *_effectConfig;
    NSMutableArray *_clipInfos;
    NSArray *_stickerInfos;
    id /* block */ _progressCallback;
    id /* block */ _completionBlock;
    VEEditorSession *_editorSession;
    HTSVideoData *_videoData;
    struct CGSize { double width; double height; } _videoResolution;
}

@property (nonatomic) long long editType;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) struct CGSize { double width; double height; } videoResolution;
@property (nonatomic) double totalClipDuration;
@property (copy, nonatomic) NSDictionary *effectConfig;
@property (retain, nonatomic) NSMutableArray *clipInfos;
@property (copy, nonatomic) NSArray *stickerInfos;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) VEEditorSession *editorSession;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (nonatomic) BOOL canceling;
@property (nonatomic) BOOL transing;
@property (nonatomic) BOOL lazyCancel;

- (id)videoData;
- (void)setVideoData:(id)arg0;
- (void)setProgressCallback:(id /* block */)arg0;
- (id /* block */)progressCallback;
- (void)setEditType:(long long)arg0;
- (void)setEffectConfig:(id)arg0;
- (void)setEditorSession:(id)arg0;
- (id)editorSession;
- (void)setStickerInfos:(id)arg0;
- (id)stickerInfos;
- (void)setClipInfos:(id)arg0;
- (BOOL)transing;
- (void)setLazyCancel:(BOOL)arg0;
- (void)setTransing:(BOOL)arg0;
- (BOOL)lazyCancel;
- (void).cxx_destruct;
- (id)effectConfig;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (BOOL)canceling;
- (void)setCanceling:(BOOL)arg0;
- (id)videoPath;
- (void)setVideoPath:(id)arg0;
- (struct CGSize { double x0; double x1; })videoResolution;
- (id)clipInfos;
- (long long)editType;
- (void)setVideoResolution:(struct CGSize { double x0; double x1; })arg0;
- (void)setTotalClipDuration:(double)arg0;
- (double)totalClipDuration;

@end
