//
//     Generated by private class-dump
//

@class DUXActionSheetViewController, NSArray, UIColor, NSString, DUXActionSheetItemModel, DUXActionSheetPresentViewController;
@protocol DUXActionSheetDelegate;

@interface DUXActionSheet : NSObject <DUXActionSheetDelegate> {
    BOOL _noticeOnCompeletion;
    BOOL _isAdaptBigFont;
    BOOL _adaptBottomSafeArea;
    BOOL _selectItemShouldDismiss;
    BOOL _tapMaskToDismiss;
    id<DUXActionSheetDelegate> _delegate;
    NSArray *_models;
    long long _type;
    unsigned long long _sheetAlignment;
    DUXActionSheetItemModel *_cancelItemModel;
    DUXActionSheetViewController *_mainViewController;
    DUXActionSheetPresentViewController *_presentVC;
    UIColor *_maskViewColor;
}

@property (retain, nonatomic) DUXActionSheetViewController *mainViewController;
@property (weak, nonatomic) DUXActionSheetPresentViewController *presentVC;
@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) UIColor *maskViewColor;
@property (nonatomic) BOOL tapMaskToDismiss;
@property (weak, nonatomic) id<DUXActionSheetDelegate> delegate;
@property BOOL noticeOnCompeletion;
@property (nonatomic) BOOL isAdaptBigFont;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long sheetAlignment;
@property (retain, nonatomic) DUXActionSheetItemModel *cancelItemModel;
@property (nonatomic) BOOL adaptBottomSafeArea;
@property (nonatomic) BOOL selectItemShouldDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)arg0 andSubtitle:(id)arg1 andModels:(id)arg2 andDelegate:(id)arg3;
- (void)actionSheet:(id)arg0 didClickButtonAtIndex:(long long)arg1;
- (void)actionSheetDidClickCancelButton:(id)arg0;
- (void)actionSheetDidClickMaskArea:(id)arg0;
- (id)initWithType:(long long)arg0 andTitle:(id)arg1 andSubtitle:(id)arg2 andModels:(id)arg3 andDelegate:(id)arg4;
- (void)setMaskViewColor:(id)arg0;
- (void)setNoticeOnCompeletion:(BOOL)arg0;
- (unsigned long long)sheetAlignment;
- (id)maskViewColor;
- (void)setSelectItemShouldDismiss:(BOOL)arg0;
- (BOOL)tapMaskToDismiss;
- (void)setTapMaskToDismiss:(BOOL)arg0;
- (id)cancelItemModel;
- (void)setCancelItemModel:(id)arg0;
- (void)setAdaptBottomSafeArea:(BOOL)arg0;
- (void)updateSheetWidth:(double)arg0 withBottomOffset:(double)arg1;
- (void)updateSheetLeftPadding:(double)arg0 withRightPadding:(double)arg1 withBottomOffset:(double)arg2;
- (void)showOnViewController:(id)arg0 compeletion:(id /* block */)arg1;
- (void)setPresentVC:(id)arg0;
- (id)presentVC;
- (void)setSheetAlignment:(unsigned long long)arg0;
- (BOOL)selectItemShouldDismiss;
- (BOOL)noticeOnCompeletion;
- (void)setIsAdaptBigFont:(BOOL)arg0;
- (void)updateSheetWidth:(double)arg0;
- (void)updateSheetLeftPadding:(double)arg0 withRightPadding:(double)arg1;
- (BOOL)isAdaptBigFont;
- (BOOL)adaptBottomSafeArea;
- (void)dismiss;
- (void).cxx_destruct;
- (id)mainViewController;
- (long long)type;
- (id)models;
- (void)setType:(long long)arg0;
- (id)delegate;
- (void)setMainViewController:(id)arg0;
- (void)setModels:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dismiss:(id /* block */)arg0;
- (void)showOnViewController:(id)arg0;

@end
