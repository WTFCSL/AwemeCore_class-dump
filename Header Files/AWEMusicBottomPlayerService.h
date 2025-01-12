//
//     Generated by private class-dump
//

@class NSString, RxMultipleDelegate, UIView;
@protocol AWEMusicBottomPlayerStatusProtocol, AWEMusicStreamingBottomPlayer;

@interface AWEMusicBottomPlayerService : HTSService <AWEMusicBottomPlayerService> {
    UIView<AWEMusicStreamingBottomPlayer> *showingBottomPlayer;
    RxMultipleDelegate<AWEMusicBottomPlayerStatusProtocol> *_multipleDelegate;
}

@property (retain, nonatomic) RxMultipleDelegate<AWEMusicBottomPlayerStatusProtocol> *multipleDelegate;
@property (weak, nonatomic) UIView<AWEMusicStreamingBottomPlayer> *showingBottomPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bottomPlayerWithoutAutoCreate:(id)arg0;
+ (id)bottomPlayerWith:(id)arg0;
+ (BOOL)isBottomPlayerShowing;
+ (double)safeBottomHeight;
+ (id)shared;
+ (void)addObserver:(id)arg0;
+ (void)removeObserver:(id)arg0;
+ (double)viewHeight;
+ (void)hook;

- (id)multipleDelegate;
- (void)setMultipleDelegate:(id)arg0;
- (id)showingBottomPlayer;
- (void)setShowingBottomPlayer:(id)arg0;
- (void)bottomPlayerWillShow:(id)arg0;
- (void)bottomPlayerWillDismiss:(id)arg0;
- (void).cxx_destruct;
- (void)addObserver:(id)arg0;
- (void)removeObserver:(id)arg0;

@end
