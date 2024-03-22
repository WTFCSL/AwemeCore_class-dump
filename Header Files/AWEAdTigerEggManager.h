//
//     Generated by private class-dump
//

@class AWEPlayInteractionViewController, AWEAwemeModel, UIView, BDImageView;
@protocol AWEAdTigerFromEastManager;

@interface AWEAdTigerEggManager : NSObject {
    BOOL _hasEnterTargetPage;
    id<AWEAdTigerFromEastManager> _delegate;
    BDImageView *_tigerEggView;
    UIView *_maskView;
    long long _showTigerEggViewFailType;
    AWEAwemeModel *_model;
    AWEPlayInteractionViewController *_interactionVC;
}

@property (retain, nonatomic) BDImageView *tigerEggView;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) long long showTigerEggViewFailType;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPlayInteractionViewController *interactionVC;
@property (nonatomic) BOOL hasEnterTargetPage;
@property (weak, nonatomic) id<AWEAdTigerFromEastManager> delegate;

+ (void)preFetchDataIfNeeded:(id)arg0 isTV:(BOOL)arg1;
+ (void)removeTVPreFetchData:(id)arg0;
+ (void)removeFeedPreFetchData;
+ (void)initTigerEggCache;
+ (void)trackTigerEgg:(id)arg0 resultType:(long long)arg1 extraData:(id)arg2 awemeModel:(id)arg3 preLoadType:(long long)arg4;

- (id)interactionVC;
- (void)trackWithEvent:(id)arg0 label:(id)arg1 refer:(id)arg2 extraData:(id)arg3;
- (void)setInteractionVC:(id)arg0;
- (void)trackTigerEgg:(id)arg0 resultType:(long long)arg1 extraData:(id)arg2 preLoadType:(long long)arg3;
- (void)setupTigerEggWithImage:(id)arg0;
- (long long)showTigerEggViewFailType;
- (void)setShowTigerEggViewFailType:(long long)arg0;
- (id)tigerEggView;
- (void)setTigerEggView:(id)arg0;
- (BOOL)hasEnterTargetPage;
- (void)setHasEnterTargetPage:(BOOL)arg0;
- (void)finishPlayTigerEgg;
- (void)preLoadData:(id)arg0;
- (void)playTigerEggWithInteractionVC:(id)arg0;
- (void)setPlayVideoMute:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (id)maskView;
- (id)delegate;
- (void)applicationDidEnterBackground;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)setMaskView:(id)arg0;

@end
