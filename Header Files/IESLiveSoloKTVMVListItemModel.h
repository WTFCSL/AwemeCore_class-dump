//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveSoloKTVMVListItemModel : NSObject {
    BOOL _hasVideoCache;
    BOOL _isSelected;
    NSString *_title;
    NSString *_coverURL;
    NSString *_vid;
    NSString *_videoPath;
    NSString *_videoURL;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *coverURL;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) NSString *videoURL;
@property (nonatomic) BOOL hasVideoCache;
@property (nonatomic) BOOL isSelected;

- (id)vid;
- (void)setVid:(id)arg0;
- (id)initWithMV:(id)arg0 dir:(id)arg1 needTitle:(BOOL)arg2;
- (void)setHasVideoCache:(BOOL)arg0;
- (BOOL)hasVideoCache;
- (id)videoURL;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setVideoURL:(id)arg0;
- (BOOL)isSelected;
- (void)setTitle:(id)arg0;
- (id)videoPath;
- (void)setVideoPath:(id)arg0;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end
