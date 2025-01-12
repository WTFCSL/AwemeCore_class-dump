//
//     Generated by private class-dump
//

@class UIColor, GPBDoubleArray, IESLiveDressResourceWebP, UIView, NSNumber;

@interface IESLiveUserCardPopupItemModel : NSObject {
    BOOL _landscape;
    BOOL _fullScreenOnLandscape;
    UIView *_view;
    UIView *_backgroundContainer;
    UIColor *_backgroundColor;
    double _openInterval;
    GPBDoubleArray *_openRateCurveArray;
    double _closeInterval;
    GPBDoubleArray *_closeRateCurveArray;
    IESLiveDressResourceWebP *_closeCardWebp;
    id /* block */ _usercardCloseBlock;
    NSNumber *_uid;
    id /* block */ _onShowCompletion;
    double _landscapeWidth;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _backgroundFrame;
}

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundFrame;
@property (nonatomic) BOOL landscape;
@property (nonatomic) double openInterval;
@property (retain, nonatomic) GPBDoubleArray *openRateCurveArray;
@property (nonatomic) double closeInterval;
@property (retain, nonatomic) GPBDoubleArray *closeRateCurveArray;
@property (retain, nonatomic) IESLiveDressResourceWebP *closeCardWebp;
@property (copy, nonatomic) id /* block */ usercardCloseBlock;
@property (retain, nonatomic) NSNumber *uid;
@property (copy, nonatomic) id /* block */ onShowCompletion;
@property (nonatomic) BOOL fullScreenOnLandscape;
@property (nonatomic) double landscapeWidth;

- (void)setOnShowCompletion:(id /* block */)arg0;
- (double)openInterval;
- (id)openRateCurveArray;
- (id)closeRateCurveArray;
- (id)closeCardWebp;
- (void)setOpenInterval:(double)arg0;
- (void)setOpenRateCurveArray:(id)arg0;
- (void)setCloseInterval:(double)arg0;
- (void)setCloseRateCurveArray:(id)arg0;
- (void)setCloseCardWebp:(id)arg0;
- (id /* block */)usercardCloseBlock;
- (void)setUsercardCloseBlock:(id /* block */)arg0;
- (id /* block */)onShowCompletion;
- (BOOL)fullScreenOnLandscape;
- (void)setFullScreenOnLandscape:(BOOL)arg0;
- (double)landscapeWidth;
- (void)setLandscapeWidth:(double)arg0;
- (void)setLandscape:(BOOL)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (BOOL)landscape;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundFrame;
- (void).cxx_destruct;
- (void)setView:(id)arg0;
- (id)backgroundColor;
- (double)closeInterval;
- (void)setBackgroundContainer:(id)arg0;
- (id)view;
- (void)setBackgroundColor:(id)arg0;
- (id)backgroundContainer;
- (void)setBackgroundFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
