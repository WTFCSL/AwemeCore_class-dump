//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, NSMutableArray;

@interface AWERepoECommerceRecordModel : NSObject <ACCRepositoryClipContextProtocol, NSCopying> {
    BOOL _multiSelect;
    BOOL _supportVideo;
    BOOL _preferCamera;
    NSMutableArray *_imageArray;
    NSMutableArray *_coverImageArray;
    NSMutableArray *_videoPathArray;
    NSMutableArray *_videoInfoArray;
    unsigned long long _maxSelectCount;
    unsigned long long _maxUploadImageCount;
    unsigned long long _maxUploadVideoCount;
    NSString *_enterFrom;
    NSString *_tips;
    id /* block */ _uploadCompletionBlock;
    NSDictionary *_commentsInfo;
    NSDictionary *_trackInfo;
    NSArray *_commentsArray;
    NSDictionary *_postInfo;
    unsigned long long _videoStyle;
    unsigned long long _scenes;
}

@property (retain, nonatomic) NSMutableArray *imageArray;
@property (retain, nonatomic) NSMutableArray *coverImageArray;
@property (retain, nonatomic) NSMutableArray *videoPathArray;
@property (retain, nonatomic) NSMutableArray *videoInfoArray;
@property (nonatomic) BOOL multiSelect;
@property (nonatomic) BOOL supportVideo;
@property (nonatomic) unsigned long long maxSelectCount;
@property (nonatomic) unsigned long long maxUploadImageCount;
@property (nonatomic) unsigned long long maxUploadVideoCount;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL preferCamera;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) id /* block */ uploadCompletionBlock;
@property (retain, nonatomic) NSDictionary *commentsInfo;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSArray *commentsArray;
@property (retain, nonatomic) NSDictionary *postInfo;
@property (nonatomic) unsigned long long videoStyle;
@property (nonatomic) unsigned long long scenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setImageArray:(id)arg0;
- (id)imageArray;
- (unsigned long long)videoStyle;
- (void)setVideoStyle:(unsigned long long)arg0;
- (void)willEnterEditPageFromClipPage:(id)arg0 originalPublishModel:(id)arg1;
- (id)commentsArray;
- (void)setCommentsArray:(id)arg0;
- (id)commentsInfo;
- (id)postInfo;
- (void)setCommentsInfo:(id)arg0;
- (void)setPostInfo:(id)arg0;
- (void)setVideoInfoArray:(id)arg0;
- (BOOL)preferCamera;
- (BOOL)supportVideo;
- (unsigned long long)maxUploadVideoCount;
- (unsigned long long)maxUploadImageCount;
- (void)setMaxUploadImageCount:(unsigned long long)arg0;
- (id)videoPathArray;
- (id)coverImageArray;
- (id)videoInfoArray;
- (unsigned long long)maxSelectCount;
- (void)setSupportVideo:(BOOL)arg0;
- (void)setMaxSelectCount:(unsigned long long)arg0;
- (void)setMaxUploadVideoCount:(unsigned long long)arg0;
- (void)setPreferCamera:(BOOL)arg0;
- (void)setVideoPathArray:(id)arg0;
- (void)setCoverImageArray:(id)arg0;
- (id)tips;
- (void)setUploadCompletionBlock:(id /* block */)arg0;
- (id /* block */)uploadCompletionBlock;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)scenes;
- (void)setTips:(id)arg0;
- (id)initWithParams:(id)arg0;
- (BOOL)multiSelect;
- (void)setMultiSelect:(BOOL)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (void)setScenes:(unsigned long long)arg0;

@end
