//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAntiAddictPreviewControlViewModel : NSObject {
    BOOL _isEditable;
    BOOL _isRestRemind;
    unsigned long long _previewVideoType;
    NSString *_aid;
    NSString *_mainTitle;
    NSString *_subtitle;
    NSString *_videoTag;
    NSString *_prePage;
}

@property (nonatomic) unsigned long long previewVideoType;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isRestRemind;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *videoTag;
@property (copy, nonatomic) NSString *prePage;

- (void)setPrePage:(id)arg0;
- (id)prePage;
- (id)videoTag;
- (void)setVideoTag:(id)arg0;
- (void)setIsRestRemind:(BOOL)arg0;
- (void)setPreviewVideoType:(unsigned long long)arg0;
- (BOOL)isRestRemind;
- (unsigned long long)previewVideoType;
- (BOOL)useDefaultTitle;
- (void)initTitles;
- (id)initWithAwemeID:(id)arg0 previewVideoType:(unsigned long long)arg1 isEditable:(BOOL)arg2 isRestRemind:(BOOL)arg3 videoTag:(id)arg4 prePage:(id)arg5;
- (void)setIsEditable:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (id)subtitle;
- (void)setSubtitle:(id)arg0;
- (id)mainTitle;
- (void)setMainTitle:(id)arg0;
- (void)setAid:(id)arg0;
- (id)aid;

@end