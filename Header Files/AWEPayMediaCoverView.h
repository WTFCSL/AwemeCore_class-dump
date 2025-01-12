//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIImage, AWEIMDouyinRedPacketDataManager, AWEIMDouyinRedPacketCoverModel;
@protocol AWEIMDouyinRedPacketMessageProtocol, IESVideoPlayerProtocol;

@interface AWEPayMediaCoverView : UIView <IESVideoPlayerDelegate> {
    long long _coverType;
    UIImageView *_blankCoverView;
    id<AWEIMDouyinRedPacketMessageProtocol> _message;
    UIImage *_defaultCover;
    UIImageView *_coverImageView;
    id<IESVideoPlayerProtocol> _player;
    NSString *_coverUrl;
    AWEIMDouyinRedPacketDataManager *_dataManager;
    long long _scene;
    NSString *_coverId;
    AWEIMDouyinRedPacketCoverModel *_model;
}

@property (retain, nonatomic) id<AWEIMDouyinRedPacketMessageProtocol> message;
@property (retain, nonatomic) UIImage *defaultCover;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> player;
@property (nonatomic) long long coverType;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) AWEIMDouyinRedPacketDataManager *dataManager;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *coverId;
@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *model;
@property (retain, nonatomic) UIImageView *blankCoverView;
@property (readonly, nonatomic) double topCoverOverFlowHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)arg0;
- (void)setCoverUrl:(id)arg0;
- (void)setCoverType:(long long)arg0;
- (long long)coverType;
- (id)coverUrl;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)coverId;
- (void)setCoverId:(id)arg0;
- (id)blankCoverView;
- (double)topCoverOverFlowHeight;
- (void)p_setupBlankCoverUI;
- (void)p_initImageCover;
- (void)p_initVideoPlayer;
- (void)p_initOfficialCover;
- (id)defaultCover;
- (void)p_playWithUrl:(id)arg0;
- (id)p_defaultCover;
- (void)setupBlankCoverView:(id)arg0;
- (id)initWithMessage:(id)arg0 scene:(long long)arg1;
- (id)initWithCoverModel:(id)arg0 scene:(long long)arg1;
- (void)pullCover:(BOOL)arg0;
- (void)setBlankCoverView:(id)arg0;
- (void)setDefaultCover:(id)arg0;
- (id)dataManager;
- (void)setMessage:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)message;
- (void)setPlayer:(id)arg0;
- (void)setDataManager:(id)arg0;
- (void)layoutSubviews;
- (void)play;
- (void)pause;
- (void)reset;
- (long long)scene;
- (id)player;
- (void)p_init;

@end
