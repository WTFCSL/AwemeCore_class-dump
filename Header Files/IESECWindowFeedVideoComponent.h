//
//     Generated by private class-dump
//

@class UIImageView, UIView;
@protocol IESECWindowFeedVideoComponentModel;

@interface IESECWindowFeedVideoComponent : UIView <IESECLLComponent> {
    UIView *_playerContainer;
    id<IESECWindowFeedVideoComponentModel> _dataSource;
    UIImageView *_coverImageView;
    UIImageView *_playIcon;
    UIView *_linearGradient;
}

@property (retain, nonatomic) UIView *playerContainer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UIView *linearGradient;
@property (weak, nonatomic) id<IESECWindowFeedVideoComponentModel> dataSource;

+ (id /* block */)video:(id)arg0;

- (void)clickAction;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)updateUIWithModel:(id)arg0;
- (id)playIcon;
- (void)setPlayIcon:(id)arg0;
- (id)playerContainer;
- (void)setPlayerContainer:(id)arg0;
- (void)setLinearGradient:(id)arg0;
- (id)linearGradient;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end
