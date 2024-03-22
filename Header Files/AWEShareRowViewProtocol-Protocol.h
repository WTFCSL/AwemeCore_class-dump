//
//     Generated by private class-dump
//

@class AWEAwemeModel;
@protocol AWEShareRowViewDelegate;

@protocol AWEShareRowViewProtocol <NSObject>

@property (nonatomic) BOOL isFirstRow;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) id<AWEShareRowViewDelegate> shareDelegate;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (void)playBounceAnimationAfterDelay:(double)arg0;
- (BOOL)isFirstRow;
- (void)setIsFirstRow:(BOOL)arg0;
- (id)shareDelegate;
- (void)setShareDelegate:(id)arg0;

@end
