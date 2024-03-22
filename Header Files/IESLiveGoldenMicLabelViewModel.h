//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol IESLiveGoldenLabelViewModelDelegate;

@interface IESLiveGoldenMicLabelViewModel : NSObject {
    BOOL _isNewStyle;
    BOOL _isVideoLive;
    BOOL _isLandscape;
    BOOL _isAnimating;
    BOOL _isSilverAnimatingInGoldenScene;
    BOOL _isBackGround;
    BOOL _goldenMicV3;
    int _currentShowingType;
    id<IESLiveGoldenLabelViewModelDelegate> _delegate;
    double _distanceFromIconToLeft;
    double _distanceFromIconToTop;
    double _distanceFromLabelToIcon;
    double _distanceFromLabelToTop;
    double _fontSize;
    long long _goldenMicCount;
    long long _silverMicCount;
    NSString *_goldMicText;
    NSString *_textColor;
    NSString *_bgColor;
    NSMutableArray *_waitingItemArrays;
    struct CGSize { double width; double height; } _viewSize;
}

@property (weak, nonatomic) id<IESLiveGoldenLabelViewModelDelegate> delegate;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL isVideoLive;
@property (nonatomic) double distanceFromIconToLeft;
@property (nonatomic) double distanceFromIconToTop;
@property (nonatomic) double distanceFromLabelToIcon;
@property (nonatomic) double distanceFromLabelToTop;
@property (nonatomic) double fontSize;
@property (nonatomic) long long goldenMicCount;
@property (nonatomic) long long silverMicCount;
@property (copy, nonatomic) NSString *goldMicText;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isSilverAnimatingInGoldenScene;
@property (nonatomic) int currentShowingType;
@property (nonatomic) BOOL isBackGround;
@property (nonatomic) BOOL goldenMicV3;
@property (retain, nonatomic) NSMutableArray *waitingItemArrays;

- (BOOL)isNewStyle;
- (void)setIsNewStyle:(BOOL)arg0;
- (id)initWithConfig:(id)arg0 diContext:(id)arg1;
- (BOOL)isBackGround;
- (void)setIsBackGround:(BOOL)arg0;
- (long long)goldenMicCount;
- (void)setGoldenMicCount:(long long)arg0;
- (void)setDistanceFromIconToTop:(double)arg0;
- (void)setDistanceFromIconToLeft:(double)arg0;
- (void)setDistanceFromLabelToTop:(double)arg0;
- (void)setDistanceFromLabelToIcon:(double)arg0;
- (void)updateMicLabelCount:(id)arg0;
- (void)setIsVideoLive:(BOOL)arg0;
- (double)distanceFromIconToLeft;
- (double)distanceFromIconToTop;
- (double)distanceFromLabelToIcon;
- (double)distanceFromLabelToTop;
- (long long)silverMicCount;
- (void)setWaitingItemArrays:(id)arg0;
- (void)setupBackgroundNotification;
- (id)waitingItemArrays;
- (void)showMicAnimationWithItem:(id)arg0;
- (id)goldMicText;
- (void)checkWaitingItemsArray;
- (id)getSingingLabelConfig;
- (BOOL)isVideoLive;
- (void)setSilverMicCount:(long long)arg0;
- (void)setGoldMicText:(id)arg0;
- (BOOL)isSilverAnimatingInGoldenScene;
- (void)setIsSilverAnimatingInGoldenScene:(BOOL)arg0;
- (int)currentShowingType;
- (void)setCurrentShowingType:(int)arg0;
- (BOOL)goldenMicV3;
- (void)setGoldenMicV3:(BOOL)arg0;
- (BOOL)isAnimating;
- (void)appDidEnterBackground:(id)arg0;
- (void).cxx_destruct;
- (void)setFontSize:(double)arg0;
- (double)fontSize;
- (void)setIsLandscape:(BOOL)arg0;
- (id)delegate;
- (struct CGSize { double x0; double x1; })viewSize;
- (BOOL)isLandscape;
- (void)appWillEnterForeground:(id)arg0;
- (void)setTextColor:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setIsAnimating:(BOOL)arg0;
- (id)textColor;
- (void)setViewSize:(struct CGSize { double x0; double x1; })arg0;
- (id)bgColor;
- (void)setBgColor:(id)arg0;

@end