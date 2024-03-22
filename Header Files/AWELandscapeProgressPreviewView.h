//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, UIImage, NSString, UIImageView, AWEBigThumbModel, NSMutableDictionary, UILabel, AWELandscapeChapterView;

@interface AWELandscapeProgressPreviewView : UIView {
    BOOL _requestBigThumb;
    UIImageView *_previewImageView;
    UIView *_timeContainer;
    UILabel *_targetTimeLabel;
    UILabel *_lineLabel;
    UILabel *_totalTimelabel;
    AWELandscapeChapterView *_chapterView;
    AWEAwemeModel *_model;
    AWEBigThumbModel *_dashThumbModel;
    UIImage *_engineBigImage;
    NSMutableDictionary *_engineBigImageDict;
    NSMutableDictionary *_requestBigThumbDict;
    NSString *_enterFrom;
}

@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIView *timeContainer;
@property (retain, nonatomic) UILabel *targetTimeLabel;
@property (retain, nonatomic) UILabel *lineLabel;
@property (retain, nonatomic) UILabel *totalTimelabel;
@property (retain, nonatomic) AWELandscapeChapterView *chapterView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEBigThumbModel *dashThumbModel;
@property (retain, nonatomic) UIImage *engineBigImage;
@property (retain, nonatomic) NSMutableDictionary *engineBigImageDict;
@property (retain, nonatomic) NSMutableDictionary *requestBigThumbDict;
@property (nonatomic) BOOL requestBigThumb;
@property (copy, nonatomic) NSString *enterFrom;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)chapterView;
- (void)setChapterView:(id)arg0;
- (id)dashThumbInfo;
- (void)setDashThumbModel:(id)arg0;
- (id)targetTimeLabel;
- (id)dashThumbModel;
- (id)engineBigImage;
- (BOOL)requestBigThumb;
- (void)setRequestBigThumb:(BOOL)arg0;
- (void)setEngineBigImage:(id)arg0;
- (void)getVideoPreviewImageIndex:(long long)arg0 completion:(id /* block */)arg1;
- (id)framePreviewImageForProgress:(double)arg0 totalDuration:(double)arg1 originalImage:(id)arg2;
- (void)updateWithModel:(id)arg0 enterFrom:(id)arg1;
- (void)setTimeContainer:(id)arg0;
- (void)setTargetTimeLabel:(id)arg0;
- (BOOL)isNewThumbnailData;
- (id)getThumbnailImgUrlByModel:(id)arg0 index:(long long)arg1;
- (void)setEngineBigImageDict:(id)arg0;
- (void)setRequestBigThumbDict:(id)arg0;
- (id)engineBigImageDict;
- (id)requestBigThumbDict;
- (BOOL)hasChapterList;
- (id)totalTimelabel;
- (long long)getProgressThumbIndexWithTaregtTime:(double)arg0 totalTime:(double)arg1;
- (void)refreshPreviewImageWithTaregtTime:(double)arg0 totalTime:(double)arg1;
- (id)targetEngineBigImageWithTaregtTime:(double)arg0 totalTime:(double)arg1;
- (void)showPreviewWithTaregtTime:(double)arg0 totalTime:(double)arg1;
- (void)scrollChapterToIndex:(long long)arg0 animated:(BOOL)arg1;
- (void)setTotalTimelabel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)reset;
- (id)lineLabel;
- (void)setLineLabel:(id)arg0;
- (void)setupUI;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg0;
- (id)timeContainer;

@end
