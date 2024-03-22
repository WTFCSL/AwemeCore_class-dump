//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWEAwemeModel;

@interface CMCFeedPlayableContenxt : CMCContext {
    NSString *_urlString;
    UIViewController *_playableViewController;
    id /* block */ _alphaPlayerShowResult;
    AWEAwemeModel *_aweme;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _liveRenderSuperViewFame;
}

@property (copy, nonatomic) NSString *urlString;
@property (weak, nonatomic) UIViewController *playableViewController;
@property (copy, nonatomic) id /* block */ alphaPlayerShowResult;
@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } liveRenderSuperViewFame;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (void)setLiveRenderSuperViewFame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })liveRenderSuperViewFame;
- (void)setPlayableViewController:(id)arg0;
- (void)setAlphaPlayerShowResult:(id /* block */)arg0;
- (id)playableViewController;
- (id /* block */)alphaPlayerShowResult;
- (id)urlString;
- (void).cxx_destruct;
- (void)setUrlString:(id)arg0;

@end
