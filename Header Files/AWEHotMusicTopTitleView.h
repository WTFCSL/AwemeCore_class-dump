//
//     Generated by private class-dump
//

@class AWEHotMusicNameLoopView, NSString, UIImageView, UIView, AWEGradientView, UILabel;

@interface AWEHotMusicTopTitleView : UIView {
    UIImageView *_icon;
    UIView *_musicNameContainer;
    AWEHotMusicNameLoopView *_musicNameView;
    UIView *_rankAndAuthorView;
    AWEGradientView *_gradientView;
    UILabel *_rankLabel;
    UILabel *_dotLabel;
    UILabel *_hotMusicTagLabel;
    UILabel *_authorLabel;
    NSString *_currentMusicName;
}

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIView *musicNameContainer;
@property (retain, nonatomic) AWEHotMusicNameLoopView *musicNameView;
@property (retain, nonatomic) UIView *rankAndAuthorView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *dotLabel;
@property (retain, nonatomic) UILabel *hotMusicTagLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (copy, nonatomic) NSString *currentMusicName;

- (void)setAuthorLabel:(id)arg0;
- (id)authorLabel;
- (id)dotLabel;
- (void)setDotLabel:(id)arg0;
- (void)updateViewWithMusicRank:(id)arg0 musicName:(id)arg1 author:(id)arg2;
- (id)musicNameContainer;
- (id)rankAndAuthorView;
- (id)hotMusicTagLabel;
- (id)currentMusicName;
- (void)setCurrentMusicName:(id)arg0;
- (id)musicNameView;
- (void)setMusicNameView:(id)arg0;
- (double)calculateMusicNameContainerLengthWithText:(id)arg0;
- (id)addStrokeWithString:(id)arg0;
- (void)setMusicNameContainer:(id)arg0;
- (void)setRankAndAuthorView:(id)arg0;
- (void)setHotMusicTagLabel:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setIcon:(id)arg0;
- (id)gradientView;
- (void)setupUI;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;

@end