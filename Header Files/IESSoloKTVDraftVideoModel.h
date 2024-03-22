//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, IESSoloKTVDraftColorsModel;

@interface IESSoloKTVDraftVideoModel : NSObject {
    NSString *_videoID;
    NSString *_coverUrl;
    NSMutableArray *_videoURLs;
    NSString *_path;
    IESSoloKTVDraftColorsModel *_colors;
}

@property (retain, nonatomic) NSString *videoID;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSMutableArray *videoURLs;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) IESSoloKTVDraftColorsModel *colors;

- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (id)videoURLs;
- (void)setVideoURLs:(id)arg0;
- (BOOL)checkPathExist;
- (void)setPath:(id)arg0;
- (id)init;
- (void)setColors:(id)arg0;
- (void).cxx_destruct;
- (id)path;
- (id)colors;
- (id)videoID;
- (void)setVideoID:(id)arg0;

@end
