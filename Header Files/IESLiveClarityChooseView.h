//
//     Generated by private class-dump
//

@class NSMutableArray;
@protocol IESLiveClarityChooseViewDelegate;

@interface IESLiveClarityChooseView : UIView {
    BOOL _showFPSTagStyle;
    BOOL _showRectCorner;
    id<IESLiveClarityChooseViewDelegate> _delegate;
    unsigned long long _arrayDataType;
    NSMutableArray *_items;
    NSMutableArray *_qualities;
    NSMutableArray *_currentIndexs;
    NSMutableArray *_disableIndexs;
    NSMutableArray *_clarityButtonViews;
    unsigned long long _highResolutionFPSThresh;
}

@property (nonatomic) unsigned long long arrayDataType;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *qualities;
@property (nonatomic) BOOL showFPSTagStyle;
@property (nonatomic) BOOL showRectCorner;
@property (retain, nonatomic) NSMutableArray *currentIndexs;
@property (retain, nonatomic) NSMutableArray *disableIndexs;
@property (retain, nonatomic) NSMutableArray *clarityButtonViews;
@property (nonatomic) unsigned long long highResolutionFPSThresh;
@property (weak) id<IESLiveClarityChooseViewDelegate> delegate;

- (void)buttonClicked:(id)arg0;
- (void)cancelButtonClick:(id)arg0;
- (id)buildTitleLabel:(id)arg0;
- (id)initWithQualities:(id)arg0 currentIndexs:(id)arg1 disableIndexs:(id)arg2 showFPSTagStyle:(BOOL)arg3;
- (id)initWithItems:(id)arg0 currentIndexs:(id)arg1 disableIndexs:(id)arg2 showRectCorner:(BOOL)arg3;
- (void)updateWithItems:(id)arg0 currentIndexs:(id)arg1 disableIndexs:(id)arg2;
- (void)setCurrentIndexs:(id)arg0;
- (void)setDisableIndexs:(id)arg0;
- (id)currentIndexs;
- (id)disableIndexs;
- (void)setArrayDataType:(unsigned long long)arg0;
- (void)setHighResolutionFPSThresh:(unsigned long long)arg0;
- (void)_updateBtnsDisplay;
- (void)setShowFPSTagStyle:(BOOL)arg0;
- (double)_buildButtonsWithViewWidth:(double)arg0 curY:(double)arg1;
- (BOOL)showRectCorner;
- (unsigned long long)arrayDataType;
- (BOOL)showFPSTagStyle;
- (BOOL)_shouldAddHighResolutionTag:(long long)arg0;
- (void)_configBtnSelectionAndDisableType:(id)arg0 idx:(long long)arg1 isCurrentSelected:(BOOL)arg2;
- (id)clarityButtonViews;
- (unsigned long long)highResolutionFPSThresh;
- (void)setShowRectCorner:(BOOL)arg0;
- (void)setClarityButtonViews:(id)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)qualities;
- (void)setQualities:(id)arg0;
- (void)setupUI;

@end
