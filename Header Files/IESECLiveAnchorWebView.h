//
//     Generated by private class-dump
//

@class IESECLiveRoomContext, PuzzleHybridContainer;

@interface IESECLiveAnchorWebView : IESECLiveAnchorNavigationBaseView {
    BOOL _showTitleBar;
    IESECLiveRoomContext *_roomContext;
    PuzzleHybridContainer *_webView;
}

@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (retain, nonatomic) PuzzleHybridContainer *webView;
@property (nonatomic) BOOL showTitleBar;

- (void)setRoomContext:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 urlString:(id)arg1 showTitleBar:(BOOL)arg2 roomContext:(id)arg3;
- (double)navbarHeight;
- (void)setWebView:(id)arg0;
- (id)webView;
- (void).cxx_destruct;
- (void)pop;
- (BOOL)showTitleBar;
- (void)setShowTitleBar:(BOOL)arg0;
- (id)roomContext;

@end