//
//     Generated by private class-dump
//

@class UIView, ACCGrootDetailsStickerModel, NSString, ACCGrootStickerSelectView, AWEEditGradientView, AWEVideoPublishViewModel, ACCGrootStickerView;

@interface ACCGrootStickerRecognitionView : UIView <ACCGrootStickerSelectViewDelegate> {
    BOOL _isEdting;
    ACCGrootStickerView *_grootStickerView;
    id /* block */ _onEditFinishedBlock;
    id /* block */ _finishEditAnimationBlock;
    id /* block */ _startEditBlock;
    id /* block */ _selectModelCallback;
    id /* block */ _confirmCallback;
    AWEVideoPublishViewModel *_publishModel;
    AWEEditGradientView *_upperMaskView;
    UIView *_lowerMaskView;
    UIView *_orignalSuperView;
    unsigned long long _selectedIndex;
    ACCGrootStickerSelectView *_selectGrootView;
    ACCGrootDetailsStickerModel *_snapDetailsStickerModel;
    ACCGrootDetailsStickerModel *_originalDetailsStickerModel;
}

@property (retain, nonatomic) ACCGrootStickerView *grootStickerView;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEEditGradientView *upperMaskView;
@property (retain, nonatomic) UIView *lowerMaskView;
@property (weak, nonatomic) UIView *orignalSuperView;
@property (nonatomic) BOOL isEdting;
@property (nonatomic) unsigned long long selectedIndex;
@property (retain, nonatomic) ACCGrootStickerSelectView *selectGrootView;
@property (retain, nonatomic) ACCGrootDetailsStickerModel *snapDetailsStickerModel;
@property (retain, nonatomic) ACCGrootDetailsStickerModel *originalDetailsStickerModel;
@property (copy, nonatomic) id /* block */ onEditFinishedBlock;
@property (copy, nonatomic) id /* block */ finishEditAnimationBlock;
@property (copy, nonatomic) id /* block */ startEditBlock;
@property (copy, nonatomic) id /* block */ selectModelCallback;
@property (copy, nonatomic) id /* block */ confirmCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editViewWithPublishModel:(id)arg0;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setOnEditFinishedBlock:(id /* block */)arg0;
- (id)upperMaskView;
- (id)lowerMaskView;
- (id /* block */)onEditFinishedBlock;
- (void)startEditStickerView:(id)arg0;
- (id)orignalSuperView;
- (void)setOrignalSuperView:(id)arg0;
- (void)setLowerMaskView:(id)arg0;
- (void)setUpperMaskView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 publishModel:(id)arg1;
- (void)setSelectModelCallback:(id /* block */)arg0;
- (id)grootStickerView;
- (void)setFinishEditAnimationBlock:(id /* block */)arg0;
- (void)setStartEditBlock:(id /* block */)arg0;
- (id /* block */)selectModelCallback;
- (void)setConfirmCallback:(id /* block */)arg0;
- (void)didClickedTextMaskView;
- (void)setSelectGrootView:(id)arg0;
- (id)snapDetailsStickerModel;
- (id /* block */)confirmCallback;
- (void)setSnapDetailsStickerModel:(id)arg0;
- (void)saveSelectedModelAction;
- (void)stopEdit:(BOOL)arg0 clickMask:(BOOL)arg1;
- (id)originalDetailsStickerModel;
- (void)setOriginalDetailsStickerModel:(id)arg0;
- (BOOL)isEdting;
- (void)setIsEdting:(BOOL)arg0;
- (void)setGrootStickerView:(id)arg0;
- (id)selectGrootView;
- (id /* block */)startEditBlock;
- (id /* block */)finishEditAnimationBlock;
- (void)selectedGrootStickerModel:(id)arg0 index:(unsigned long long)arg1;
- (void)didClickedSaveButtonAction:(BOOL)arg0;
- (void)didClickCancelButtonAction;
- (void)didClickAllowResearchButtonAction:(BOOL)arg0;
- (void)didSlideCard;
- (void).cxx_destruct;
- (void)setSelectedIndex:(unsigned long long)arg0;
- (void)setup;
- (unsigned long long)selectedIndex;

@end