//
//     Generated by private class-dump
//

@class AWESingleColumnDetailPageContext, AWESingleColumnDetailAutoPlayHandler, NSString, AWEAwemeModel, UIViewController;
@protocol AWEAwemePlayVideoProtocol;

@interface AWESingleColumnDetailCardCell : UICollectionViewCell <AWESingleColumnDetailAutoPlayCardProtocol> {
    BOOL isActive;
    AWESingleColumnDetailAutoPlayHandler *autoPlayHandler;
    AWESingleColumnDetailPageContext *_context;
    AWEAwemeModel *_model;
    id /* block */ _playButtonClick;
    long long _cardIndex;
    UIViewController<AWEAwemePlayVideoProtocol> *_videoController;
}

@property (retain, nonatomic) AWESingleColumnDetailPageContext *context;
@property (nonatomic) long long cardIndex;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoProtocol> *videoController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ playButtonClick;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESingleColumnDetailAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAutoPlayHandler:(id)arg0;
- (id)autoPlayHandler;
- (void)setupSubViews;
- (void)setCardIndex:(long long)arg0;
- (long long)cardIndex;
- (id /* block */)playButtonClick;
- (void)configWithAwemeModel:(id)arg0 index:(long long)arg1 context:(id)arg2 videoController:(id)arg3 logExtraDict:(id)arg4;
- (void)trackSingleColumnDetailDisplayCard;
- (id)awe_getCurrentVideoViewController;
- (void)makeVideoControllerLayout;
- (void)updateVideoControllerLayout;
- (void)controlViewClicked;
- (void)setPlayButtonClick:(id /* block */)arg0;
- (void)makeMetaInfoViewLayout;
- (void)makeInteractionViewLayout;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)setContext:(id)arg0;
- (void)didResignActive;
- (id)model;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)context;
- (BOOL)isActive;
- (void)prepareForReuse;
- (void)play;
- (void)pause;
- (void)reset;
- (id)activeView;
- (id)videoController;
- (void)setVideoController:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end
