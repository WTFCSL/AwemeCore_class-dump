//
//     Generated by private class-dump
//

@class NSString, UIView, AWEAwemeModel;
@protocol AWECommentGuideDelegate;

@protocol AWEAdCommentGuideView <AWECrotocol>

@property (nonatomic, retain) AWEAwemeModel *model;
@property (nonatomic) BOOL isShowing;
@property (nonatomic, weak) id<AWECommentGuideDelegate> delegate;
@property (nonatomic) long long sceneType;
@property (nonatomic, copy) NSString *referString;
@property (nonatomic, retain) UIView *effectView;

- (id)referString;
- (void)setIsShowing:(BOOL)arg0;
- (void)setReferString:(id)arg0;
- (void)onUIThemeChange;
- (void)setModel:(id)arg0;
- (id)effectView;
- (id)model;
- (BOOL)isShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setEffectView:(id)arg0;
- (void)setDelegate:(id)arg0;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;

@end