//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, NSArray, AWEImageAlbumImageModel, ACCStickerContainerView, NSString, NSMutableArray, AWEFeedStickerContainerView;

@interface AWEFeedAlbumStickerDisplayManager : NSObject <AWEFeedAlbumStickerDisplayManagerProtocol> {
    BOOL _isPlay;
    long long index;
    AWEAwemeModel *_awemeModel;
    NSString *_enterFrom;
    AWEImageAlbumImageModel *_model;
    AWEFeedStickerContainerView *_containerView;
    ACCStickerContainerView *_stickerContainer;
    UIView *_container;
    NSArray *_handlers;
    unsigned long long _scene;
    NSMutableArray *_stickerFrameArray;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetContainerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetPlayerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _searchStickerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pauseIconFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _leftContainerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rightContainerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bottomContainerFrame;
}

@property (retain, nonatomic) AWEImageAlbumImageModel *model;
@property (retain, nonatomic) AWEFeedStickerContainerView *containerView;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;
@property (weak, nonatomic) UIView *container;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetPlayerFrame;
@property (copy, nonatomic) NSArray *handlers;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } searchStickerFrame;
@property (retain, nonatomic) NSMutableArray *stickerFrameArray;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pauseIconFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bottomContainerFrame;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isPlay;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithContainer:(id)arg0;
+ (void)processAlbumImagesData:(id)arg0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateImageRectForImage:(struct CGSize { double x0; double x1; })arg0 imageViewSize:(struct CGSize { double x0; double x1; })arg1 contentMode:(long long)arg2;

- (id)awemeModel;
- (void)setEnterFrom:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (id)enterFrom;
- (BOOL)stickersDidTap:(struct CGPoint { double x0; double x1; })arg0;
- (void)setPauseIconFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setLeftContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setRightContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBottomContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)hideStickers;
- (void)showStickers;
- (void)hideAllStickers;
- (void)showAllStickers;
- (void)setIsPlay:(BOOL)arg0;
- (BOOL)isPlay;
- (BOOL)stickersDidLongPress:(struct CGPoint { double x0; double x1; })arg0;
- (void)removeStickers:(BOOL)arg0;
- (void)displaySearchStickers:(id)arg0 animated:(BOOL)arg1;
- (void)stickerWillAppear;
- (void)configWithContainer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (id)displayContainer;
- (void)displayStickers:(id)arg0 animated:(BOOL)arg1;
- (void)dismissStickers;
- (BOOL)isOverlap;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (void)setupContainer:(id)arg0;
- (void)setTargetContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTargetPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)targetHandlerForTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetPlayerFrame;
- (void)createSearchHandlers;
- (void)stickerDisplayAnimated:(BOOL)arg0;
- (void)setStickerFrameArray:(id)arg0;
- (void)setSearchStickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustStickerFrame:(id)arg0;
- (id)stickerFrameArray;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchStickerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tryAdjustStickerPauseFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bottomContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pauseIconFrame;
- (id)container;
- (void)setHandlers:(id)arg0;
- (void)setModel:(id)arg0;
- (id)handlers;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setIndex:(long long)arg0;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setContainer:(id)arg0;
- (void)setContainerView:(id)arg0;
- (long long)index;
- (id)containerView;
- (unsigned long long)scene;

@end