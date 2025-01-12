//
//     Generated by private class-dump
//

@class IESGCPXPlayGameModel, NSArray, UIView, UIViewController;
@protocol IESGCPXPlayGameResolution, XPlayItemProtocol;

@protocol IESGCPXPlayGameInstance <NSObject>

+ (id)loadingPageConfigWithGameId:(id)arg0 playType:(long long)arg1;

@property (readonly, nonatomic) UIViewController *controller;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) long long orientation;
@property (readonly, copy, nonatomic) NSArray *supportResolutions;
@property (readonly, nonatomic) id<IESGCPXPlayGameResolution> currentResolution;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) IESGCPXPlayGameModel *gameModel;
@property (retain, nonatomic) id<XPlayItemProtocol> xPlayItem;
@property (readonly, nonatomic) BOOL isPause;

- (void)setIsShowing:(BOOL)arg0;
- (void)setAudioMute:(BOOL)arg0;
- (BOOL)startNetworkDetection;
- (void)stopRecord;
- (void)startRecord;
- (BOOL)isPause;
- (id)supportResolutions;
- (id)sendCustomMessage:(id)arg0;
- (void)switchResolution:(id)arg0 callback:(id /* block */)arg1;
- (void)stopNetworkDetection;
- (id)xPlayItem;
- (void)setXPlayItem:(id)arg0;
- (id)serviceGameInfo;
- (BOOL)supportDownload;
- (id)functionPanelItems;
- (void)hideKeyboard:(id /* block */)arg0;
- (void)getDownloadInfoWithCallback:(id /* block */)arg0;
- (void)queryCollectStatusWithCompletion:(id /* block */)arg0;
- (void)updateCollectStatus:(BOOL)arg0 withCompletion:(id /* block */)arg1;
- (void)resume;
- (void)preload;
- (void)stop;
- (long long)orientation;
- (id)controller;
- (BOOL)isShowing;
- (void)dequeue;
- (void)play;
- (void)pause;
- (id)view;
- (id)currentResolution;
- (id)gameModel;
- (void)setGameModel:(id)arg0;

@optional

- (void)downloadGame;
- (id)downloadActionTitle;

@end
