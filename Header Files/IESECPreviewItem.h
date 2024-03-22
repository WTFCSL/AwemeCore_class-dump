//
//     Generated by private class-dump
//

@class IESECVideoPlayerView, NSArray, UIImageView, NSString, UIView, IESECHeadVideoModel;
@protocol IESECVideoPlayerViewDelegate, IESECMediaPreviewResetVideoDelegate, IESECommerceKolVideoDataControllerProtocol;

@interface IESECPreviewItem : NSObject {
    BOOL _scaleToFillWidth;
    BOOL _scrollToTop;
    unsigned long long _itemType;
    NSArray *_urlList;
    UIImageView *_placeholderView;
    UIImageView *_bgImageView;
    UIView *_bgView;
    IESECVideoPlayerView *_videoPlayerView;
    id<IESECVideoPlayerViewDelegate> _videoPlayerViewOriginDelegate;
    IESECHeadVideoModel *_videoModel;
    UIView *_videoPlayerOriginSuperView;
    id<IESECMediaPreviewResetVideoDelegate> _videoResetDelegate;
    NSString *_findSameGoodsSchema;
    NSString *_coverImageURI;
    id<IESECommerceKolVideoDataControllerProtocol> _videoDetailDataController;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _videoPlayerOriginRect;
}

@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSArray *urlList;
@property (retain, nonatomic) UIImageView *placeholderView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL scaleToFillWidth;
@property (nonatomic) BOOL scrollToTop;
@property (retain, nonatomic) IESECVideoPlayerView *videoPlayerView;
@property (weak, nonatomic) id<IESECVideoPlayerViewDelegate> videoPlayerViewOriginDelegate;
@property (retain, nonatomic) IESECHeadVideoModel *videoModel;
@property (retain, nonatomic) UIView *videoPlayerOriginSuperView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoPlayerOriginRect;
@property (weak, nonatomic) id<IESECMediaPreviewResetVideoDelegate> videoResetDelegate;
@property (copy, nonatomic) NSString *findSameGoodsSchema;
@property (copy, nonatomic) NSString *coverImageURI;
@property (retain, nonatomic) id<IESECommerceKolVideoDataControllerProtocol> videoDetailDataController;

- (id)urlList;
- (void)setUrlList:(id)arg0;
- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (id)coverImageURI;
- (void)setScaleToFillWidth:(BOOL)arg0;
- (void)setFindSameGoodsSchema:(id)arg0;
- (void)setVideoDetailDataController:(id)arg0;
- (void)setVideoPlayerOriginSuperView:(id)arg0;
- (void)setVideoPlayerOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)scaleToFillWidth;
- (id)createBGImage;
- (id)videoPlayerViewOriginDelegate;
- (void)setVideoPlayerViewOriginDelegate:(id)arg0;
- (id)videoPlayerOriginSuperView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoPlayerOriginRect;
- (id)videoResetDelegate;
- (void)setVideoResetDelegate:(id)arg0;
- (id)findSameGoodsSchema;
- (void)setCoverImageURI:(id)arg0;
- (id)videoDetailDataController;
- (unsigned long long)itemType;
- (id)placeholderView;
- (void)setItemType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (BOOL)scrollToTop;
- (void)setPlaceholderView:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setScrollToTop:(BOOL)arg0;
- (id)videoPlayerView;
- (void)setVideoPlayerView:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;

@end